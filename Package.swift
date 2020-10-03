// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "ZendeskSupportSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "ZendeskSupportSDK",
            targets: ["ZendeskSupportSDK"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
    ],
    targets: [
        .binaryTarget(
            name: "ZendeskSupportSDK",
            path: "SupportSDK.xcframework"
        )
    ]
)
