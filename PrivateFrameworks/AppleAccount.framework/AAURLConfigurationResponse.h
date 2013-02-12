/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSDictionary;

@interface AAURLConfigurationResponse : AAResponse {
    NSDictionary *_urls;
}

@property(readonly) NSString *authenticateURL;
@property(readonly) NSString *newAccountURL;
@property(readonly) NSString *registerURL;
@property(readonly) NSString *updateAccountURL;
@property(readonly) NSString *validateEmailURL;
@property(readonly) NSString *validateURL;

- (id)authenticateURL;
- (void)dealloc;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)newAccountURL;
- (id)registerURL;
- (id)updateAccountURL;
- (id)validateEmailURL;
- (id)validateURL;

@end
