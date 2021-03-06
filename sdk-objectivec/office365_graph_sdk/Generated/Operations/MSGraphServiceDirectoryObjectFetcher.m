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

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceDirectoryObjectFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServiceDirectoryObject class]]) {

		_operations = [[MSGraphServiceDirectoryObjectOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateDirectoryObject:(id)entity callback:(void (^)(MSGraphServiceDirectoryObject *directoryObject, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteDirectoryObject:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphServiceApplicationFetcher *)asApplication {

	return [[MSGraphServiceApplicationFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceApplication class]];
}

- (MSGraphServiceExtensionPropertyFetcher *)asExtensionProperty {

	return [[MSGraphServiceExtensionPropertyFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceExtensionProperty class]];
}

- (MSGraphServiceUserFetcher *)asUser {

	return [[MSGraphServiceUserFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceUser class]];
}

- (MSGraphServiceAppRoleAssignmentFetcher *)asAppRoleAssignment {

	return [[MSGraphServiceAppRoleAssignmentFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceAppRoleAssignment class]];
}

- (MSGraphServiceContactFetcher *)asContact {

	return [[MSGraphServiceContactFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceContact class]];
}

- (MSGraphServiceDeviceFetcher *)asDevice {

	return [[MSGraphServiceDeviceFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceDevice class]];
}

- (MSGraphServiceDeviceConfigurationFetcher *)asDeviceConfiguration {

	return [[MSGraphServiceDeviceConfigurationFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceDeviceConfiguration class]];
}

- (MSGraphServiceDirectoryLinkChangeFetcher *)asDirectoryLinkChange {

	return [[MSGraphServiceDirectoryLinkChangeFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceDirectoryLinkChange class]];
}

- (MSGraphServiceDirectoryRoleFetcher *)asDirectoryRole {

	return [[MSGraphServiceDirectoryRoleFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceDirectoryRole class]];
}

- (MSGraphServiceDirectoryRoleTemplateFetcher *)asDirectoryRoleTemplate {

	return [[MSGraphServiceDirectoryRoleTemplateFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceDirectoryRoleTemplate class]];
}

- (MSGraphServiceGroupFetcher *)asGroup {

	return [[MSGraphServiceGroupFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceGroup class]];
}

- (MSGraphServiceServicePrincipalFetcher *)asServicePrincipal {

	return [[MSGraphServiceServicePrincipalFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceServicePrincipal class]];
}

- (MSGraphServiceTenantDetailFetcher *)asTenantDetail {

	return [[MSGraphServiceTenantDetailFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceTenantDetail class]];
}

@end