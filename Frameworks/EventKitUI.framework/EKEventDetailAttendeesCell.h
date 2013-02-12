/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventDetailAttendeesListView;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    EKEventDetailAttendeesListView *_attendeesListView;
}

+ (void)_initializeSafeCategory;

- (id)_attendeesListView;
- (id)_axStringForArray:(id)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (void)setAttendees:(id)arg1;
- (BOOL)update;
- (id)viewControllerForCell;

@end
