//
//  Event.h
//  OneThing
//
//  Created by Bob Martens on 3/29/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSNumber * duration;
@property (nonatomic, retain) NSDate * endTime;
@property (nonatomic, retain) NSString * eventDescription;
@property (nonatomic, retain) NSString * title;

@end
