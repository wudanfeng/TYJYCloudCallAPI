//
//  TCloudCall.h
//  TYJYCloudCall
//
//  Created by DF on 16/6/13.
//  Copyright © 2016年 tyjy. All rights reserved.
//

#import <Foundation/Foundation.h>

/** remain
 
 0      ：操作成功
 1000   ：业务类型不支持
 1001   ：加密错误
 1002   ：参数错误/带入参数异常
 1003   ：无效产品ID
 1004   ：未审核产品
 1005   ：审核失败的产品
 1006   ：暂停使用的产品ID
 1007   ：未授权的ip
 1008   ：无可以使用的小号资源
 1009   ：无权操作
 
 **/


typedef void(^bindingHandler)(id responseObject, NSInteger remain, NSString *returnMessage);
typedef void(^unBindingHandler)(NSInteger remain, NSString *returnMessage);

/** TCloudCall：开发者使用主类（API）
 */
@interface TCloudCall : NSObject

/** 初始化云通话模块
 @param appKey 云通讯appKey.
 @return void
 */
+ (void)startWithAppkey:(NSString *)appKey;

/** 双盲通话：设备主号绑定小号
 @param mainPhone 本机主叫号码
 @param calledPhone 被叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+ (void)bindingCloudPhone:(NSString *)mainPhone calledPhone:(NSString *)calledPhone response:(bindingHandler)handle;

/** 双盲通话：设备主号解绑小号
 @param mainPhone 本机主叫号码
 @param calledPhone 被叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+ (void)unBindingCloudPhone:(NSString *)mainPhone calledPhone:(NSString *)calledPhone response:(unBindingHandler)handle;

/** 隐私通话：设备主号绑定小号
 @param mainPhone 本机主叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+ (void)bindingCloudPhone:(NSString *)mainPhone response:(bindingHandler)handle;

/** 隐私通话：设备主号解绑小号
 @param mainPhone 本机主叫号码
 @param handle remain为0表示正常,为-1时表示异常,message 返回错误提示
 @return void
 */
+ (void)unBindingCloudPhone:(NSString *)mainPhone response:(unBindingHandler)handle;



@end
