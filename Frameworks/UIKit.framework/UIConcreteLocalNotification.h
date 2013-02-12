/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar, NSData, NSDate, NSString, NSTimeZone;

@interface UIConcreteLocalNotification : UILocalNotification {
    NSString *alertAction;
    NSString *alertBody;
    NSString *alertLaunchImage;
    BOOL allowSnooze;
    NSInteger applicationIconBadgeNumber;
    NSString *customLockSliderLabel;
    NSDate *fireDate;
    BOOL fireNotificationsWhenAppRunning;
    BOOL hasAction;
    BOOL hideAlertTitle;
    BOOL interruptAudioAndLockDevice;
    NSCalendar *repeatCalendar;
    NSUInteger repeatInterval;
    BOOL resumeApplicationInBackground;
    BOOL showAlarmStatusBarItem;
    NSString *soundName;
    BOOL soundNameIsARingtone;
    NSTimeZone *timeZone;
    NSData *userInfoData;
}

@property(copy) NSString *alertAction;
@property(copy) NSString *alertBody;
@property(copy) NSString *alertLaunchImage;
@property(copy) NSString *customLockSliderLabel;
@property(copy) NSDate *fireDate;
@property(copy) NSCalendar *repeatCalendar;
@property(copy) NSString *soundName;
@property(copy) NSTimeZone *timeZone;
@property BOOL allowSnooze;
@property NSInteger applicationIconBadgeNumber;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL hasAction;
@property BOOL hideAlertTitle;
@property BOOL interruptAudioAndLockDevice;
@property NSUInteger repeatInterval;
@property BOOL resumeApplicationInBackground;
@property BOOL showAlarmStatusBarItem;
@property BOOL soundNameIsARingtone;

- (void)_addCalendarUnits:(NSUInteger)arg1 toDateComponents:(id)arg2;
- (void)_setUserInfoData:(id)arg1;
- (id)alertAction;
- (id)alertBody;
- (id)alertLaunchImage;
- (BOOL)allowSnooze;
- (NSInteger)applicationIconBadgeNumber;
- (void)clearNonSystemProperties;
- (NSInteger)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLockSliderLabel;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (BOOL)fireNotificationsWhenAppRunning;
- (BOOL)hasAction;
- (NSUInteger)hash;
- (BOOL)hideAlertTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)interruptAudioAndLockDevice;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)repeatCalendar;
- (NSUInteger)repeatInterval;
- (BOOL)resumeApplicationInBackground;
- (void)setAlertAction:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAllowSnooze:(BOOL)arg1;
- (void)setApplicationIconBadgeNumber:(NSInteger)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setHideAlertTitle:(BOOL)arg1;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(NSUInteger)arg1;
- (void)setResumeApplicationInBackground:(BOOL)arg1;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSoundNameIsARingtone:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)showAlarmStatusBarItem;
- (id)soundName;
- (BOOL)soundNameIsARingtone;
- (id)timeZone;
- (id)userInfo;

@end
