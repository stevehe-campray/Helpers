//
//  UIColor+CAPMyColor.m
//  Capacap
//
//  Created by hejingjin on 2017/11/30.
//  Copyright © 2017年 kingyon. All rights reserved.
//

#import "UIColor+CAPMyColor.h"

@implementation UIColor (CAPMyColor)
+(UIColor *)colorWithInter:(NSInteger)integer{
    
    NSString *hex =@"";
    NSString *letter;
    NSInteger number;
    for (int i = 0; i<9; i++) {
        
        number = integer % 16;
        integer = integer / 16;
        switch (number) {
                
            case 10:
                letter =@"A"; break;
            case 11:
                letter =@"B"; break;
            case 12:
                letter =@"C"; break;
            case 13:
                letter =@"D"; break;
            case 14:
                letter =@"E"; break;
            case 15:
                letter =@"F"; break;
            default:
                letter = [NSString stringWithFormat:@"%ld", number];
        }
        hex = [letter stringByAppendingString:hex];
        if (integer == 0) {
            
            break;
        }
    }
    NSRange range;
    range.location = 0;
    range.length = 2;
    
    NSString *aString = [hex substringWithRange:range];
    range.location = 2;
    NSString *rString = [hex substringWithRange:range];
    range.location = 4;
    NSString *gString = [hex substringWithRange:range];
    // Scan values
    range.location = 6;
    NSString *bString = [hex substringWithRange:range];
    // Scan values
    unsigned int a, r, g, b;
    [[NSScanner scannerWithString:aString] scanHexInt:&a];
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    


    return  [UIColor colorWithRed:(float)r/255.0 green:(float)g/255.0 blue:b/255.0 alpha:(float)a/255.0];
    
}
@end
