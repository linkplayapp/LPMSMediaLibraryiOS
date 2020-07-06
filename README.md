# LPMSMediaLibraryiOS

[English](README.md) | [中文](README_zh.md)

LPMSMediaLibrary is the app side SDK for Linkplay iPhone media library access solution；you can use it to quickly play music from iPhone media library  to your products.

LPMSMediaLibrary mainly provides two functions：

- Show music in iPhone media library.

- Play music from iPhone media library to your product.

## Documentation

You can find documentation [on the website](https://linkplayapp.github.io/linkplay_sdk_doc/en/).

## How To Get Started

- [Download LPMSMediaLibraryiOS](https://github.com/linkplayapp/LPMSMediaLibraryiOS/archive/master.zip) and import SDK to your project

## SDK Demo
###  1. SDK demo with CocoaPods
- [LPMusicKitPodsDemo](https://github.com/linkplayapp/LPMusicKitPodsDemo)

###  2. SDK demo
- [LPMusicKitDemo](https://github.com/linkplayapp/LPMusicKitDemo)


## Requirements
- iOS >= 10.0
## Installation

###  1. Installationwith CocoaPods

LPMSMediaLibraryiOS is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
platform :ios, '10.0'
# Private Spec, install data processing SDK
source 'https://github.com/linkplayapp/LPSpecsiOS.git'
# Your CocosPods repo source address
source 'https://github.com/CocoaPods/Specs.git'

target 'your_target_name' do

   pod "LPMSMediaLibraryiOS", :git => "https://github.com/linkplayapp/LPMSMediaLibraryiOS.git"

end
```

Then run the `pod update` command in the root directory of project.
For use of CocoaPods, please refer to the [CocoaPods Guides](https://guides.cocoapods.org/). It is recommended to update the CocoaPods to the latest version.

- Info.plist add the key to access the media library: NSAppleMusicUsageDescription
- Apply for long background permission
![image](./images/background.jpg)

### 2. Manually configure your project

#### Step 1: Download LPMSMediaLibraryiOS

- [Download LPMSMediaLibraryiOS](https://github.com/linkplayapp/LPMSMediaLibraryiOS/archive/master.zip)

#### Step 2: Import Framework

- Import LPMSMediaLibrary.framework, and its dependent SDK: [LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)、[LPMDPKitiOS](https://github.com/linkplayapp/LPMDPKitiOS)

#### Step 3: Import dependent libraries

- Import files from LPMSMediaLibraryiOS/Resource and LPMSMediaLibraryiOS/Library
![image](./images/Library.jpg)

#### Step 4: Xcode project settings

- Info.plist add the key to access the media library: NSAppleMusicUsageDescription
- Apply for long background permission
![image](./images/background.jpg)

> Because of the need to play local music, the LPMSMediaLibraryiOS/Library/CocoaHTTP/HTTPConnection file was modified, the HTTPConnection+iTunes class was added, and the code was also added to the GCDAsyncSocket class. If you have imported these three three-party libraries, you need to pay attention to the modification

```
// HTTPConnection
if ([self respondsToSelector:@selector(prepareITunesFile:)]) {
    [self prepareITunesFile:uri];
}

```
```
// GCDAsyncSocket
// - (void)doWriteData
Class class = NSClassFromString(@"LPMSLibraryManager");
...

```


## Author

LinkPlay, ios_team@linkplay.com
