//
//  BaseViewModel.m
//  BaseXiaoGao
//
//  Created by ios－54 on 15/11/23.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseViewModel.h"

@implementation BaseViewModel

- (void)cancelTask
{
    [self.dataTask cancel];
}

- (void)suspendTask
{
    [self.dataTask suspend];
}

- (void)resumeTask
{
    [self.dataTask resume];
}

- (NSMutableArray *)dataArr
{
    if (!_dataArr) {
        _dataArr = [NSMutableArray array];
    }
    return _dataArr;
}

@end
