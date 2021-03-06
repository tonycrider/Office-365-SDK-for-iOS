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

#import "MSOutlookServicesModels.h"

/**
* The implementation file for type MSOutlookServicesEventMessage.
*/

@implementation MSOutlookServicesEventMessage	

@synthesize odataType = _odataType;
@synthesize MeetingMessageType = _MeetingMessageType;
@synthesize Event = _Event;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.EventMessage";
    }

	return self;
}

- (void)setMeetingMessageTypeString:(NSString *)value {

	if ([value isEqualToString:@"None"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_None;
	}

	if ([value isEqualToString:@"MeetingRequest"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_MeetingRequest;
	}

	if ([value isEqualToString:@"MeetingCancelled"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_MeetingCancelled;
	}

	if ([value isEqualToString:@"MeetingAccepted"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_MeetingAccepted;
	}

	if ([value isEqualToString:@"MeetingTenativelyAccepted"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_MeetingTenativelyAccepted;
	}

	if ([value isEqualToString:@"MeetingDeclined"]) {
		
		_MeetingMessageType = MSOutlookServices_MeetingMessageType_MeetingDeclined;
	}
}
@end