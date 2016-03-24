//
//  Pin.h
//  Locations
//
//  Created by EL ALAMI Yahya on 20/03/2016.
//  Copyright (c) 2016 EL ALAMI Yahya. All rights reserved.
//

#import <Foundation/Foundation.h>
@import MapKit;

@interface Pin : NSObject <MKAnnotation> 

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

- (id)initWithCoordinate:(CLLocationCoordinate2D)newCoordinate;

@end
