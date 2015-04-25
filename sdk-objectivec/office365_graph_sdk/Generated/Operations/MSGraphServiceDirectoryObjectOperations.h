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
					  		
#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDirectoryObjectOperations.
*/

@interface MSGraphServiceDirectoryObjectOperations : MSODataOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

- (NSURLSessionTask *)checkMemberGroupsWithGroupIds:(NSString *)groupIds callback:(void (^)(NSMutableArray *string, MSODataException *exception))callback;
- (NSURLSessionTask *)checkMemberGroupsRawWithGroupIds:(NSString *) groupIds callback:(void(^)(NSString *returnValue, MSODataException *exception))callback;
- (NSURLSessionTask *)getMemberGroupsWithSecurityEnabledOnly:(BOOL)securityEnabledOnly callback:(void (^)(NSMutableArray *string, MSODataException *exception))callback;
- (NSURLSessionTask *)getMemberGroupsRawWithSecurityEnabledOnly:(NSString *) securityEnabledOnly callback:(void(^)(NSString *returnValue, MSODataException *exception))callback;
- (NSURLSessionTask *)getMemberObjectsWithSecurityEnabledOnly:(BOOL)securityEnabledOnly callback:(void (^)(NSMutableArray *string, MSODataException *exception))callback;
- (NSURLSessionTask *)getMemberObjectsRawWithSecurityEnabledOnly:(NSString *) securityEnabledOnly callback:(void(^)(NSString *returnValue, MSODataException *exception))callback;

@end