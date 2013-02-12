/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UIResponder<UITextInput>;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    double _secondDelay;
    BOOL _secondDelayElapsed;
    UIDelayedAction *_secondDelayTimer;
    UIResponder<UITextInput> *_textInput;
    id _userData;
}

@property UIResponder<UITextInput> *textInput;
@property double secondDelay;
@property(readonly) BOOL secondDelayElapsed;
@property id userData;

- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (double)secondDelay;
- (void)secondDelayElapsed:(id)arg1;
- (BOOL)secondDelayElapsed;
- (void)setSecondDelay:(double)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setTextInput:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)startTimer;
- (id)textInput;
- (id)userData;

@end
