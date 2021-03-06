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

@class MSGraphServiceCalendarGroupFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceCalendarGroupCollectionFetcher.
*/

@protocol MSGraphServiceCalendarGroupCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceCalendarGroup> *calendarGroups, MSODataException *exception))callback;

- (id<MSGraphServiceCalendarGroupCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceCalendarGroupCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceCalendarGroupFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCalendarGroup:(MSGraphServiceCalendarGroup *)entity callback:(void (^)(MSGraphServiceCalendarGroup *calendarGroup, MSODataException *e))callback;

@end

@interface MSGraphServiceCalendarGroupCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceCalendarGroupCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end