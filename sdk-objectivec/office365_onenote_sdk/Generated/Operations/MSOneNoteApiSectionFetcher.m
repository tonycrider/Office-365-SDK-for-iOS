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

#import "MSOneNoteApiODataEntities.h"

@implementation MSOneNoteApiSectionFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOneNoteApiSection class]]) {

		_operations = [[MSOneNoteApiSectionOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateSection:(id)entity callback:(void (^)(MSOneNoteApiSection *section, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteSection:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOneNoteApiNotebookFetcher *) getparentNotebook {

	 return [[MSOneNoteApiNotebookFetcher alloc] initWithUrl:@"parentNotebook" parent:self asClass:[MSOneNoteApiNotebook class]];
}

- (MSOneNoteApiSectionGroupFetcher *) getparentSectionGroup {

	 return [[MSOneNoteApiSectionGroupFetcher alloc] initWithUrl:@"parentSectionGroup" parent:self asClass:[MSOneNoteApiSectionGroup class]];
}

- (MSOneNoteApiPageCollectionFetcher *)getpages {

    return [[MSOneNoteApiPageCollectionFetcher alloc] initWithUrl:@"pages" parent:self asClass:[MSOneNoteApiPage class]];
}

- (id<MSOneNoteApiPageFetcher>)getpagesById:(NSString *)_id {

    return [[[MSOneNoteApiPageCollectionFetcher alloc] initWithUrl:@"pages" parent:self asClass:[MSOneNoteApiPage class]] getById:_id];
}

@end