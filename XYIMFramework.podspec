Pod::Spec.new do |s|
s.name         = "XYIMFramework"
s.version      = "1.4.4.4"
s.summary      = "一个建立pod仓库的简单demo."
s.description  = <<-DESC
这只是一个建立pod仓库的简单demo，并没有实际的意思。教学使用。
DESC
s.homepage     = "https://github.com/664505088/XYIMFramework"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "阳仔" => "664505088@qq.com" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/664505088/XYIMFramework.git", :tag => "失败版本" }
s.source_files = "XYIMFramework.framework/*"
s.requires_arc = true
end
