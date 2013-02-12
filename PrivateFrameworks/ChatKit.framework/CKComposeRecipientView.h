/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKService, NSError, NSMutableDictionary, UIActionSheet;

@interface CKComposeRecipientView : _MFComposeRecipientView {
    UIActionSheet *_actionSheet;
    BOOL _alreadyShowedAlertForTooManyRecipientsError;
    BOOL _canSend;
    CKService *_preferredService;
    NSMutableDictionary *_recipientAvailabilityTimeoutTimers;
    NSError *_serviceError;
}

@property(retain) UIActionSheet * actionSheet;
@property BOOL canSend;
@property(retain) CKService * preferredService;
@property(retain) NSError * serviceError;

- (void)_addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addRecipient:(id)arg1;
- (BOOL)_addable;
- (id)_alternateAddressesForMFComposeRecipient:(id)arg1 onlyIMessageAble:(BOOL)arg2;
- (void)_checkAvailabilityOfAlternateAddressesForMFComposeRecipient:(id)arg1;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_refreshActionSheet;
- (void)_showActionSheetForAtom:(id)arg1 animated:(BOOL)arg2;
- (void)_showErrorAlertForTooManyRecipientsUponAdd;
- (void)_showErrorAlertForTooManyRecipientsUponSend;
- (void)_showOneTimeErrorAlertForTooManyRecipientsUponAddIfNecessary;
- (id)actionSheet;
- (void)addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addRecipient:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)atomStyleForRecipient:(id)arg1;
- (BOOL)canInsertMoreRecipients;
- (BOOL)canSend;
- (id)customOverlayContainer;
- (void)dealloc;
- (void)handleMadridServiceActiveAccountsChangedNotification:(id)arg1;
- (void)handlePreferredServiceChangedNotification:(id)arg1;
- (void)handleRecipientAvailabilityTimeout:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)preferredService;
- (void)reflow;
- (void)removeAddressAtIndex:(int)arg1;
- (void)removeAddresses;
- (void)removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)reset;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)serviceError;
- (void)setActionSheet:(id)arg1;
- (void)setCanSend:(BOOL)arg1;
- (void)setPreferredService:(id)arg1;
- (void)setServiceError:(id)arg1;
- (void)showErrorAlertForTooManyRecipientsUponSendIfNecessary;
- (void)startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)stopCheckingRecipientAvailability;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)updateRecipientLimit;

@end