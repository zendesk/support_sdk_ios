/*
 *
 *  ZDKHelpCenterDataSource_PrivateSharing.h
 *  SupportSDK
 *
 *  Created by Zendesk on 23/11/2015.
 *
 *  Copyright © 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <SupportProvidersSDK/ZDKHelpCenterProvider.h>

@interface ZDKHelpCenterDataSource (PrivateSharing)

@property (nonatomic, copy) ZDKHelpCenterCallback callback;

@end
