# LPMSMediaLibraryiOS

[English](README.md) | [中文](README_zh.md)

LPMSMediaLibrary是Linkplay iPhone媒体库接入方案的app端SDK；通过它，您可以快速的将iPhone媒体库的音乐播放到您的产品里。

LPMSMediaLibrary主要解决了两方面的问题：

- 展示iPhone媒体库中的音乐

- 播放iPhone媒体库中的音乐到您的产品里

## 文档

你可以在这里找到更多[文档](https://linkplayapp.github.io/linkplay_sdk_doc/zh-hans/introduction.html) 。

## 示例

如果您要执行示例工程，请clone工程并使用`pod install`安装必要库。

## 需求

- iOS >= 10.0

## 安装

LPMusicKitiOS 可以通过 [CocoaPods](https://cocoapods.org) 安装. 将下面的代码添加到您的pod文件里即可：

```ruby
platform :ios, '10.0'
# 私有的源，安装数据处理的SDK
source 'https://github.com/linkplayapp/LPSpecsiOS.git'
source 'https://github.com/CocoaPods/Specs.git'

target 'your_target_name' do

   pod "LPMSMediaLibraryiOS", :git => "https://github.com/linkplayapp/LPMSMediaLibraryiOS.git"

end
```

## 作者

LinkPlay, ios_team@linkplay.com
