//
//  DSEEventCell.h
//  OneThing
//
//  Created by Bob Martens on 3/30/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSEEventCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@end
