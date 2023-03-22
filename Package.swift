// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "ZendeskSupportSDK",
    platforms: [
        .iOS(.v11)
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
                 url: "https://github.com/zendesk/support_providers_sdk_ios",
                 .exact("support_providers_sdk_ios_version")),
        .package(name: "ZendeskMessagingSDK",
                 url: "https://github.com/zendesk/messaging_sdk_ios",
                 .exact("messaging_sdk_ios_version"))
    ],
    targets: [
        .binaryTarget(
            name: "SupportSDK",
            path: "SupportSDK.xcframework"
        ),
        .target(name: "ZendeskSupportSDKTargets",
                dependencies: [
                    .target(name: "SupportSDK"),
                    .product(name: "ZendeskSupportProvidersSDK", package: "ZendeskSupportProvidersSDK"),
                    .product(name: "ZendeskMessagingSDK", package: "ZendeskMessagingSDK")
                ],
                path: "Sources"
        )
    ]
)
