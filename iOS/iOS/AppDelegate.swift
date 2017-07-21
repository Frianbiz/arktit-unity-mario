//
//  AppDelegate.swift
//  arkit-unity-mario
//
//  Created by Eric De Sa on 21/07/2017.
//  Copyright © 2017 frianbiz. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    var currentUnityController: UnityAppController?
    var application: UIApplication?
    var isUnityRunning = false
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey : Any]? = nil) -> Bool {
        self.application = application
        unity_init(CommandLine.argc, CommandLine.unsafeArgv)
        self.currentUnityController = UnityAppController()
        self.currentUnityController?.application(application, didFinishLaunchingWithOptions: launchOptions)
        
        // first call to startUnity will do some init stuff, so just call it here and directly stop it again
        startUnity()
        stopUnity()
        
        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        if self.isUnityRunning {
            self.currentUnityController?.applicationWillResignActive(application)
        }
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        if self.isUnityRunning {
            self.currentUnityController?.applicationDidEnterBackground(application)
        }
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        if self.isUnityRunning {
            self.currentUnityController?.applicationWillEnterForeground(application)
        }
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        if self.isUnityRunning {
            self.currentUnityController?.applicationDidBecomeActive(application)
        }
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        if self.isUnityRunning {
            self.currentUnityController?.applicationWillTerminate(application)
        }
    }
    
    func startUnity() {
        if !self.isUnityRunning {
            isUnityRunning = true
            self.currentUnityController?.applicationDidBecomeActive(application!)
        }
    }
    
    func stopUnity() {
        if self.isUnityRunning {
            self.currentUnityController?.applicationWillResignActive(application!)
            isUnityRunning = false
        }
    }
}

