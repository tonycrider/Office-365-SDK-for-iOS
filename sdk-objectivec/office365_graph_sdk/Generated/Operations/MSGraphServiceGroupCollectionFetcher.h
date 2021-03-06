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

@class MSGraphServiceGroupFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceGroupCollectionFetcher.
*/

@protocol MSGraphServiceGroupCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceGroup> *groups, MSODataException *exception))callback;

- (id<MSGraphServiceGroupCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceGroupCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceGroupCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceGroupCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceGroupCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceGroupCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceGroupCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceGroupCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceGroupFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addGroup:(MSGraphServiceGroup *)entity callback:(void (^)(MSGraphServiceGroup *group, MSODataException *e))callback;

@end

@interface MSGraphServiceGroupCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceGroupCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end