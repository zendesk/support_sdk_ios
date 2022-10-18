//
//  ZDKArticleViewController+Private.h
//  SupportSDK
//
//  Created by Alan Egan on 28/11/2017.
//  Copyright © 2017 Zendesk. All rights reserved.
//

@protocol ZDKConfiguration;
@class ZDKHelpCenterArticleViewModel;

@interface ZDKArticleViewController (Private)

/**
 *  Initializes the article controller with an article view model which trigger a network call
 *  to fetch the full article model.
 *
 *  @param articleViewModel An articleViewModel
 *
 *  @since 1.7.0.1
 */
- (instancetype) initWithArticleViewModel:(ZDKHelpCenterArticleViewModel *)articleViewModel
                               andConfigs:(NSArray<id <ZDKConfiguration>> *)configs;

@end

