//
//  StaticFramework.m
//  StaticFramework
//
//  Created by Cory D. Wiles on 1/23/12.
//  Copyright (c) 2012 VW. All rights reserved.
//

#import "StaticFramework.h"

@implementation StaticFramework

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (NSString *)helloWorld {
  return @"This method should be included in static framework";
}

@end
