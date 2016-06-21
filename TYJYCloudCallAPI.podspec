#
#  Be sure to run `pod spec lint CXLSlideList.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = 'TYJYCloudCallAPI'
  s.version      = "1.0.1"
  s.summary      = 'TYJYCloudCallAPI is call SDK.'
  s.license      = 'MIT'
  s.author       = { "wudanfeng" => "182420281@qq.com" }

  s.homepage     = 'https://github.com/wudanfeng/TYJYCloudCallAPI'
  s.source       = { :git => "https://github.com/wudanfeng/TYJYCloudCallAPI.git", :tag => s.version}
  s.platform     = :ios
  s.ios.deployment_target = "7.0"
  s.frameworks = 'Foundation','UIKit'
  s.vendored_frameworks = 'TYJYCloudCallAPI.framework'
  s.requires_arc = true
  
end
