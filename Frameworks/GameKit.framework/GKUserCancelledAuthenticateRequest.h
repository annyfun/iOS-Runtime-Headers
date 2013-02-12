/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKUserCancelledAuthenticateRequest : GKDataRequest {
    BOOL _loginDisabled;
}

@property BOOL loginDisabled;

- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (BOOL)loginDisabled;
- (void)setLoginDisabled:(BOOL)arg1;

@end
