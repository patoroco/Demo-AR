//
//  JOAppDelegate.h
//  Demo AR
//
//  Created by Jorge Maroto Garcia on 15/7/13.
//  Copyright (c) 2013 Tactilapp.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@class AugmentedGeoViewController;

@interface JOAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) AugmentedGeoViewController *augViewController;
@property (strong, nonatomic) CLLocationManager *locationManager;
@end
