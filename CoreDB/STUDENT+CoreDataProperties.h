//
//  STUDENT+CoreDataProperties.h
//  testios11
//
//  Created by Megha on 24/12/17.
//  Copyright © 2017 com.parmar. All rights reserved.
//

#import "STUDENT+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STUDENT (CoreDataProperties)

+ (NSFetchRequest<STUDENT *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *no;
@property (nullable, nonatomic, copy) NSString *city;
@property (nullable, nonatomic, retain) NSSet<SCHOOL *> *studentrel;

@end

@interface STUDENT (CoreDataGeneratedAccessors)

- (void)addStudentrelObject:(SCHOOL *)value;
- (void)removeStudentrelObject:(SCHOOL *)value;
- (void)addStudentrel:(NSSet<SCHOOL *> *)values;
- (void)removeStudentrel:(NSSet<SCHOOL *> *)values;

@end

NS_ASSUME_NONNULL_END
