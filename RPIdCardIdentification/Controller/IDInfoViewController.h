//
//  IDInfoViewController.h
//  RPIdCardIdentification
//
//  Created by rpweng on 2019/3/18.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class IDInfo;

@interface IDInfoViewController : UIViewController

// 身份证信息
@property (nonatomic,strong) IDInfo *IDInfo;

// 身份证图像
@property (nonatomic,strong) UIImage *IDImage;

@end

NS_ASSUME_NONNULL_END
