//
//  NSObject+Common.h
//  BaseXiaoGao
//
//  Created by ios－54 on 15/11/23.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Common)

/**
 *  显示失败提示
 */
- (void)showErrorMsg:(NSObject *)msg;

/**
 *  显示成功提示
 */
- (void)showSuccessMsg:(NSObject *)msg;

/**
 *  显示忙
 */
- (void)showProgress;

/**
 *  隐藏显示
 */
- (void)hideProgress;


@end
