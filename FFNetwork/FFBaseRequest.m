//
//  FFBaseRequest.m
//  FFNetwork
//
//  Created by 罗文奇 on 2019/5/6.
//  Copyright © 2019 wenqi. All rights reserved.
//

#import "FFBaseRequest.h"

#if __has_include(<AFNetworking/AFNetworking.h>)
#import <AFNetworking/AFNetworking.h>
#else
#import "AFNetworking.h"
#endif

NSString *const FFRequestValidationErrorDomain = @"com.luowenqi.request.validation";

@implementation FFBaseRequest

@end
