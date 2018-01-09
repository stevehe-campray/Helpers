//
//  iToastUtil.m
//  StudentOrder
//
//  Created by jianjun-wu on 15/7/23.
//  Copyright (c) 2015年 jianjun-wu. All rights reserved.
//

#import "iToastUtil.h"
//#import <iToast/iToast.h>
#import "iToast.h"

@implementation iToastUtil

+ (void)displayMsg:(NSString *)msg
{
    //[[iToast makeText:msg] show];
    [[[[iToast makeText:msg] setGravity:iToastGravityCenter] setDuration:800] show];
}

+(void)displayMsgByLongtime:(NSString *)msg
{
    [[[[iToast makeText:msg] setGravity:iToastGravityCenter] setDuration:1000] show];
}

+(void)displayMsgBytime:(NSString *)msg duration:(NSInteger)duration
{
    [[[[iToast makeText:msg] setGravity:iToastGravityBottom] setDuration:duration] show];
}


@end
