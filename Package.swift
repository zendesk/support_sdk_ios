// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "ZendeskSupportSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "ZendeskSupportSDK",
            targets: [
              "ZendeskSupportSDKTargets"
            ]
        )
    ],
    dependencies: [
        .package(name: "ZendeskSupportProvidersSDK",
                 url: "https://github.com/zendesk/support_providers_sdk_ios/releases/download/5.2.0/SupportProvidersSDK.xcframework.zip",
                 from: "5.2.0"),
        .package(name: "ZendeskMessagingSDK",
                 url: "https://github.com/zendesk/messaging_sdk_ios/releases/download/3.8.1/MessagingSDK.xcframework.zip",
                 from: "3.8.1")
    ],
    targets: [
        .binaryTarget(
            name: "ZendeskSupportSDK",
            url: "https://github.com/zendesk/support_sdk_ios/releases/download/5.2.0/SupportSDK.xcframework.zip",
            checksum: "c599572d583cbe601a381cc700085f569a566cdcc97d788f6bfa89a95e898ec1"
        ),
        .target(name: "ZendeskSupportSDKTargets",
                dependencies: [
                    .target(name: "ZendeskSupportSDK"),
                    .product(name: "ZendeskSupportProvidersSDK", package: "ZendeskSupportProvidersSDK"),
                    .product(name: "ZendeskMessagingSDK", package: "ZendeskMessagingSDK")
                ],
                path: "Sources"
        )
    ]
)
