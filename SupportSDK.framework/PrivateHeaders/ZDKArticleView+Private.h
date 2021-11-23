/*
 *
 *  ZDKArticleView+Private.h
 *  SupportSDK
 *
 *  Created by Zendesk on 03/08/2016.
 *
 *  Copyright © 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */
#import <WebKit/WebKit.h>
#import "ZDKArticleView.h"

@interface ZDKArticleView ()

/**
 *  Loading spinner delegate for article deeplinking.
 *
 *  @since 1.5.0.1
 */
@property (nonatomic, strong) id<ZDKSpinnerDelegate> articleLoadSpinner UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIView *articleBackground;
@property (nonatomic, strong) UIView *separator;
@property (nonatomic, strong) NSString *html;

/**
 *  Renders the article passed into it in the view.
 */
- (void)renderArticle:(ZDKHelpCenterArticle *)article withHelpCenterSettings:(ZDKHelpCenterSettings *)helpCenterSettings;

/**
 * Initializes the article controller with an article.
 */
- (instancetype) initWithArticle:(ZDKHelpCenterArticle *)article withHelpCenterSettings:(ZDKHelpCenterSettings *)helpCenterSettings;

/**
 * Set the article with html string.
 */
- (WKWebView *) setUpWebViewWithArticle:(ZDKHelpCenterArticle *)article;

@end
