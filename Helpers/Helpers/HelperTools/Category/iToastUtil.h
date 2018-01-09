//
//  iToastUtil.h
//  StudentOrder
//
//  Created by jianjun-wu on 15/7/23.
//  Copyright (c) 2015年 jianjun-wu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface iToastUtil : NSObject

+ (void)displayMsg:(NSString *)msg;

/**
 *  显示有点长时间
 *
 *  @param msg <#msg description#>
 */
+(void)displayMsgByLongtime:(NSString *)msg;


+(void)displayMsgBytime:(NSString *)msg duration:(NSInteger)duration;



@end
