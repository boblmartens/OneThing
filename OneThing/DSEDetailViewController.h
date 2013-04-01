//
//  DSEDetailViewController.h
//  OneThing
//
//  Created by Bob Martens on 3/29/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Event;

@interface DSEDetailViewController : UITableViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Event *event;

@end
