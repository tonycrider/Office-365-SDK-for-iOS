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

@class MSGraphServiceFileFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceFileCollectionFetcher.
*/

@protocol MSGraphServiceFileCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceFile> *files, MSODataException *exception))callback;

- (id<MSGraphServiceFileCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceFileCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceFileCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceFileCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceFileCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceFileCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceFileCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceFileCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceFileFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addFile:(MSGraphServiceFile *)entity callback:(void (^)(MSGraphServiceFile *file, MSODataException *e))callback;

@end

@interface MSGraphServiceFileCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceFileCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end