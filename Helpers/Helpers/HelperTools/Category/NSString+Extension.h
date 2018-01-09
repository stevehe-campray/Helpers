//
//  NSString+Extension.h
//  YSQ
//
//  Created by yuanlin on 15/10/14.
//  Copyright © 2015年 云凯科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)

//判断是否为空字符串
+(BOOL)isBlankString:(NSString *)string;
-(BOOL)isPhoneNumber;
//获取UUID
+(NSString *)createUUID;
//MD5加密
+ (NSString *)md5:(NSString *)str;
//获取版本号
+ (NSString*)getVersion;
//获取系统语言
+ (NSString*)getPreferredLanguage;
//验证密码
+(BOOL)validatePassword:(NSString *)passWord;
//sha1加密
+(NSString*)sha1WithStr:(NSString *)str;
+(NSString *)getCurrentDateWithFormat:(NSString *)format;
@end
