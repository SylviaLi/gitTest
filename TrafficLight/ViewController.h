//
//  ViewController.h
//  TrafficLight
//
//  Created by Miaoyu li on 4/5/17.
//  Copyright © 2017 Miaoyu li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    NSTimer *timer;
    NSTimer *scoreTimer;
    
    int timerInt;
    int scoreInt;
}

@property (strong, nonatomic) IBOutlet UIImageView *trafficLight;
@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;
@property (strong, nonatomic) IBOutlet UIButton *startButton;

- (IBAction)startStop:(id)sender;

@end

