 //
//  UIFont+CAPJuageFont.m
//  Capacap
//
//  Created by hejingjin on 2017/11/28.
//  Copyright © 2017年 kingyon. All rights reserved.
//

#import "UIFont+CAPJuageFont.h"
// 这里设置iPhone6放大的字号数（现在是放大2号，也就是iPhone4s和iPhone5上字体为15时，iPhone6上字号为17）
#define IPHONE5_INCREMENT 2

// 这里设置iPhone6Plus放大的字号数（现在是放大3号，也就是iPhone4s和iPhone5上字体为15时，iPhone6上字号为18）
#define IPHONE6PLUS_INCREMENT 1
@implementation UIFont (CAPJuageFont)

+(void)load{
    //获取替换后的类方法
    Method newMethod = class_getClassMethod([self class], @selector(adjustFont:));
    //获取替换前的类方法
    Method method = class_getClassMethod([self class], @selector(systemFontOfSize:));
    //然后交换类方法
    method_exchangeImplementations(newMethod, method);
    
    
    //获取替换后的类方法
    Method newMethod1 = class_getClassMethod([self class], @selector(adjustFontWithName:Size:));
    //获取替换前的类方法
    Method method1 = class_getClassMethod([self class], @selector(fontWithName:size:));
    //然后交换类方法
    method_exchangeImplementations(newMethod1, method1);
    
    
}




+(UIFont *)adjustFont:(CGFloat)fontSize{
    UIFont *newFont=nil;
    if (iPhone5){
        newFont = [UIFont adjustFont:fontSize - IPHONE5_INCREMENT];
    }else if (iPhoneplus){
        newFont = [UIFont adjustFont:fontSize + IPHONE6PLUS_INCREMENT];
    }else{
        newFont = [UIFont adjustFont:fontSize];
    }
    return newFont;
}


+(UIFont *)adjustFontWithName:(NSString *)name Size:(CGFloat) size{
    UIFont *newFont=nil;
    if (iPhone5){
        newFont = [UIFont adjustFontWithName:name Size:size - IPHONE5_INCREMENT];
    }else if (iPhoneplus){
        newFont = [UIFont adjustFontWithName:name Size:size + IPHONE6PLUS_INCREMENT];
    }else{
        newFont = [UIFont adjustFontWithName:name Size:size];
    }
    return newFont;
}
@end
