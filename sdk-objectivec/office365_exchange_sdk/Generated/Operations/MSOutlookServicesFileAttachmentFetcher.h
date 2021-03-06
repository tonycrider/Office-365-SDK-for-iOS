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

@class MSOutlookServicesFileAttachmentOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesFileAttachmentFetcher.
*/

@protocol MSOutlookServicesFileAttachmentFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookServicesFileAttachment *fileAttachment, MSODataException *exception))callback;
- (id<MSOutlookServicesFileAttachmentFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesFileAttachmentFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookServicesFileAttachmentFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesFileAttachmentFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookServicesFileAttachmentOperations *operations;


@end

@interface MSOutlookServicesFileAttachmentFetcher : MSODataEntityFetcher<MSOutlookServicesFileAttachmentFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateFileAttachment:(MSOutlookServicesFileAttachment *)fileAttachment callback:(void (^)(MSOutlookServicesFileAttachment *fileAttachment, MSODataException *error))callback;
- (NSURLSessionTask *) deleteFileAttachment:(void (^)(int status, MSODataException *exception))callback;

@end