//
//  TEnterprise51Phone.h
//  TYJYCloudCallAPI
//  用户申请一个小号业务
//  Created by DF on 16/7/14.
//  Copyright © 2016年 tyjy. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^returnHandler)(id responseObject, NSInteger remain, NSString *returnMessage);

@interface TEnterprise51Phone : NSObject

/** 获取该主号是否有小号
 @param mainPhone 本机主叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+(void)queryVirtualInfoWithPhone:(NSString *)mainPhone
                   returnHandler:(returnHandler)handle;

/** 获取小号列表
 @param mainPhone 本机主叫号码
 @param phoneNum 获取小号列表数量
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+(void)queryVirtualListWithPhone:(NSString *)mainPhone
                     phoneNum:(NSInteger)phoneNum
                   returnHandler:(returnHandler)handle;

/** 注册小号
 @param mainPhone 本机主叫号码
 @param phoneNum 获取小号列表数量
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+(void)registerVirtualPhoneWithPhone:(NSString *)mainPhone
                        virtualPhone:(NSString *)virtualPhone
                       returnHandler:(returnHandler)handle;

/** 拨打电话
 @param mainPhone 本机主叫号码
 @param virtualPhone 小号
 @param calledPhone 被叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+(void)callPhoneWithPhone:(NSString *)mainPhone
             virtualPhone:(NSString *)virtualPhone
              calledPhone:(NSString *)calledPhone
            returnHandler:(returnHandler)handle;

/** 设备主号解绑小号
 @param mainPhone 本机主叫号码
 @param calledPhone 被叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+ (void)unBindingPhone:(NSString *)mainPhone
           virtualPhone:(NSString *)virtualPhone
              response:(returnHandler)handle;

/** 发短信
 @param calledPhone 被叫号码
 **/
+(void)messageWithPhone:(NSString *)calledPhone;

@end







