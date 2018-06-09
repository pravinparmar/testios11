//
//  STUDENT+CoreDataProperties.m
//  testios11
//
//  Created by Megha on 24/12/17.
//  Copyright © 2017 com.parmar. All rights reserved.
//

#import "STUDENT+CoreDataProperties.h"

@implementation STUDENT (CoreDataProperties)

+ (NSFetchRequest<STUDENT *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STUDENT"];
}

@dynamic name;
@dynamic no;
@dynamic city;
@dynamic studentrel;

@end
