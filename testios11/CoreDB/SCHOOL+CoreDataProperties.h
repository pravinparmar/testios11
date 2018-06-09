//
//  SCHOOL+CoreDataProperties.h
//  testios11
//
//  Created by Megha on 24/12/17.
//  Copyright © 2017 com.parmar. All rights reserved.
//

#import "SCHOOL+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface SCHOOL (CoreDataProperties)

+ (NSFetchRequest<SCHOOL *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *sname;
@property (nullable, nonatomic, copy) NSString *sAddress;
@property (nullable, nonatomic, copy) NSString *city;
@property (nullable, nonatomic, retain) STUDENT *schoolRel;

@end

NS_ASSUME_NONNULL_END
