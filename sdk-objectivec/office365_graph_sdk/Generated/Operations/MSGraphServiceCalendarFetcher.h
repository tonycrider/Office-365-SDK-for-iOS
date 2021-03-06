/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphServiceEventFetcher;
@class MSGraphServiceEventCollectionFetcher;
@class MSGraphServiceCalendarOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceCalendarFetcher.
*/

@protocol MSGraphServiceCalendarFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceCalendar *calendar, MSODataException *exception))callback;
- (id<MSGraphServiceCalendarFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceCalendarFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceCalendarFetcher>)select:(NSString *)params;
- (id<MSGraphServiceCalendarFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceCalendarOperations *operations;

- (MSGraphServiceEventCollectionFetcher *)getCalendarView;
- (MSGraphServiceEventFetcher *) getCalendarViewById:(NSString*)_id;
- (MSGraphServiceEventCollectionFetcher *)getEvents;
- (MSGraphServiceEventFetcher *) getEventsById:(NSString*)_id;

@end

@interface MSGraphServiceCalendarFetcher : MSODataEntityFetcher<MSGraphServiceCalendarFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateCalendar:(MSGraphServiceCalendar *)calendar callback:(void (^)(MSGraphServiceCalendar *calendar, MSODataException *error))callback;
- (NSURLSessionTask *) deleteCalendar:(void (^)(int status, MSODataException *exception))callback;

@end