//
//  IDInfo.h
//  RPIdCardIdentification
//
//  Created by rpweng on 2019/3/18.
//  Copyright © 2019 rpweng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IDInfo : NSObject
@property (nonatomic,assign) int type; //1:正面  2:反面
@property (nonatomic,copy) NSString *num; //身份证号
@property (nonatomic,copy) NSString *name; //姓名
@property (nonatomic,copy) NSString *gender; //性别
@property (nonatomic,copy) NSString *nation; //民族
@property (nonatomic,copy) NSString *address; //地址
@property (nonatomic,copy) NSString *issue; //签发机关
@property (nonatomic,copy) NSString *valid; //有效期
@end

NS_ASSUME_NONNULL_END
