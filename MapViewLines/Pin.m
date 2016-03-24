//
//  Pin.m
//  Locations
//
//  Created by EL ALAMI Yahya on 20/03/2016.
//  Copyright (c) 2016 EL ALAMI Yahya. All rights reserved.
//

#import "Pin.h"

@implementation Pin

- (id)initWithCoordinate:(CLLocationCoordinate2D)newCoordinate {
    
    self = [super init];
    if (self) {
        _coordinate = newCoordinate;
        _title = @"Hello";
        _subtitle = @"Are you still there?";
    }
    return self;
}

@end
