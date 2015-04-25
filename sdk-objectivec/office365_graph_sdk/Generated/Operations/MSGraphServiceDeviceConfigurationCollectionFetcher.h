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

@class MSGraphServiceDeviceConfigurationFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDeviceConfigurationCollectionFetcher.
*/

@protocol MSGraphServiceDeviceConfigurationCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceDeviceConfiguration> *deviceConfigurations, MSODataException *exception))callback;

- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)search:(NSString *)params;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceDeviceConfigurationCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceDeviceConfigurationFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)add:(MSGraphServiceDeviceConfiguration *)entity callback:(void (^)(MSGraphServiceDeviceConfiguration *deviceConfiguration, MSODataException *e))callback;

@end

@interface MSGraphServiceDeviceConfigurationCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceDeviceConfigurationCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end