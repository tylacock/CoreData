//
//  CoreDataViewController.h
//  CoreData
//
//  Created by Lacock, Ty on 1/9/14.
//  Copyright (c) 2014 TWL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface CoreDataViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UILabel *status;


- (IBAction)saveData:(UIButton *)sender;
- (IBAction)findContact:(UIButton *)sender;



@end
