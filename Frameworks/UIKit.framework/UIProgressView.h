/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
    NSInteger _barStyle;
    UIColor *_customColor;
    UIImage *_customColorImage;
    float _progress;
    NSInteger _progressViewStyle;
}

@property float progress;
@property NSInteger progressViewStyle;

+ (void)_initializeSafeCategory;
+ (void)_loadResourcesForStyle:(NSInteger)arg1 barStyle:(NSInteger)arg2;
+ (NSInteger)_styleImageIndexForStyle:(NSInteger)arg1 barStyle:(NSInteger)arg2;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (id)_progressColor;
- (void)_setProgressColor:(id)arg1;
- (id)_tintedImage;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (NSInteger)barStyle;
- (void)drawOverlayProgressView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawProgressView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithProgressViewStyle:(NSInteger)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (float)progress;
- (NSInteger)progressViewStyle;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressViewStyle:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
