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

/**
* The implementation file for type MSOutlookServicesUserOperations.
*/

@implementation MSOutlookServicesUserOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (NSURLSessionTask *)sendMailWithMessage:(MSOutlookServicesMessage *)message saveToSentItems:(BOOL )saveToSentItems callback:(void (^)(int returnValue, MSODataException *exception))callback {
	
	NSString *messageString = [self.resolver.jsonSerializer serialize:message property:@"Message"];
	NSString *saveToSentItemsString = [self.resolver.jsonSerializer serialize:(saveToSentItems ? @"true" : @"false") property:@"SaveToSentItems"];
	NSURLSessionTask *task = [self sendMailRawWithMessage:messageString saveToSentItems:saveToSentItemsString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			int result = (int)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:nil];
            callback(result, exception);
        } 
		else {

            callback((int)[returnValue integerValue], exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)sendMailRawWithMessage:(NSString *) message saveToSentItems:(NSString *) saveToSentItems callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :message,@"Message", nil],
                          [[NSDictionary alloc] initWithObjectsAndKeys :saveToSentItems,@"SaveToSentItems", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"SendMail"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
@end