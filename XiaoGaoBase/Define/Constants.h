//
//  Constants.h
//  BaseXiaoGao
//
//  Created by ios－54 on 15/11/23.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

/**
 *  通过RGB设置颜色
 */
#define kRGBColor(R,G,B)        [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:1.0]

/**
 *  程序的屏幕高度
 */
#define kWindowH        [UIScreen mainScreen].bounds.size.height

/**
 *  程序的屏幕宽度
 */
#define kWindowW        [UIScreen mainScreen].bounds.size.width

/**
 *  AppDelegate的代理
 */
#define kAppDelegate         ((AppDelegate*)([UIApplication sharedApplication].delegate))

/**
 *  通过Storyboard ID 在对应Storyboard中获取场景对象
 */
#define kVCFromStoryboard(storyboardId, storyboardName)     [[UIStoryboard storyboardWithName:storyboardName bundle:nil] \
instantiateViewControllerWithIdentifier:storyboardId]

/**
 *  移除iOS7之后，cell默认左侧的分割线边距
 */
#define kRemoveCellSeparator \
- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath{\
cell.separatorInset = UIEdgeInsetsZero;\
cell.layoutMargins = UIEdgeInsetsZero; \
cell.preservesSuperviewLayoutMargins = NO; \
}

/**
 *  Docment文件夹目录
 */
#define kDocumentPath NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject


#endif /* Constants_h */
