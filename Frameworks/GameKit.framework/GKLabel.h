/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString, NSDictionary, NSString;

@interface GKLabel : UILabel {
    struct __CFAttributedString { } *_attributedString;
    NSAttributedString *_attributedText;
    NSDictionary *_attributes;
    float _calculatedFontSize;
    id _contentPath;
    BOOL _forceNaturalAlignment;
    struct __CTFramesetter { } *_framesetter;
    float _leading;
    struct __CTParagraphStyle { } *_paragraphStyle;
    BOOL _shouldDrawEmoji;
    BOOL _shouldQuoteText;
    BOOL _shouldSizeToTextImageBounds;
    struct __CTFrame { } *_textFrame;
    NSString *_truncationSymbol;
}

@property(readonly) __CFAttributedString *attributedString;
@property(copy) NSAttributedString *attributedText;
@property(readonly) NSDictionary *attributes;
@property(readonly) __CTFramesetter *framesetter;
@property(readonly) __CTParagraphStyle *paragraphStyle;
@property(readonly) __CTFrame *textFrame;
@property(copy) NSString *truncationSymbol;
@property(readonly) float baselineYOffset;
@property float calculatedFontSize;
@property(retain) id contentPath;
@property BOOL forceNaturalAlignment;
@property float leading;
@property BOOL shouldDrawEmoji;
@property BOOL shouldQuoteText;
@property BOOL shouldSizeToTextImageBounds;

+ (void)_initializeSafeCategory;

- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 drawEmoji:(BOOL)arg2;
- (struct __CFAttributedString { }*)attributedString;
- (id)attributedText;
- (id)attributes;
- (id)attributesWithLineBreakMode:(NSInteger)arg1;
- (float)baselineYOffset;
- (float)calculatedFontSize;
- (id)contentPath;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)forceNaturalAlignment;
- (struct __CTFramesetter { }*)framesetter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateAttributedString;
- (void)invalidateAttributes;
- (void)invalidateFramesetter;
- (void)invalidateParagraphStyle;
- (void)invalidateTextFrame;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (float)leading;
- (float)lineHeight;
- (float)lineImageHeightInContext:(struct CGContext { }*)arg1;
- (struct __CTParagraphStyle { }*)paragraphStyle;
- (struct __CTParagraphStyle { }*)paragraphStyleWithLineBreakMode:(NSInteger)arg1;
- (float)preferredHeightForWidth:(float)arg1;
- (void)recalculateFontSizeForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCalculatedFontSize:(float)arg1;
- (void)setContentPath:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setForceNaturalAlignment:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLeading:(float)arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setShouldDrawEmoji:(BOOL)arg1;
- (void)setShouldQuoteText:(BOOL)arg1;
- (void)setShouldSizeToTextImageBounds:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTruncationSymbol:(id)arg1;
- (BOOL)shouldDrawEmoji;
- (BOOL)shouldQuoteText;
- (BOOL)shouldSizeToTextImageBounds;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 calculatedFontSize:(float*)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (struct CGSize { float x1; float x2; })suggestFrameSizeWithConstraints:(struct CGSize { float x1; float x2; })arg1 fitsRange:(struct { NSInteger x1; NSInteger x2; }*)arg2;
- (struct __CTFrame { }*)textFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(NSInteger)arg2 adjustForShadow:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(NSInteger)arg2;
- (id)truncationSymbol;

@end
