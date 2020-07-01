# LPMSMediaLibraryiOS

[English](README.md) | [中文](README_zh.md)

LPMSMediaLibrary is the app side SDK for Linkplay iPhone media library access solution；you can use it to quickly play music from iPhone media library  to your products.

LPMSMediaLibrary mainly provides two functions：

- Show music in iPhone media library.

- Play music from iPhone media library to your product.

## Documentation

You can find documentation [on the website](https://linkplayapp.github.io/linkplay_sdk_doc/en/).

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

LPMSMediaLibrary is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
platform :ios, '10.0'
# Private Spec, install data processing SDK
source 'https://github.com/linkplayapp/LPSpecsiOS.git'
source 'https://github.com/CocoaPods/Specs.git'

target 'your_target_name' do

   pod "LPMSMediaLibraryiOS", :git => "https://github.com/linkplayapp/LPMSMediaLibraryiOS.git"

end
```

## Author

LinkPlay, ios_team@linkplay.com
