/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {
    ABSwellTextView *_textView;
}

+ (id)labelTextForPropertyGroup:(id)arg1 info:(id)arg2 styleProvider:(id)arg3;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (void)setupTextView:(id)arg1 withStyleProvider:(id)arg2 whenEditing:(BOOL)arg3;
+ (id)swellTextViewForReuse;

- (BOOL)canBeginEditingAnytime;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRectForView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabel;
- (void)reload;
- (void)reloadFromModel;
- (void)setLabelText:(id)arg1;
- (BOOL)shouldUseTwoLineLabels;
- (void)swellTextView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)swellTextViewDidBeginEditing:(id)arg1;
- (void)swellTextViewDidEndEditing:(id)arg1;
- (BOOL)swellTextViewShouldBeginEditing:(id)arg1;
- (BOOL)swellTextViewShouldEndEditing:(id)arg1;
- (void)swellTextViewTextDidChange:(id)arg1;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (id)viewForFirstResponder;

@end
