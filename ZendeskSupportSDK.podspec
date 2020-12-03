Pod::Spec.new do |s|
  s.name         = "ZendeskSupportSDK"
  s.version      = "5.2.0"
  s.summary      = "ZendeskSupportSDK #{s.version.to_s}"
  s.homepage     = "https://developer.zendesk.com/embeddables"
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
    ZendeskSDKs
    Created by Zendesk on  1/09/2020
    Copyright (c) 2020 Zendesk. All rights reserved.
    By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
    Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
    Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
    acknowledge that such terms govern Your use of and access to the Mobile SDK.
    LICENSE
  }
  s.author       = 'Zendesk'
  s.platform     = :ios, '10.0'
  s.requires_arc = true
  s.swift_version = '5.3'
  s.cocoapods_version = '>= 1.9.3'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.source       = { :git => "https://github.com/zendesk/support_sdk_ios.git", :tag => s.version }
  s.vendored_frameworks = 'SupportSDK.xcframework'
  s.preserve_paths = 'SupportSDK.xcframework', 'SupportSDK.dSYMs/*.dSYM'
  s.dependency 'ZendeskSupportProvidersSDK', '~> 5.2.0'
  s.dependency 'ZendeskMessagingSDK', '~> 3.8.1'
end
