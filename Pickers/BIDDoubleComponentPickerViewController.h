//
//  BIDDoubleComponentPickerViewController.h
//  Pickers
//
//  Created by panda zheng on 13-4-28.
//  Copyright (c) 2013年 panda zheng. All rights reserved.
//

#define kFillingComponent 0
#define kBreadComponent   1

#import <UIKit/UIKit.h>

@interface BIDDoubleComponentPickerViewController : UIViewController <UIPickerViewDataSource,UIPickerViewDelegate>

@property (strong, nonatomic) IBOutlet UIPickerView *doublePicker;
@property (strong, nonatomic) NSArray *fillingTypes;
@property (strong, nonatomic) NSArray *breadTypes;

@end
