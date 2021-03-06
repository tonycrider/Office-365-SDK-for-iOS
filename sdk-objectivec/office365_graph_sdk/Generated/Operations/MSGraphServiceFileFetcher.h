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

@class MSGraphServiceFileOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceFileFetcher.
*/

@protocol MSGraphServiceFileFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceFile *file, MSODataException *exception))callback;
- (id<MSGraphServiceFileFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceFileFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceFileFetcher>)select:(NSString *)params;
- (id<MSGraphServiceFileFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceFileOperations *operations;


@end

@interface MSGraphServiceFileFetcher : MSODataEntityFetcher<MSGraphServiceFileFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateFile:(MSGraphServiceFile *)file callback:(void (^)(MSGraphServiceFile *file, MSODataException *error))callback;
- (NSURLSessionTask *) deleteFile:(void (^)(int status, MSODataException *exception))callback;

@end