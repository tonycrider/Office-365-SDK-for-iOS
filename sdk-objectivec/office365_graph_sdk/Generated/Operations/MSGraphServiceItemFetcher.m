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

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceItemFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServiceItem class]]) {

		_operations = [[MSGraphServiceItemOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateItem:(id)entity callback:(void (^)(MSGraphServiceItem *item, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteItem:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphServiceUserFetcher *) getcreatedByUser {

	 return [[MSGraphServiceUserFetcher alloc] initWithUrl:@"createdByUser" parent:self asClass:[MSGraphServiceUser class]];
}

- (MSGraphServiceUserFetcher *) getlastModifiedByUser {

	 return [[MSGraphServiceUserFetcher alloc] initWithUrl:@"lastModifiedByUser" parent:self asClass:[MSGraphServiceUser class]];
}

- (MSGraphServiceItemCollectionFetcher *)getchildren {

    return [[MSGraphServiceItemCollectionFetcher alloc] initWithUrl:@"children" parent:self asClass:[MSGraphServiceItem class]];
}

- (id<MSGraphServiceItemFetcher>)getchildrenById:(NSString *)_id {

    return [[[MSGraphServiceItemCollectionFetcher alloc] initWithUrl:@"children" parent:self asClass:[MSGraphServiceItem class]] getById:_id];
}

- (MSGraphServiceFileFetcher *)asFile {

	return [[MSGraphServiceFileFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceFile class]];
}

- (MSGraphServiceFolderFetcher *)asFolder {

	return [[MSGraphServiceFolderFetcher alloc] initWithUrl:self.urlComponent parent:self asClass:[MSGraphServiceFolder class]];
}

@end