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

@implementation MSOutlookServicesContactFolderFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOutlookServicesContactFolder class]]) {

		_operations = [[MSOutlookServicesContactFolderOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)update:(id)entity callback:(void (^)(MSOutlookServicesContactFolder *contactFolder, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)delete:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOutlookServicesContactCollectionFetcher *)getContacts {

    return [[MSOutlookServicesContactCollectionFetcher alloc] initWithUrl:@"Contacts" parent:self asClass:[MSOutlookServicesContact class]];
}

- (id<MSOutlookServicesContactFetcher>)getContactsById:(NSString *)_id {

    return [[[MSOutlookServicesContactCollectionFetcher alloc] initWithUrl:@"Contacts" parent:self asClass:[MSOutlookServicesContact class]] getById:_id];
}

- (MSOutlookServicesContactFolderCollectionFetcher *)getChildFolders {

    return [[MSOutlookServicesContactFolderCollectionFetcher alloc] initWithUrl:@"ChildFolders" parent:self asClass:[MSOutlookServicesContactFolder class]];
}

- (id<MSOutlookServicesContactFolderFetcher>)getChildFoldersById:(NSString *)_id {

    return [[[MSOutlookServicesContactFolderCollectionFetcher alloc] initWithUrl:@"ChildFolders" parent:self asClass:[MSOutlookServicesContactFolder class]] getById:_id];
}

@end