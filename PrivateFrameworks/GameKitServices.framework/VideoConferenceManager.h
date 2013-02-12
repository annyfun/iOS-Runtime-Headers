/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKNATObserver, ICEResultWaitQueue, NSMachPort, NSMutableArray, VideoConference;

@interface VideoConferenceManager : NSObject <NSMachPortDelegate> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    VideoConference *activeConference;
    NSInteger audioRefCount;
    NSInteger clientPID;
    struct opaqueCMSession { } *cmSession;
    NSMachPort *cmSessionMachPort;
    struct dispatch_queue_s { } *cmSessionQueue;
    NSInteger cmSessionRefCount;
    VideoConference *conferenceWithMic;
    BOOL enableSpeakerPhone;
    NSInteger encodeBitrate;
    struct tagHANDLE { NSInteger x1; } *hAUIO;
    struct tagHANDLE { NSInteger x1; } *hSIP;
    NSInteger hardwareSampleRate;
    NSInteger internalBlockSize;
    NSInteger internalSampleRate;
    BOOL isForcingAudioBitrate;
    BOOL isTetheredDisplayMode;
    BOOL isUsingSuppression;
    GKNATObserver *natObserver;
    ICEResultWaitQueue *resultQueue;
    BOOL shouldSetupAudioSession;
    NSInteger sipRefCount;
    NSInteger startToken;
    } stateLock;
    NSInteger stopToken;
    BOOL tearDownCMSession;
    NSMutableArray *vcList;
}

@property VideoConference *activeConference;
@property VideoConference *conferenceWithMic;
@property(readonly) ICEResultWaitQueue *resultQueue;
@property(readonly) NSMutableArray *vcList;
@property NSInteger clientPID;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property NSInteger internalSampleRate;
@property BOOL isForcingAudioBitrate;
@property BOOL isUsingSuppression;
@property BOOL shouldSetupAudioSession;

+ (id)defaultVideoConferenceManager;

- (struct tagHANDLE { NSInteger x1; }*)SIPHandle;
- (id)activeConference;
- (void)addVideoConference:(id)arg1;
- (NSInteger)clientPID;
- (id)conferenceForCallID:(NSInteger)arg1;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { NSInteger x_12_1_1; BOOL x_12_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; NSUInteger x13; }*)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (id)conferenceWithMic;
- (void)createSIP;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (BOOL)forceBufferDuration:(float*)arg1;
- (BOOL)forceBufferFrames:(NSInteger*)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(NSUInteger)arg3;
- (void)handleMachMessage:(void*)arg1;
- (void)handleRouteChanged:(struct opaqueCMSession { }*)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)init;
- (NSInteger)internalSampleRate;
- (BOOL)isForcingAudioBitrate;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;
- (void)pauseVideoConferences:(BOOL)arg1;
- (BOOL)projectionModeEnabledState;
- (void)removeVideoConference:(id)arg1;
- (void)resetAudioSessionProperties;
- (id)resultQueue;
- (void)setActiveConference:(id)arg1;
- (void)setClientPID:(NSInteger)arg1;
- (void)setConferenceWithMic:(id)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setEncodeBitrate:(NSInteger)arg1;
- (void)setInternalSampleRate:(NSInteger)arg1;
- (void)setIsForcingAudioBitrate:(BOOL)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setupAudioSessionProperties;
- (BOOL)shouldSetupAudioSession;
- (BOOL)startAudioIO:(struct AudioStreamBasicDescription { double x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; NSUInteger x8; NSUInteger x9; })arg1 sampleRate:(NSInteger)arg2 minSamplesPerFrame:(NSInteger)arg3 audioBundle:(NSInteger)arg4 remoteVCCallInfo:(id)arg5 error:(id*)arg6;
- (void)startAudioSession;
- (void)startSIP;
- (BOOL)stopAudioIO;
- (void)stopAudioSession;
- (void)stopSIP;
- (BOOL)tearDownAudioIO:(BOOL)arg1;
- (void)tearDownAudioSession:(BOOL)arg1;
- (id)vcList;

@end
