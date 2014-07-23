//
//  RWTScaryBugData.m
//  ScaryBugs
//
//  Created by ArmNo on 7/23/14.
//  Copyright (c) 2014 ArmNo. All rights reserved.
//

#import "RWTScaryBugData.h"

@implementation RWTScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating
{
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
