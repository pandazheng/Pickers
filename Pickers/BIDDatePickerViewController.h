//
//  BIDDatePickerViewController.h
//  Pickers
//
//  Created by panda zheng on 13-4-28.
//  Copyright (c) 2013年 panda zheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDDatePickerViewController : UIViewController

@property (strong,nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction) buttonPressed;

@end
