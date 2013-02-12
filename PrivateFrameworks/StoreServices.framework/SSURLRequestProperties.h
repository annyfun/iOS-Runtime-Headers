/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying, SSCoding> {
    NSInteger _allowedRetryCount;
    NSUInteger _cachePolicy;
    NSString *_clientIdentifier;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSDictionary *_requestParameters;
    double _timeoutInterval;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(copy,readonly) NSData *HTTPBody;
@property(retain,readonly) NSInputStream *HTTPBodyStream;
@property(copy,readonly) NSDictionary *HTTPHeaders;
@property(copy,readonly) NSString *HTTPMethod;
@property(retain,readonly) NSURL *URL;
@property(copy,readonly) NSString *URLBagKey;
@property(copy,readonly) NSString *clientIdentifier;
@property(copy,readonly) NSDictionary *requestParameters;
@property(getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest;
@property(readonly) NSInteger allowedRetryCount;
@property(readonly) NSUInteger cachePolicy;
@property(readonly) double timeoutInterval;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPHeaders;
- (id)HTTPMethod;
- (id)URL;
- (id)URLBagKey;
- (id)_initCommon;
- (NSInteger)allowedRetryCount;
- (NSUInteger)cachePolicy;
- (id)clientIdentifier;
- (id)copyPropertyListEncoding;
- (id)copyURLRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isITunesStoreRequest;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestParameters;
- (double)timeoutInterval;

@end
