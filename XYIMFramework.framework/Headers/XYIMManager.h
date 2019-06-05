//
//  XYIMManager.h
//  XYIMFramework
//
//  Created by yang on 5/6/19.
//  Copyright © 2019年 yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYIMManager : NSObject
+ (NSString*)version;
+ (NSString*)versionInfo;
+ (BOOL)registeFrameworkWithAppSecret:(NSString*)appSecret;
@end
