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

@class MSGraphServiceUserFetcher;
@class MSGraphServiceItemFetcher;
@class MSGraphServiceItemCollectionFetcher;
@class MSGraphServiceFileFetcher;
@class MSGraphServiceFolderFetcher;
@class MSGraphServiceItemOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceItemFetcher.
*/

@protocol MSGraphServiceItemFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceItem *item, MSODataException *exception))callback;
- (id<MSGraphServiceItemFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceItemFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceItemFetcher>)select:(NSString *)params;
- (id<MSGraphServiceItemFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceItemOperations *operations;

- (MSGraphServiceUserFetcher *)getcreatedByUser;
- (MSGraphServiceUserFetcher *)getlastModifiedByUser;
- (MSGraphServiceItemCollectionFetcher *)getchildren;
- (MSGraphServiceItemFetcher *) getchildrenById:(NSString*)_id;
- (MSGraphServiceFileFetcher *)asFile;	
- (MSGraphServiceFolderFetcher *)asFolder;	

@end

@interface MSGraphServiceItemFetcher : MSODataEntityFetcher<MSGraphServiceItemFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSGraphServiceItem *)item callback:(void (^)(MSGraphServiceItem *item, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end