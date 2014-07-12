//
//  Task.h
//  SwiftClass Todo
//
//  Created by Rushindra Sinha on 7/12/14.
//  Copyright (c) 2014 Uninhibited Innovations. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

- (id) initWithName:(NSString *) name;


@property (nonatomic, copy) NSString *name;

@end
