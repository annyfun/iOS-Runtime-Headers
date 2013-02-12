/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class PreferencesDoubleTwoPartValueCell;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener> {
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    PreferencesDoubleTwoPartValueCell *_cell;
    } _endDateGr;
    BOOL _indent;
    } _startDateGr;
}

- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)shortenCell:(id)arg1;

@end
