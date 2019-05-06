Pod::Spec.new do |s|
  s.name         = "FFNetwork"
  s.version      = "0.0.1"
  s.summary      = "FFNetwork is a high level request util based on AFNetworking."
  s.homepage     = "https://github.com/wilddogqi/FFNetwork"
  s.license      = "MIT"
  s.author       = { "luowenqi" => "wilddogqi@gmail.com" }
  s.source        = { :git => "https://github.com/wilddogqi/FFNetwork.git", :tag => s.version.to_s }
  s.source_files  = "FFNetwork/*.{h,m}"
  s.requires_arc  = true

  s.private_header_files = "FFNetwork/FFNetworkPrivate.h"

  s.ios.deployment_target = "7.0"
  s.osx.deployment_target = "10.9"
  s.watchos.deployment_target = "2.0"
  s.tvos.deployment_target = "9.0"
  s.framework = "CFNetwork"

  s.dependency "AFNetworking", "~> 3.0"
end
