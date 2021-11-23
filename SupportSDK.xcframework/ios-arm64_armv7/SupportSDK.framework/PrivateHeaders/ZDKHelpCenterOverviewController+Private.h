/*
 *
 *  ZDKHelpCenterOverviewController+Private.h
 *  SupportSDK
 *
 *  Created by Zendesk on 30/05/2016.
 *
 *  Copyright © 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import "ZDKHelpCenterOverviewController+Reachability.h"

@class ZDKToastViewWrapper, ZDKHelpCenterSearchResultViewController, ZDKHelpCenterOverviewTableHandler, ZDKReachabilityWrapper, ZDKHelpCenterProvider, ZDKHelpCenterSearch;
@interface ZDKHelpCenterOverviewController (Private)

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet ZDKToastViewWrapper *toastWrapper;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loadingSpinner;
@property (strong, nonatomic) UISearchController *searchController;
@property (strong, nonatomic) ZDKHelpCenterOverviewTableHandler *tableHandler;
@property (strong, nonatomic) ZDKHelpCenterSearchResultViewController *resultsController;

@property (nonatomic, strong) ZDKReachabilityWrapper *reachability;
@property (strong, nonatomic) ZDKHelpCenterProvider *provider;
@property (nonatomic, assign) BOOL isConversationsEnabled;
@property (nonatomic, strong) ZDKHelpCenterOverviewContentModel *helpCenterContentModel;

- (void)fetchSettingsWithCompletionBlock:(void (^)(BOOL isConversationEnabled, NSString *locale))completion;
- (UIBarButtonItem *)rightBarButton;
- (void) fetchTableData;
- (void) showContact;
- (void)dismiss;

@end
