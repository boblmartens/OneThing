//
//  DSEAppDelegate.h
//  OneThing
//
//  Created by Bob Martens on 3/29/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSEAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
