//
//  RWTScaryBugData.h
//  ScaryBugs
//
//  Created by ArmNo on 7/23/14.
//  Copyright (c) 2014 ArmNo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RWTScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating;

@end
