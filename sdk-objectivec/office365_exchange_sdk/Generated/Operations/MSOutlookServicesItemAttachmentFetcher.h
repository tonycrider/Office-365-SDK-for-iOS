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

@class MSOutlookServicesItemFetcher;
@class MSOutlookServicesItemAttachmentOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesItemAttachmentFetcher.
*/

@protocol MSOutlookServicesItemAttachmentFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookServicesItemAttachment *itemAttachment, MSODataException *exception))callback;
- (id<MSOutlookServicesItemAttachmentFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesItemAttachmentFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookServicesItemAttachmentFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesItemAttachmentFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookServicesItemAttachmentOperations *operations;

- (MSOutlookServicesItemFetcher *)getItem;

@end

@interface MSOutlookServicesItemAttachmentFetcher : MSODataEntityFetcher<MSOutlookServicesItemAttachmentFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateItemAttachment:(MSOutlookServicesItemAttachment *)itemAttachment callback:(void (^)(MSOutlookServicesItemAttachment *itemAttachment, MSODataException *error))callback;
- (NSURLSessionTask *) deleteItemAttachment:(void (^)(int status, MSODataException *exception))callback;

@end