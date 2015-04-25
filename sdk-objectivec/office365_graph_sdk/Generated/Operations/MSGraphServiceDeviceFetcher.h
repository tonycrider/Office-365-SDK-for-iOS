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

@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDeviceOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDeviceFetcher.
*/

@protocol MSGraphServiceDeviceFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceDevice *device, MSODataException *exception))callback;
- (id<MSGraphServiceDeviceFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceDeviceFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceDeviceFetcher>)select:(NSString *)params;
- (id<MSGraphServiceDeviceFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceDeviceOperations *operations;

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getregisteredOwners;
- (MSGraphServiceDirectoryObjectFetcher *) getregisteredOwnersById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getregisteredUsers;
- (MSGraphServiceDirectoryObjectFetcher *) getregisteredUsersById:(NSString*)_id;

@end

@interface MSGraphServiceDeviceFetcher : MSODataEntityFetcher<MSGraphServiceDeviceFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSGraphServiceDevice *)device callback:(void (^)(MSGraphServiceDevice *device, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end