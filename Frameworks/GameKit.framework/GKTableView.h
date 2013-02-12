/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, UIImage;

@interface GKTableView : UITableView {
    struct CGSize { 
        float width; 
        float height; 
    UIImage *_backgroundImage;
    NSInteger _backgroundStyle;
    NSArray *_backgroundTiles;
    BOOL _becomeFirstResponderOnTouch;
    float _shadowInset;
    NSInteger _shadowStyle;
    } _statusOffsetShift;
}

@property(retain) UIImage *backgroundImage;
@property(retain) NSArray *backgroundTiles;
@property NSInteger backgroundStyle;
@property BOOL becomeFirstResponderOnTouch;
@property float shadowInset;
@property NSInteger shadowStyle;
@property CGSize statusOffsetShift;

- (float)_backgroundInset;
- (id)backgroundImage;
- (NSInteger)backgroundStyle;
- (id)backgroundTiles;
- (BOOL)becomeFirstResponderOnTouch;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)layoutSubviews;
- (void)layoutTilesWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offset:(struct CGSize { float x1; float x2; })arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundStyle:(NSInteger)arg1;
- (void)setBackgroundTiles:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBecomeFirstResponderOnTouch:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShadowInset:(float)arg1;
- (void)setShadowStyle:(NSInteger)arg1;
- (void)setStatusOffsetShift:(struct CGSize { float x1; float x2; })arg1;
- (float)shadowInset;
- (NSInteger)shadowStyle;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })statusOffsetShift;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateBackground;
- (void)updateBackgroundImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateShadowViews;

@end
