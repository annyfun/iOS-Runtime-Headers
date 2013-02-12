/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverLayoutInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSUInteger _arrowDirection;
    BOOL _constrainToTargetRect;
    } _containingFrame;
    } _containingFrameInsets;
    } _frame;
    float _offset;
    NSUInteger _preferredArrowDirections;
    } _preferredContentSize;
    } _targetRect;
}

@property(readonly) NSUInteger arrowDirection;
@property BOOL constrainToTargetRect;
@property CGRect containingFrame;
@property UIEdgeInsets containingFrameInsets;
@property(readonly) CGRect frame;
@property(readonly) float offset;
@property NSUInteger preferredArrowDirections;
@property CGSize preferredContentSize;
@property CGRect targetRect;

+ (id)_observationKeys;
+ (struct CGSize { float x1; float x2; })_popoverViewSizeForContentSize:(struct CGSize { float x1; float x2; })arg1 arrowDirection:(NSUInteger)arg2;

- (void)_updateOutputs;
- (NSUInteger)arrowDirection;
- (BOOL)constrainToTargetRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containingFrame;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containingFrameInsets;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)offset;
- (NSUInteger)preferredArrowDirections;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setConstrainToTargetRect:(BOOL)arg1;
- (void)setContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContainingFrameInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreferredArrowDirections:(NSUInteger)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;

@end
