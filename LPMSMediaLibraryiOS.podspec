#
# Be sure to run `pod lib lint LPMSMediaLibraryiOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LPMSMediaLibraryiOS'
  s.version          = '1.0.1'
  s.summary          = 'IPod library.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: SDK contains the number of local songs, singers and albums.
                       DESC

  s.homepage         = 'https://github.com/linkplayapp/LPMSMediaLibraryiOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'LinkPlay' => 'ios_team@linkplay.com' }
  s.source           = { :git => 'https://github.com/linkplayapp/LPMSMediaLibraryiOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.frameworks = 'AVFoundation','MediaPlayer'
  s.dependency 'LPMDPKitiOS'
  s.resources = 'LPMSMediaLibraryiOS/Resource/*'
  s.subspec 'Framework' do |ss|
   ss.ios.vendored_framework = '*.framework'
  end

  s.subspec 'TSLibraryImport' do |ss|
   ss.source_files = 'LPMSMediaLibraryiOS/Library/TSLibraryImport/**/*' 
  end 
  s.subspec 'CocoaHTTP' do |ss|
   ss.source_files = 'LPMSMediaLibraryiOS/Library/CocoaHTTP/**/*' 
   ss.dependency 'LPMSMediaLibraryiOS/TSLibraryImport'
   ss.dependency 'LPMSMediaLibraryiOS/Framework'
  end 

  # s.resource_bundles = {
  #   'LPMSMediaLibraryiOS' => ['LPMSMediaLibraryiOS/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
