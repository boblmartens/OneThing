//
//  DSEDetailViewController.h
//  OneThing
//
//  Created by Bob Martens on 3/29/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSEDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
