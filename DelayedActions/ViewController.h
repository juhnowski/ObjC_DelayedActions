//
//  ViewController.h
//  DelayedActions
//
//  Created by SBT on 02/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *Label;

- (IBAction)PerformActionDelay:(id)sender;

@end

