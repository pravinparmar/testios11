
//  SCHOOL+CoreDataProperties.m
//  testios11
//  Created by Megha on 24/12/17.
//  Copyright © 2017 com.parmar. All rights reserved.

#import "SCHOOL+CoreDataProperties.h"

@implementation SCHOOL (CoreDataProperties)

+ (NSFetchRequest<SCHOOL *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"SCHOOL"];
}

@dynamic sname;
@dynamic sAddress;
@dynamic city;
@dynamic schoolRel;

@end
