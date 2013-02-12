/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CALayer, UIColor, UIImage, UIView;

@interface _UISwitchInfo : NSObject {
    struct { 
        unsigned int on : 1; 
        unsigned int pressed : 1; 
        unsigned int useAlternateColors : 1; 
        unsigned int skipValueChangedAction : 1; 
    } _switchFlags;
    NSInteger imageState;
    UIImage **images;
    UIView *leftEdgeView;
    CALayer *maskLayer;
    UIColor *onButtonColor;
    float position;
    UIView *rightEdgeView;
}

- (void)dealloc;
- (id)init;
- (void)setMinimumTrackImage:(id)arg1 forStates:(NSUInteger)arg2;

@end
