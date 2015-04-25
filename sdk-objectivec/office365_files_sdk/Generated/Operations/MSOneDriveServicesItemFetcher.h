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

@class MSOneDriveServicesFileFetcher;
@class MSOneDriveServicesFolderFetcher;
@class MSOneDriveServicesItemOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneDriveServicesModels.h"

/**
* The header for type MSOneDriveServicesItemFetcher.
*/

@protocol MSOneDriveServicesItemFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOneDriveServicesItem *item, MSODataException *exception))callback;
- (id<MSOneDriveServicesItemFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOneDriveServicesItemFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOneDriveServicesItemFetcher>)select:(NSString *)params;
- (id<MSOneDriveServicesItemFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOneDriveServicesItemOperations *operations;

- (MSOneDriveServicesFileFetcher *)asFile;	
- (MSOneDriveServicesFolderFetcher *)asFolder;	

@end

@interface MSOneDriveServicesItemFetcher : MSODataEntityFetcher<MSOneDriveServicesItemFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSOneDriveServicesItem *)item callback:(void (^)(MSOneDriveServicesItem *item, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end