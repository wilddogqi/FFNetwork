//
//  FFBaseRequest.h
//  FFNetwork
//
//  Created by 罗文奇 on 2019/5/6.
//  Copyright © 2019 wenqi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const FFRequestValidationErrorDomain;

NS_ENUM(NSInteger) {
    FFRequestValidationErrorInvalidStatusCode = -8,
    FFRequestValidationErrorInvalidJSONFormat = -9,
};

/// HTTP Request Method
typedef NS_ENUM(NSInteger, FFRequestMethod) {
    FFRequestMethodGET = 0,
    FFRequestMethodPOST,
    FFRequestMethodHEAD,
    FFRequestMethodPUT,
    FFRequestMethodDELETE,
    FFRequestMethodPATCH,
};

/// Request serializer type
typedef NS_ENUM(NSInteger, FFRequestSerializerType) {
    FFRequestSerializerTypeHTTP = 0,
    FFRequestSerializerTypeJSON,
};

///  Response serializer type, which determines response serialization process and
///  the type of `responseObject`.
typedef NS_ENUM(NSInteger, FFResponseSerializerType) {
    /// NSData type
    FFResponseSerializerTypeHTTP,
    /// JSON object type
    FFResponseSerializerTypeJSON,
    /// NSXMLParser type
    FFResponseSerializerTypeXMLParser,
};
    
/// Request priority
typedef NS_ENUM(NSInteger, FFRequestPriority) {
    FFRequestPriorityLow = -4L,
    FFRequestPriorityDefault = 0,
    FFRequestPriorityHigh = 4,
};
    
@protocol AFMultipartFormData;

@interface FFBaseRequest : NSObject

@end

NS_ASSUME_NONNULL_END
