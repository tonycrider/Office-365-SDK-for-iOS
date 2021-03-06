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

@class MSDirectoryServicesExtensionPropertyFetcher;
@class MSDirectoryServicesExtensionPropertyCollectionFetcher;
@class MSDirectoryServicesApplicationOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesApplicationFetcher.
*/

@protocol MSDirectoryServicesApplicationFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesApplication *application, MSODataException *exception))callback;
- (id<MSDirectoryServicesApplicationFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesApplicationFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesApplicationFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesApplicationFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesApplicationOperations *operations;

- (MSDirectoryServicesExtensionPropertyCollectionFetcher *)getextensionProperties;
- (MSDirectoryServicesExtensionPropertyFetcher *) getextensionPropertiesById:(NSString*)_id;

@end

@interface MSDirectoryServicesApplicationFetcher : MSODataEntityFetcher<MSDirectoryServicesApplicationFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateApplication:(MSDirectoryServicesApplication *)application callback:(void (^)(MSDirectoryServicesApplication *application, MSODataException *error))callback;
- (NSURLSessionTask *) deleteApplication:(void (^)(int status, MSODataException *exception))callback;

@end