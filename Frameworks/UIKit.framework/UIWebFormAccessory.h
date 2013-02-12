/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormAccessoryDelegate>, UIBarButtonItem, UISegmentedControl;

@interface UIWebFormAccessory : UIToolbar {
    UIBarButtonItem *_autofill;
    UISegmentedControl *_tab;
    <UIWebFormAccessoryDelegate> *delegate;
}

@property(retain) UIBarButtonItem *_autofill;
@property(retain) UISegmentedControl *_tab;
@property <UIWebFormAccessoryDelegate> *delegate;
@property(getter=isAutoFillEnabled) BOOL autoFillEnabled;
@property(getter=isNextEnabled) BOOL nextEnabled;
@property(getter=isPreviousEnabled) BOOL previousEnabled;

- (id)_autofill;
- (void)_orientationDidChange:(id)arg1;
- (id)_tab;
- (void)_updateFrame;
- (void)autoFill:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)init;
- (BOOL)isAutoFillEnabled;
- (BOOL)isNextEnabled;
- (BOOL)isPreviousEnabled;
- (void)setAutoFillEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextEnabled:(BOOL)arg1;
- (void)setPreviousEnabled:(BOOL)arg1;
- (void)set_autofill:(id)arg1;
- (void)set_tab:(id)arg1;
- (void)tab:(id)arg1;

@end
