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

@class MSOutlookServicesEventFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesEventCollectionFetcher.
*/

@protocol MSOutlookServicesEventCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookServicesEvent> *events, MSODataException *exception))callback;

- (id<MSOutlookServicesEventCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesEventCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookServicesEventCollectionFetcher>)top:(int)value;
- (id<MSOutlookServicesEventCollectionFetcher>)skip:(int)value;
- (id<MSOutlookServicesEventCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookServicesEventCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookServicesEventCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesEventCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookServicesEventFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addEvent:(MSOutlookServicesEvent *)entity callback:(void (^)(MSOutlookServicesEvent *event, MSODataException *e))callback;

@end

@interface MSOutlookServicesEventCollectionFetcher : MSODataCollectionFetcher<MSOutlookServicesEventCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end