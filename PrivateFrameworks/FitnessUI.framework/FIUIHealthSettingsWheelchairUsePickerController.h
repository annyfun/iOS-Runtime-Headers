/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController {
    id /* block */  _wheelchairUseUpdateHandler;
}

@property (nonatomic, copy) id /* block */ wheelchairUseUpdateHandler;

- (void).cxx_destruct;
- (int)_wheelchairUseForRow:(int)arg1;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)setWheelchairUse:(int)arg1;
- (void)setWheelchairUseUpdateHandler:(id /* block */)arg1;
- (id /* block */)wheelchairUseUpdateHandler;

@end