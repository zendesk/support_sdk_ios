/*
 *
 *  ZDKAppearanceApplicator+Private.h
 *  SupportSDK
 *
 *  Created by Zendesk on 3/7/16.
 *
 *  Copyright © 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import "ZDKAppearanceApplicator.h"

@class ZDKLegacyTheme;

@interface ZDKAppearanceApplicator ()

+ (instancetype) instance;

+ (id) objectForKey:(NSString*) key;

//For testing
+ (void) resetSingelton;

+ (UIColor *)primaryTextColor;

+ (UIColor *)primaryBackgroundColor;

+ (UIColor *)emptyBackgroundColor;

+ (UIColor *)secondaryBackgroundColor;

+ (UIColor *)metaTextColor;

+ (UIColor *)separatorColor;

+ (UIColor *)inputFieldBackgroundColor;

+ (UIColor *)inputFieldTextColor;

@property (nonatomic, strong) ZDKLegacyTheme *currentTheme;

@end
