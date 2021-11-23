/*
 *
 *  ZDKSupportAttachmentCell+Private.h
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

@interface ZDKSupportAttachmentCell ()

/**
 * Background color for the view.
 */
@property (nonatomic, strong) UIColor *viewBackgroundColor UI_APPEARANCE_SELECTOR;


/**
 * Attachment file size label font.
 */
@property (nonatomic, strong) UIFont *fileSizeLabelFont UI_APPEARANCE_SELECTOR;

/**
 *  Attachment file size label color.
 */
@property (nonatomic, strong) UIColor *fileSizeLabelColor UI_APPEARANCE_SELECTOR;

/**
 * Attachment file size label background color.
 */
@property (nonatomic, strong) UIColor *fileSizeLabelBackground UI_APPEARANCE_SELECTOR;

/**
 * Title label font.
 */
@property (nonatomic, strong) UIFont *titleLabelFont UI_APPEARANCE_SELECTOR;

/**
 * Title label color.
 */
@property (nonatomic, strong) UIColor *titleLabelColor UI_APPEARANCE_SELECTOR;

/**
 * Title label background color.
 */
@property (nonatomic, strong) UIColor *titleLabelBackground UI_APPEARANCE_SELECTOR;

@end
