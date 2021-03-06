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

@class MSGraphServiceTenantDetailFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceTenantDetailCollectionFetcher.
*/

@protocol MSGraphServiceTenantDetailCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceTenantDetail> *tenantDetails, MSODataException *exception))callback;

- (id<MSGraphServiceTenantDetailCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceTenantDetailCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceTenantDetailFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addTenantDetail:(MSGraphServiceTenantDetail *)entity callback:(void (^)(MSGraphServiceTenantDetail *tenantDetail, MSODataException *e))callback;

@end

@interface MSGraphServiceTenantDetailCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceTenantDetailCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end