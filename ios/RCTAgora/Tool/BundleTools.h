//
//  BundleTools.h
//  RCTAgora
//
//  Created by Learnta on 2018/2/9.
//  Copyright © 2018年 Learnta. All rights reserved.
//

#import <Foundation/Foundation.h>

#define BUNDLE_NAME @"AGResource"

@interface BundleTools : NSObject

+ (NSString *)getBundlePath: (NSString *) assetName;
+ (NSBundle *)getBundle;

@end
