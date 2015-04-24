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

@class MSOutlookServicesItemAttachmentFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesItemAttachmentCollectionFetcher.
*/

@protocol MSOutlookServicesItemAttachmentCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookServicesItemAttachment> *itemAttachments, MSODataException *exception))callback;

- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)search:(NSString *)params;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)top:(int)value;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)skip:(int)value;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesItemAttachmentCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookServicesItemAttachmentFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)add:(MSOutlookServicesItemAttachment *)entity callback:(void (^)(MSOutlookServicesItemAttachment *itemAttachment, MSODataException *e))callback;

@end

@interface MSOutlookServicesItemAttachmentCollectionFetcher : MSODataCollectionFetcher<MSOutlookServicesItemAttachmentCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end