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

@class MSOutlookServicesAttachmentFetcher;
@class MSOutlookServicesAttachmentCollectionFetcher;
@class MSOutlookServicesCalendarFetcher;
@class MSOutlookServicesEventFetcher;
@class MSOutlookServicesEventCollectionFetcher;
@class MSOutlookServicesEventOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesEventFetcher.
*/

@protocol MSOutlookServicesEventFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookServicesEvent *event, MSODataException *exception))callback;
- (id<MSOutlookServicesEventFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesEventFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookServicesEventFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesEventFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookServicesEventOperations *operations;

- (MSOutlookServicesAttachmentCollectionFetcher *)getAttachments;
- (MSOutlookServicesAttachmentFetcher *) getAttachmentsById:(NSString*)_id;
- (MSOutlookServicesCalendarFetcher *)getCalendar;
- (MSOutlookServicesEventCollectionFetcher *)getInstances;
- (MSOutlookServicesEventFetcher *) getInstancesById:(NSString*)_id;

@end

@interface MSOutlookServicesEventFetcher : MSODataEntityFetcher<MSOutlookServicesEventFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSOutlookServicesEvent *)event callback:(void (^)(MSOutlookServicesEvent *event, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end