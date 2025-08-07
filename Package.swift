// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MyBinaryLibrary",
    platforms: [.iOS(.v13)],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MyBinaryLibrary",
            targets: ["MyBinaryLibraryWrapper"]),
    ],
    dependencies: [
        .package(url: "https://repo.platform.p8n.app/VerifyJPKI/", .upToNextMajor(from: "1.1.3")),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .binaryTarget(
            name: "MyBinaryLibrary",
            path: "./MyBinaryLibrary.xcframework"
        ),
        .target(
            name: "MyBinaryLibraryWrapper",
            dependencies: [
                "MyBinaryLibrary",
                .product(name: "VerifyJPKI", package: "VerifyJPKI")
            ]
        )
    ]
)
