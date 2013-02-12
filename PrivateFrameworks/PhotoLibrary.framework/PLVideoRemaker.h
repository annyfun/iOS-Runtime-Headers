/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVRemaker, NSString, NSTimer, NSURL, PLProgressView;

@interface PLVideoRemaker : NSObject {
    id _delegate;
    double _duration;
    NSInteger _mode;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    AVRemaker *_remaker;
    NSURL *_sourceURL;
    double _trimEndTime;
    double _trimStartTime;
    NSString *_trimmedPath;
}

+ (void)_initializeSafeCategory;
+ (long long)approximateByteSizeForMode:(NSInteger)arg1 duration:(double)arg2;
+ (NSInteger)getHDRemakerModeForMode:(NSInteger)arg1;
+ (NSInteger)getSDRemakerModeForMode:(NSInteger)arg1;
+ (double)maximumDurationForTrimMode:(NSInteger)arg1;

- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (void)_updateProgress;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)initWithURL:(id)arg1;
- (id)messageForRemakingProgress;
- (NSInteger)mode;
- (id)progressView;
- (void)remake;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMode:(NSInteger)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (double)trimEndTime;
- (double)trimStartTime;

@end
