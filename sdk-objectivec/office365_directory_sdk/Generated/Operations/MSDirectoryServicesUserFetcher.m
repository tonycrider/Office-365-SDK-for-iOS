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

#import "MSDirectoryServicesODataEntities.h"

@implementation MSDirectoryServicesUserFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSDirectoryServicesUser class]]) {

		_operations = [[MSDirectoryServicesUserOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateUser:(id)entity callback:(void (^)(MSDirectoryServicesUser *user, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteUser:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSDirectoryServicesAppRoleAssignmentCollectionFetcher *)getappRoleAssignments {

    return [[MSDirectoryServicesAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self asClass:[MSDirectoryServicesAppRoleAssignment class]];
}

- (id<MSDirectoryServicesAppRoleAssignmentFetcher>)getappRoleAssignmentsById:(NSString *)_id {

    return [[[MSDirectoryServicesAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self asClass:[MSDirectoryServicesAppRoleAssignment class]] getById:_id];
}

- (MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher *)getoauth2PermissionGrants {

    return [[MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher alloc] initWithUrl:@"oauth2PermissionGrants" parent:self asClass:[MSDirectoryServicesOAuth2PermissionGrant class]];
}

- (id<MSDirectoryServicesOAuth2PermissionGrantFetcher>)getoauth2PermissionGrantsById:(NSString *)_id {

    return [[[MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher alloc] initWithUrl:@"oauth2PermissionGrants" parent:self asClass:[MSDirectoryServicesOAuth2PermissionGrant class]] getById:_id];
}

- (MSDirectoryServicesDirectoryObjectCollectionFetcher *)getownedDevices {

    return [[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedDevices" parent:self asClass:[MSDirectoryServicesDirectoryObject class]];
}

- (id<MSDirectoryServicesDirectoryObjectFetcher>)getownedDevicesById:(NSString *)_id {

    return [[[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedDevices" parent:self asClass:[MSDirectoryServicesDirectoryObject class]] getById:_id];
}

- (MSDirectoryServicesDirectoryObjectCollectionFetcher *)getregisteredDevices {

    return [[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredDevices" parent:self asClass:[MSDirectoryServicesDirectoryObject class]];
}

- (id<MSDirectoryServicesDirectoryObjectFetcher>)getregisteredDevicesById:(NSString *)_id {

    return [[[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredDevices" parent:self asClass:[MSDirectoryServicesDirectoryObject class]] getById:_id];
}

@end