//
//  CCDJoystick.swift
//  CCDJoystickSample
//
//  Created by Cole Dunsby on 2015-12-21.
//  Copyright © 2016 Cole Dunsby. All rights reserved.
//  * Modified by Tsvetan Raikov to support ObjC.
//
import UIKit

@objc(CCDJoystickData)
open class CCDJoystickData: NSObject {
    @objc(velocity)
    open var velocity: CGPoint = .zero
    @objc(angle)
    open var angle: CGFloat = 0.0
    @objc(x)
    open var x: Float {
        get { return Float(self.velocity.x) }
    }
    @objc(y)
    open var y: Float {
        get { return Float(self.velocity.y) }
    }
}

@IBDesignable
open class CCDJoystick: UIView {
    
    @IBInspectable open var substrateColor: UIColor = .lightGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var substrateBorderColor: UIColor = .lightGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var substrateBorderWidth: CGFloat = 1.0 { didSet { setNeedsDisplay() }}
    
    @IBInspectable open var stickSize: CGSize = CGSize(width: 50, height: 50) { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickColor: UIColor = .darkGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickBorderColor: UIColor = .darkGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickBorderWidth: CGFloat = 1.0 { didSet { setNeedsDisplay() }}
    
    @IBInspectable open var fade: CGFloat = 0.5 { didSet { setNeedsDisplay() }}
    
    open var trackingHandler: ((CCDJoystickData) -> ())?
    
    fileprivate var data = CCDJoystickData()
    fileprivate var stickView = UIView(frame: CGRect(origin: .zero, size: .zero))
    fileprivate var displayLink: CADisplayLink?
    
    fileprivate var tracking = false {
        didSet {
            UIView.animate(withDuration: 0.1, animations: { () -> Void in
                self.alpha = self.tracking ? 1.0 : self.fade
            })
        }
    }
    
    override public init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    public required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        setup()
    }
    
    fileprivate func setup() {
        displayLink = CADisplayLink(target: self, selector: #selector(CCDJoystick.listen))
        displayLink?.add(to: .current, forMode: RunLoopMode.commonModes)
    }
    
    open func listen() {
        guard tracking else { return }
        trackingHandler?(data)
    }
    
    open override func draw(_ rect: CGRect) {
        alpha = fade
        
        layer.backgroundColor = substrateColor.cgColor
        layer.borderColor = substrateBorderColor.cgColor
        layer.borderWidth = substrateBorderWidth
        layer.cornerRadius = bounds.width / 2
        
        stickView.frame = CGRect(origin: .zero, size: stickSize)
        stickView.center = CGPoint(x: bounds.width / 2, y: bounds.height / 2)
        stickView.layer.backgroundColor = stickColor.cgColor
        stickView.layer.borderColor = stickBorderColor.cgColor
        stickView.layer.borderWidth = stickBorderWidth
        stickView.layer.cornerRadius = stickSize.width / 2
        
        if let superview = stickView.superview {
            superview.bringSubview(toFront: stickView)
        } else {
            addSubview(stickView)
        }
    }
    
    open override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        tracking = true
        
        UIView.animate(withDuration: 0.1, animations: { () -> Void in
            self.touchesMoved(touches, with: event)
        })
    }
    
    open override func touchesMoved(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first {
            let location = touch.location(in: self)
            let distance = CGPoint(x: location.x - bounds.size.width / 2, y: location.y - bounds.size.height / 2)
            let magV = sqrt(pow(distance.x, 2) + pow(distance.y, 2))
            
            if magV <= stickView.frame.size.width {
                stickView.center = CGPoint(x: distance.x + bounds.size.width / 2, y: distance.y + bounds.size.width / 2)
            } else {
                let aX = distance.x / magV * stickView.frame.size.width
                let aY = distance.y / magV * stickView.frame.size.width
                stickView.center = CGPoint(x: aX + bounds.size.width / 2, y: aY + bounds.size.width / 2)
            }
            
            let x = clamp(distance.x, lower: -bounds.size.width / 2, upper: bounds.size.width / 2) / (bounds.size.width / 2)
            let y = clamp(distance.y, lower: -bounds.size.height / 2, upper: bounds.size.height / 2) / (bounds.size.height / 2)
            
            data = CCDJoystickData()
            data.velocity = CGPoint(x: x, y: y)
            data.angle = -atan2(x, y)
        }
    }
    
    open override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        reset()
    }
    
    open override func touchesCancelled(_ touches: Set<UITouch>, with event: UIEvent?) {
        reset()
    }
    
    fileprivate func reset() {
        tracking = false
        data = CCDJoystickData()
        if (trackingHandler != nil) {
            trackingHandler?(data)
        }
        
        UIView.animate(withDuration: 0.1, animations: { () -> Void in
            self.stickView.center = CGPoint(x: self.bounds.width / 2, y: self.bounds.height / 2)
        })
    }
    
    fileprivate func clamp<T: Comparable>(_ value: T, lower: T, upper: T) -> T {
        return min(max(value, lower), upper)
    }
    
}
