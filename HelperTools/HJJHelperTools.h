//
//  HJJHelperTools.h
//  HJJHelperTools
//
//  Created by hejingjin on 2018/1/8.
//  Copyright © 2018年 hejingjin. All rights reserved.
//

#ifndef HJJHelperTools_h
#define HJJHelperTools_h


//判断手机
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)


#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhoneplus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)


//颜色&字体
#define BSTRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define BSTRGBAlphaColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]

//16进制转10进制RGB
#define BSTColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:0.99]


#define BSTColorFromRGBS(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:0.42]
//主体颜色
#define BSTGlobalBg BSTRGBColor(223, 223, 223)

#define BSTTagBg BSTRGBColor(74, 139, 209)
#define BSTTagFont [UIFont systemFontOfSize:14]


//系统颜色
#define BSTBlackColor       [UIColor blackColor]
#define BSTDarkGrayColor    [UIColor darkGrayColor]
#define BSTLightGrayColor   [UIColor lightGrayColor]
#define BSTWhiteColor       [UIColor whiteColor]
#define BSTRedColor         [UIColor redColor]
#define BSTBlueColor        [UIColor blueColor]
#define BSTGreenColor       [UIColor greenColor]
#define BSTCyanColor        [UIColor cyanColor]
#define BSTYellowColor      [UIColor yellowColor]
#define BSTMagentaColor     [UIColor magentaColor]
#define BSTOrangeColor      [UIColor orangeColor]
#define BSTPurpleColor      [UIColor purpleColor]
#define BSTBrownColor       [UIColor brownColor]
#define BSTClearColor       [UIColor clearColor]


//图片名字加载
#define BSTImage(Name) ([UIImage imageNamed:Name])

#define BSTScreenW [UIScreen mainScreen].bounds.size.width
#define BSTScreenH [UIScreen mainScreen].bounds.size.height


#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define NAVHEIGHT (iPhoneX ? 88.f : 64.f)


#define TABBARHEIGHT 49



// 状态栏高度
#define STATUS_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define NAVIGATION_BAR_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define TAB_BAR_HEIGHT (iPhoneX ? (49.f+34.f) : 49.f)
// tabBar高度
#define bottom_HEIGHT (iPhoneX ? 34.f : 0.f)
/// 高度系数 812.0 是iPhoneX的高度尺寸，667.0表示是iPhone 8 的高度，如果你觉的它会变化，那我也很无奈

#define SafeAreaTopHeight (SCREEN_HEIGHT == 812.0 ? 88 : 64)
/// 底部宏，吃一见长一智吧，别写数字了
#define SafeAreaBottomHeight (SCREEN_HEIGHT == 812.0 ? 34 : 0)



#define Persion BSTScreenW/375

//获取控件x，y
#define MID_X(x) CGRectGetMidX(x)
#define MID_Y(y) CGRectGetMidY(y)
#define MIN_X(x) CGRectGetMinX(x)
#define MIN_Y(y) CGRectGetMinY(y)
#define MAX_X(x) CGRectGetMaxX(x)
#define MAX_Y(y) CGRectGetMaxY(y)






#endif /* HJJHelperTools_h */

//定位
#import "CLLocation+YCLocation.h"
//提示
#import "iToastUtil.h"
//提示
#import "MBProgressHUD+MJ.h"
//日期相关
#import "NSDate+Util.h"
//md5 版本号 密码正折
#import "NSString+Extension.h"
//actionsheet 添加回掉
#import "UIActionSheet+Blocks.h"
//按钮字体适配
#import "UIButton+CAPAdjustFont.h"
//int 转color
#import "UIColor+CAPMyColor.h"
//runtime 字体适配
#import "UIFont+CAPJuageFont.h"
//label 适配
#import "UILabel+CAPAdjustFont.h"
//textfeild 字体适配
#import "UITextField+CAPAdJustFont.h"
//uiview位置大小扩展
#import "UIView+BSTExtention.h"
