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

#import <Foundation/Foundation.h>
#import "MSGraphServiceProtocols.h"
#import "MSGraphServiceDirectoryObject.h"

/**
* The header for type AppRoleAssignment.
*/

@interface MSGraphServiceAppRoleAssignment : MSGraphServiceDirectoryObject

@property (retain, nonatomic, readwrite, getter=creationTimestamp, setter=setCreationTimestamp:) NSDate *creationTimestamp;
@property (retain, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (retain, nonatomic, readwrite, getter=principalDisplayName, setter=setPrincipalDisplayName:) NSString *principalDisplayName;
@property (retain, nonatomic, readwrite, getter=principalId, setter=setPrincipalId:) NSString *principalId;
@property (retain, nonatomic, readwrite, getter=principalType, setter=setPrincipalType:) NSString *principalType;
@property (retain, nonatomic, readwrite, getter=resourceDisplayName, setter=setResourceDisplayName:) NSString *resourceDisplayName;
@property (retain, nonatomic, readwrite, getter=resourceId, setter=setResourceId:) NSString *resourceId;

@end