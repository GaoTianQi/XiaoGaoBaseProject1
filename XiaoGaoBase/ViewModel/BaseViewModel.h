//
//  BaseViewModel.h
//  BaseXiaoGao
//
//  Created by ios－54 on 15/11/23.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CompletionHandle)(NSError *error);

@protocol BaseViewModelDelegate <NSObject>

@optional
/**
 *  获取更多
 */
- (void)getMoreDataComptetionHandle:(CompletionHandle)completionHandle;

/**
 *  刷新
 */
- (void)refreshDataCompletionHandle:(CompletionHandle)completionHandle;

/**
 *  获取数据
 */
- (void)getDataFromNetCompletionHandel:(CompletionHandle)completionHandle;

@end

@interface BaseViewModel : NSObject

@property (nonatomic, strong) NSMutableArray *dataArr;
@property (nonatomic, strong) NSURLSessionDataTask *dataTask;
- (void)cancelTask; // 取消任务
- (void)suspendTask; // 暂停任务
- (void)resumeTask; // 继续任务

@end
