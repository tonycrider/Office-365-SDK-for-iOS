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
* The implementation file for type MSOutlookServicesUser.
*/

@implementation MSOutlookServicesUser	

@synthesize odataType = _odataType;
@synthesize DisplayName = _DisplayName;
@synthesize Alias = _Alias;
@synthesize MailboxGuid = _MailboxGuid;
@synthesize Folders = _Folders;
@synthesize Messages = _Messages;
@synthesize RootFolder = _RootFolder;
@synthesize Calendars = _Calendars;
@synthesize Calendar = _Calendar;
@synthesize CalendarGroups = _CalendarGroups;
@synthesize Events = _Events;
@synthesize CalendarView = _CalendarView;
@synthesize Contacts = _Contacts;
@synthesize ContactFolders = _ContactFolders;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.User";
    }

	return self;
}

@end