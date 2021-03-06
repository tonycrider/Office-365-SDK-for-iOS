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

@class MSGraphServiceApplicationFetcher;
@class MSGraphServiceExtensionPropertyFetcher;
@class MSGraphServiceUserFetcher;
@class MSGraphServiceAppRoleAssignmentFetcher;
@class MSGraphServiceContactFetcher;
@class MSGraphServiceDeviceFetcher;
@class MSGraphServiceDeviceConfigurationFetcher;
@class MSGraphServiceDirectoryLinkChangeFetcher;
@class MSGraphServiceDirectoryRoleFetcher;
@class MSGraphServiceDirectoryRoleTemplateFetcher;
@class MSGraphServiceGroupFetcher;
@class MSGraphServiceServicePrincipalFetcher;
@class MSGraphServiceTenantDetailFetcher;
@class MSGraphServiceDirectoryObjectOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDirectoryObjectFetcher.
*/

@protocol MSGraphServiceDirectoryObjectFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceDirectoryObject *directoryObject, MSODataException *exception))callback;
- (id<MSGraphServiceDirectoryObjectFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceDirectoryObjectFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceDirectoryObjectFetcher>)select:(NSString *)params;
- (id<MSGraphServiceDirectoryObjectFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceDirectoryObjectOperations *operations;

- (MSGraphServiceApplicationFetcher *)asApplication;	
- (MSGraphServiceExtensionPropertyFetcher *)asExtensionProperty;	
- (MSGraphServiceUserFetcher *)asUser;	
- (MSGraphServiceAppRoleAssignmentFetcher *)asAppRoleAssignment;	
- (MSGraphServiceContactFetcher *)asContact;	
- (MSGraphServiceDeviceFetcher *)asDevice;	
- (MSGraphServiceDeviceConfigurationFetcher *)asDeviceConfiguration;	
- (MSGraphServiceDirectoryLinkChangeFetcher *)asDirectoryLinkChange;	
- (MSGraphServiceDirectoryRoleFetcher *)asDirectoryRole;	
- (MSGraphServiceDirectoryRoleTemplateFetcher *)asDirectoryRoleTemplate;	
- (MSGraphServiceGroupFetcher *)asGroup;	
- (MSGraphServiceServicePrincipalFetcher *)asServicePrincipal;	
- (MSGraphServiceTenantDetailFetcher *)asTenantDetail;	

@end

@interface MSGraphServiceDirectoryObjectFetcher : MSODataEntityFetcher<MSGraphServiceDirectoryObjectFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDirectoryObject:(MSGraphServiceDirectoryObject *)directoryObject callback:(void (^)(MSGraphServiceDirectoryObject *directoryObject, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDirectoryObject:(void (^)(int status, MSODataException *exception))callback;

@end