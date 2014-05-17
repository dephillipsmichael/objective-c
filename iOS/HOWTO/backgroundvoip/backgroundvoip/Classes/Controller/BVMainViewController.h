//
//  BVMainViewController.h
//  backgroundvoip
//
//  Created by Sergey Mamontov on 4/17/14.
//  Copyright (c) 2014 Sergey Mamontov. All rights reserved.
//

#import <UIKit/UIKit.h>


#pragma mark Public interface declaration

@interface BVMainViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UITableView *myTableView;
}

#pragma mark -

@property (strong, nonatomic) UIWindow *window;
@property IBOutlet UITableView *myTableView;

@end
