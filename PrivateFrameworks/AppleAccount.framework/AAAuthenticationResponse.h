/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSDictionary;

@interface AAAuthenticationResponse : AAResponse {
    NSDictionary *_tokens;
}

@property(readonly) NSString *authToken;

- (id)authToken;
- (void)dealloc;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
