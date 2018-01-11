Pod::Spec.new do |s|
s.name         = 'HelperTools'
s.version      = '1.0.2'
s.summary      = '项目相关工具'
s.homepage     = 'https://github.com/stevehe-campray/Helpers'
s.license      = 'MIT'
s.authors      = {'stevehe-campray' => '602258720@qq.com'}
s.platform     = :ios, '8.0'
s.source       = {:git => 'https://github.com/stevehe-campray/Helpers.git', :tag => s.version}
s.source_files = 'HelperTools/*.h','HelperTools/Category/*.{h,m}'
s.requires_arc = false
end
