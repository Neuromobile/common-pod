#
#  Be sure to run `pod spec lint CommonSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  s.name         = "CommonSDK"
  s.version      = "1.6.5"
  s.summary      = "A short description of CommonSDK."

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description  = <<-DESC
                  "This is a description of CommonSDK"
                  DESC

  s.homepage     = "http://neuromobilemarketing.com/"

  # s.license      = "MIT (example)"
  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author             = { "NeuromobileMarketing" => "solutions@neuromobilemarketing.com" }
  s.ios.deployment_target = "13.0"

  s.source       = { :git => "git@github.com:Neuromobile/common_pod.git", :tag => "#{s.version}" }
  s.libraries = 'c++', 'stdc++'
  s.vendored_frameworks = 'CommonSDK.xcframework'
  s.dependency 'RestKit', '~> 0.27.2'

end
