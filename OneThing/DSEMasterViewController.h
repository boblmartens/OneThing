//
//  DSEMasterViewController.h
//  OneThing
//
//  Created by Bob Martens on 3/29/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DSEDetailViewController;

#import <CoreData/CoreData.h>

@interface DSEMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DSEDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
