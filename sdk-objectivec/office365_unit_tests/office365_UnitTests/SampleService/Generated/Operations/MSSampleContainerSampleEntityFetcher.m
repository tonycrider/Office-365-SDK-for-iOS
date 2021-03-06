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

#import "MSSampleContainerODataEntities.h"

@implementation MSSampleContainerSampleEntityFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    self = [super initWithUrl:urlComponent parent:parent asClass:[MSSampleContainerSampleEntity class]];

    _operations = [[MSSampleContainerSampleEntityOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    
    return self;
}

- (NSURLSessionTask *)updateSampleEntity:(id)entity withCallback:(void (^)(MSSampleContainerSampleEntity *sampleEntity, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteSampleEntity:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSSampleContainerAnotherEntityCollectionFetcher *)getNavigations {

    return [[MSSampleContainerAnotherEntityCollectionFetcher alloc] initWithUrl:@"Navigations" parent:self asClass:[MSSampleContainerAnotherEntity class]];
}

- (id<MSSampleContainerAnotherEntityFetcher>)getNavigationsById:(NSString *)_id {

    return [[[MSSampleContainerAnotherEntityCollectionFetcher alloc] initWithUrl:@"Navigations" parent:self asClass:[MSSampleContainerAnotherEntity class]] getById:_id];
}

@end