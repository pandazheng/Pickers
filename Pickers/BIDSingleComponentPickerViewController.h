//
//  BIDSingleComponentPickerViewController.h
//  Pickers
//
//  Created by panda zheng on 13-4-28.
//  Copyright (c) 2013年 panda zheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDSingleComponentPickerViewController : UIViewController <UIPickerViewDelegate,UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *singlePicker;
@property (strong, nonatomic) NSArray *characterNames;

- (IBAction) buttonPressed;

@end
