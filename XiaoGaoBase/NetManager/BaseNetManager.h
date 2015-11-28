//
//  BaseNetManager.h
//  BaseXiaoGao
//
//  Created by ios－54 on 15/11/23.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseNetManager : NSObject

/** 对AFHTTPSessionManager的GET请求方法进行封装 */
+ (id)GET:(NSString *)path parameters:(NSDictionary *)params completionHandler:(void(^)(id responseObj, NSError *error))completionHandle;

/** 对AFHTTPSessionManager的POST请求方法进行了封装 */
+ (id)POST:(NSString *)path parameters:(NSDictionary *)params completionHandler:(void(^)(id responseObj, NSError *error))completionHandle;

/**
 *  为了应付某些服务器对于中文字符串不支持的情况，需要转化字符串为带有%号形式的编码
 *
 *  @param path   请求路径，即 ？ 前面的内容
 *  @param params 请求参数，即 ？后面的部分
 *
 *  @return 转化后的路径+参数
 */
+ (NSString *)percentPathWithPath:(NSString *)path params:(NSDictionary *)params;

@end
