/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSDate.h"

@interface NSDate (PKDateAdditions)
+ (id)PKDateYesterday;
+ (id)PKDateTomorrow;
+ (id)PKDateWithDaysBeforeNow:(unsigned int)arg1;
+ (id)PKDateWithDaysFromNow:(unsigned int)arg1;
- (BOOL)PKIsYesterday;
- (BOOL)PKIsTomorrow;
- (BOOL)PKIsToday;
- (BOOL)PKIsEqualToDateIgnoringTime:(id)arg1;
@end

