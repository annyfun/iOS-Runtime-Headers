/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    id _internal;
}

@property(readonly) UIView *backgroundView;
@property(readonly) UIView *view;
@property NSInteger controlStyle;
@property float currentPlaybackRate;
@property double currentPlaybackTime;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) BOOL isPreparedToPlay;
@property(readonly) NSInteger loadState;
@property(readonly) NSInteger playbackState;
@property NSInteger repeatMode;
@property NSInteger scalingMode;
@property BOOL shouldAutoplay;
@property BOOL useApplicationAudioSession;

+ (void)allInstancesResignActive;

- (void)_resignActive;
- (BOOL)allowsWirelessPlayback;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (id)contentURL;
- (NSInteger)controlStyle;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithContentURL:(id)arg1;
- (double)initialPlaybackTime;
- (BOOL)isFullscreen;
- (BOOL)isPreparedToPlay;
- (NSInteger)loadState;
- (id)methodSignatureForSelector:(SEL)arg1;
- (NSInteger)movieMediaTypes;
- (NSInteger)movieSourceType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (NSInteger)playbackState;
- (void)prepareToPlay;
- (NSInteger)repeatMode;
- (NSInteger)scalingMode;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(NSInteger)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(NSInteger)arg1;
- (void)setRepeatMode:(NSInteger)arg1;
- (void)setScalingMode:(NSInteger)arg1;
- (void)setShouldAutoplay:(BOOL)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (BOOL)useApplicationAudioSession;
- (id)view;

@end
