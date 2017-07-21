
import UIKit

@IBDesignable
open class JumpButton: UIButton {
    
    @IBInspectable open var substrateColor: UIColor = .lightGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var substrateBorderColor: UIColor = .lightGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var substrateBorderWidth: CGFloat = 1.0 { didSet { setNeedsDisplay() }}
    
    @IBInspectable open var stickSize: CGSize = CGSize(width: 50, height: 50) { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickColor: UIColor = .darkGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickBorderColor: UIColor = .darkGray { didSet { setNeedsDisplay() }}
    @IBInspectable open var stickBorderWidth: CGFloat = 1.0 { didSet { setNeedsDisplay() }}

    @IBInspectable open var fade: CGFloat = 0.5 { didSet { setNeedsDisplay() }}

    fileprivate var touched = false {
        didSet {
            UIView.animate(withDuration: 0.1, animations: { () -> Void in
                self.alpha = self.touched ? 1.0 : self.fade
            })
        }
    }
    
    open override func draw(_ rect: CGRect) {
        alpha = fade
        self.backgroundColor = .clear
        layer.backgroundColor = substrateColor.cgColor
        layer.borderColor = substrateBorderColor.cgColor
        layer.borderWidth = substrateBorderWidth
        layer.cornerRadius = bounds.width / 2
    }
    
    open override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        super.touchesBegan(touches, with: event)
        touched = true
        
        UIView.animate(withDuration: 0.1, animations: { () -> Void in
            self.touchesMoved(touches, with: event)
        })
    }
    
    open override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        super.touchesEnded(touches, with: event)
        reset()
    }
    
    open override func touchesCancelled(_ touches: Set<UITouch>, with event: UIEvent?) {
        super.touchesCancelled(touches, with: event)
        reset()
    }
    
    fileprivate func reset() {
        touched = false
    }
    
    fileprivate func clamp<T: Comparable>(_ value: T, lower: T, upper: T) -> T {
        return min(max(value, lower), upper)
    }
    
}

