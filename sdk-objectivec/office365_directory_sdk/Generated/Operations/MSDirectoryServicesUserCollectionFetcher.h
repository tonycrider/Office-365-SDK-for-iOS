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

@class MSDirectoryServicesUserFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesUserCollectionFetcher.
*/

@protocol MSDirectoryServicesUserCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryServicesUser> *users, MSODataException *exception))callback;

- (id<MSDirectoryServicesUserCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesUserCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryServicesUserCollectionFetcher>)top:(int)value;
- (id<MSDirectoryServicesUserCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryServicesUserCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryServicesUserCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryServicesUserCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesUserCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryServicesUserFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addUser:(MSDirectoryServicesUser *)entity callback:(void (^)(MSDirectoryServicesUser *user, MSODataException *e))callback;

@end

@interface MSDirectoryServicesUserCollectionFetcher : MSODataCollectionFetcher<MSDirectoryServicesUserCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end