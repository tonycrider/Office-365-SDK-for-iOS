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

@class MSOneDriveServicesCurrentUserRequestContextFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneDriveServicesModels.h"

/**
* The header for type MSOneDriveServicesCurrentUserRequestContextCollectionFetcher.
*/

@protocol MSOneDriveServicesCurrentUserRequestContextCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOneDriveServicesCurrentUserRequestContext> *currentUserRequestContexts, MSODataException *exception))callback;

- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)select:(NSString *)params;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)filter:(NSString *)params;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)top:(int)value;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)skip:(int)value;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)expand:(NSString *)value;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOneDriveServicesCurrentUserRequestContextFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCurrentUserRequestContext:(MSOneDriveServicesCurrentUserRequestContext *)entity callback:(void (^)(MSOneDriveServicesCurrentUserRequestContext *currentUserRequestContext, MSODataException *e))callback;

@end

@interface MSOneDriveServicesCurrentUserRequestContextCollectionFetcher : MSODataCollectionFetcher<MSOneDriveServicesCurrentUserRequestContextCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end