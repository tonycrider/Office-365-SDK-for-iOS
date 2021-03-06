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

#import "MSOutlookServicesODataEntities.h"

@implementation MSOutlookServicesEntityFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOutlookServicesEntity class]]) {

		_operations = [[MSOutlookServicesEntityOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateEntity:(id)entity callback:(void (^)(MSOutlookServicesEntity *entity, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteEntity:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOutlookServicesAttachmentFetcher *)asAttachment {

	return [[MSOutlookServicesAttachmentFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesAttachment class]];
}

- (MSOutlookServicesItemFetcher *)asItem {

	return [[MSOutlookServicesItemFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesItem class]];
}

- (MSOutlookServicesUserFetcher *)asUser {

	return [[MSOutlookServicesUserFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesUser class]];
}

- (MSOutlookServicesFolderFetcher *)asFolder {

	return [[MSOutlookServicesFolderFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesFolder class]];
}

- (MSOutlookServicesCalendarFetcher *)asCalendar {

	return [[MSOutlookServicesCalendarFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesCalendar class]];
}

- (MSOutlookServicesCalendarGroupFetcher *)asCalendarGroup {

	return [[MSOutlookServicesCalendarGroupFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesCalendarGroup class]];
}

- (MSOutlookServicesContactFolderFetcher *)asContactFolder {

	return [[MSOutlookServicesContactFolderFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSOutlookServicesContactFolder class]];
}

@end