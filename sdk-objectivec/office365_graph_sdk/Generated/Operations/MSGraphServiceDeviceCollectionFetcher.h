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

@class MSGraphServiceDeviceFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDeviceCollectionFetcher.
*/

@protocol MSGraphServiceDeviceCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceDevice> *devices, MSODataException *exception))callback;

- (id<MSGraphServiceDeviceCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceDeviceCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceDeviceCollectionFetcher>)search:(NSString *)params;
- (id<MSGraphServiceDeviceCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceDeviceCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceDeviceCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceDeviceCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceDeviceCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceDeviceCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceDeviceFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)add:(MSGraphServiceDevice *)entity callback:(void (^)(MSGraphServiceDevice *device, MSODataException *e))callback;

@end

@interface MSGraphServiceDeviceCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceDeviceCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end