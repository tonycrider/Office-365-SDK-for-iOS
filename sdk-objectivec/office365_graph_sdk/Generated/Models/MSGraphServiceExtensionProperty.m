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

#import "MSGraphServiceModels.h"

/**
* The implementation file for type MSGraphServiceExtensionProperty.
*/

@implementation MSGraphServiceExtensionProperty	

@synthesize odataType = _odataType;
@synthesize appDisplayName = _appDisplayName;
@synthesize name = _name;
@synthesize dataType = _dataType;
@synthesize isSyncedFromOnPremises = _isSyncedFromOnPremises;
@synthesize targetObjects = _targetObjects;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.ExtensionProperty";
    }

	return self;
}

@end