/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonImageDataDelegate>, CAKeyframeAnimation, NSArray, NSDictionary, UIImagePickerController, UIPopoverController;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate> {
    BOOL _allowsEditingExistingPhoto;
    NSDictionary *_animationContextDictionary;
    BOOL _applyImageChangesToAllPeople;
    CAKeyframeAnimation *_bounceAnimation;
    BOOL _canChooseFromMultiplePhotos;
    BOOL _canChoosePhoto;
    BOOL _confirmingDelete;
    BOOL _editingImage;
    BOOL _hasExistingPhoto;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    UIImagePickerController *_imagePicker;
    NSArray *_people;
    UIPopoverController *_popoverPresenter;
    NSArray *_writablePeople;
}

@property <ABPersonImageDataDelegate> *imageDataDelegate;

+ (void)_initializeSafeCategory;

- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 shouldSaveFullSize:(BOOL)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)_formatStringForSourceType:(NSInteger)arg1 withSuffix:(BOOL)arg2 useAbbreviatedStrings:(BOOL)arg3;
- (BOOL)_hasMultipleWritablePeople;
- (id)_removePreviousSheet;
- (void)_showActionSheet:(id)arg1 previousOwner:(id)arg2;
- (void)_showImagePickerWithPriorConfirmation:(BOOL)arg1;
- (void)_tearDownImagePickerController;
- (id)ab_windowContentViewForView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)addButtonForSource:(BOOL)arg1 suffix:(NSInteger)arg2 name:(id)arg3 indexInAllPeople:(NSInteger)arg4 toArray:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStopAfterDelay:(id)arg1;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (id)buttonTitlesAndIndicesForPickingPreferredPhoto;
- (void)cancelPicker;
- (void)chooseExisting;
- (void)choosePhoto;
- (id)contentView;
- (void)dealloc;
- (void)delayedPerform:(SEL)arg1 withObject:(id)arg2;
- (void)delayedPerform:(SEL)arg1;
- (void)deletePhoto:(BOOL)arg1;
- (void)deletePhotoNoConfirm;
- (void)doEditPhoto;
- (void)editPhoto;
- (BOOL)hasMultipleActions;
- (id)imageDataDelegate;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)multipleSourcePicker:(id)arg1 didSelectPerson:(void*)arg2;
- (void)multipleSourcePickerDidSelectPhotoPicker:(id)arg1;
- (void)orderOut:(id)arg1;
- (id)popoverPresenterForViewController:(id)arg1;
- (void)releaseImagePicker;
- (void)reload;
- (void)resume;
- (void)setImageDataDelegate:(id)arg1;
- (void)suspend;
- (void)takePhoto;
- (void)usePhotoFromPerson:(void*)arg1;

@end
