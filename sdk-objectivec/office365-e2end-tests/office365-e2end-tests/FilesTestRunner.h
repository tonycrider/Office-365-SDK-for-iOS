/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/


#import "BaseTestRunner.h"
#import "Test.h"

@interface FilesTestRunner : BaseTestRunner

@property MSOneDriveServicesClient *Client;

-(id)initWithClient : (MSOneDriveServicesClient*)client;
@end
