//
//  ViewController.swift
//  arkit-unity-mario
//
//  Created by Eric De Sa on 21/07/2017.
//  Copyright © 2017 frianbiz. All rights reserved.
//

import UIKit
import AudioToolbox
import AVFoundation

class ViewController: UIViewController {

    var unityView: UIView?
    var jumpSound: AVAudioPlayer?
    
    @IBOutlet var joystickView: CCDJoystick?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        DispatchQueue.main.asyncAfter(deadline: .now() + 1) {
            self.startUnity()
        }
        
        joystickView?.trackingHandler = { data in
            if data.x < 0 {
                print("left")
                UnitySendMessage("CustomController", "goLeft", nil)
            } else if data.x > 0 {
                print("right")
                UnitySendMessage("CustomController", "goRight", nil)
            }
        }
        
        
        do {
            if let path = Bundle.main.path(forResource: "jump", ofType:"wav") {
                let url = URL(fileURLWithPath: path)
                let sound = try AVAudioPlayer(contentsOf: url)
                sound.numberOfLoops = 0
                self.jumpSound = sound
            }
        } catch {
            print("error loading file")
            // couldn't load file :(
        }
        
        self.addMask()
    }
    
    func addMask() {
        /*
        if let maskImage = UIImage(named: "marioMask") {
            let launchView = UIView()
            launchView.backgroundColor = .black
            launchView.frame = self.view.bounds
            launchView.mask = UIImageView(image: maskImage)
            launchView.autoresizingMask = [.flexibleWidth, .flexibleHeight]
            self.view.addSubview(launchView)
        }
 */
    }
    
    func startUnity() {
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.startUnity()
        
        if let unityView = UnityGetGLView() {
            unityView.frame = self.view.bounds
            unityView.autoresizingMask = [.flexibleWidth, .flexibleHeight]
            self.view.insertSubview(unityView, at:0)
            
            self.unityView = unityView
        }
        
    }
    
    
    @IBAction func jumpHandler(sender: AnyObject) {
        print("jump")
        self.playJumpSound()
        UnitySendMessage("CustomController", "Jump", "")
    }
    
    func playJumpSound(){
        if let sound = self.jumpSound {
            sound.play()
        }
        
    }
}

