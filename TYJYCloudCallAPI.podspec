

Pod::Spec.new do |s|

  s.name         = 'TYJYCloudCallAPI'
  s.version      = "1.0.2"
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
