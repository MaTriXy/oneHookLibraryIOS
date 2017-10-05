//
//  NSDate+Utility.h
//  oneHookLibrary
//
//  Created by Eagle Diao on 2015-05-18.
//  Copyright (c) 2015 oneHook inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Utility)

+ (NSString*)getWeekdaySymbolAt:(int)weekday;
- (int)weekdayIndex;


- (NSDate *)beginningOfDay;
- (NSDate *)endOfDay;
- (NSDate *)yesterday;
- (BOOL)isSameDay:(NSDate*)other;
- (NSDate *)dateWithOutTime;

+ (NSDateFormatter*)isoDateFormatter;
+ (NSDateFormatter*)isoDateFormatterNoTimeZone;
- (NSString *)shortTime;
- (NSString *)relativeTime;
- (NSString *)relativeTimeShort;
- (NSString *)shortDate;
- (NSString *)shortDateWithYear;
- (NSString *)shortWeek;
- (NSString *)shortDateUTC;
- (NSString *)shortDateWithYearUTC;
- (NSString *)shortWeekUTC;
- (int)year;

@end
