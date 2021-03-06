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

@class MSGraphServiceEventMessageFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceEventMessageCollectionFetcher.
*/

@protocol MSGraphServiceEventMessageCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceEventMessage> *eventMessages, MSODataException *exception))callback;

- (id<MSGraphServiceEventMessageCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceEventMessageCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceEventMessageCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceEventMessageCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceEventMessageCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceEventMessageCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceEventMessageCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceEventMessageCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceEventMessageFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addEventMessage:(MSGraphServiceEventMessage *)entity callback:(void (^)(MSGraphServiceEventMessage *eventMessage, MSODataException *e))callback;

@end

@interface MSGraphServiceEventMessageCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceEventMessageCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end