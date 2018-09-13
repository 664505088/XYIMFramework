//
//  XYIMManager.h
//  XYIM
//
//  Created by 徐阳 on 2018/9/12.
//  Copyright © 2018年 rntd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYIMManager : NSObject
+ (instancetype)shareManager;
+ (instancetype)optionsWithAppkey:(NSString*)key;
+ (void)show;
@end
