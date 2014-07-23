//
//  RWTScaryBugDoc.h
//  ScaryBugs
//
//  Created by ArmNo on 7/23/14.
//  Copyright (c) 2014 ArmNo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RWTScaryBugData;

@interface RWTScaryBugDoc : NSObject

@property (strong) RWTScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end
