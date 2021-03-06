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

@class MSDirectoryServicesDirectoryLinkChangeFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesDirectoryLinkChangeCollectionFetcher.
*/

@protocol MSDirectoryServicesDirectoryLinkChangeCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryServicesDirectoryLinkChange> *directoryLinkChanges, MSODataException *exception))callback;

- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)top:(int)value;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryServicesDirectoryLinkChangeFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addDirectoryLinkChange:(MSDirectoryServicesDirectoryLinkChange *)entity callback:(void (^)(MSDirectoryServicesDirectoryLinkChange *directoryLinkChange, MSODataException *e))callback;

@end

@interface MSDirectoryServicesDirectoryLinkChangeCollectionFetcher : MSODataCollectionFetcher<MSDirectoryServicesDirectoryLinkChangeCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end