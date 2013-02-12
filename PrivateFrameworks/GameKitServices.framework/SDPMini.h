/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary;

@interface SDPMini : NSObject {
    NSMutableDictionary *_dict;
}

- (id)RTPMapString:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (id)SDPUsername;
- (BOOL)aacBlockSize:(NSInteger*)arg1;
- (NSInteger)addressType;
- (NSInteger)addressTypeAudio;
- (NSInteger)addressTypeForConnection:(id)arg1;
- (NSInteger)addressTypeVideo;
- (void)appendAudioAttribute:(id)arg1;
- (void)appendAudioMedia:(NSInteger)arg1;
- (void)appendDeviceInfo;
- (void)appendSessionAttribute:(id)arg1;
- (void)appendVideoAttribute:(id)arg1;
- (void)appendVideoMedia:(NSInteger)arg1;
- (id)audioMedia;
- (id)audioMediaAttributes;
- (id)audioMediaConnection;
- (id)audioPayloadTypes;
- (NSInteger)audioPort;
- (NSInteger)audioRTCPPort;
- (unsigned long)audioRTPID;
- (id)audioStringForVersion:(NSUInteger)arg1;
- (BOOL)autoDetectBandwidth;
- (id)bandwidth;
- (void)buildRTPMap;
- (id)connection;
- (id)dataMedia;
- (id)dataMediaAttributes;
- (NSInteger)dataPort;
- (NSInteger)dataRTCPPort;
- (id)dataStringForVersion:(NSUInteger)arg1;
- (void)dealloc;
- (id)defaultAudioPayloads:(BOOL)arg1 withUserCount:(NSInteger)arg2;
- (id)defaultAudioPayloads:(BOOL)arg1;
- (id)defaultAudioPayloads;
- (char *)featuresListString;
- (BOOL)getAUNumber:(NSUInteger*)arg1;
- (BOOL)getOS:(id*)arg1 model:(id*)arg2;
- (id)hardwareInfo;
- (BOOL)hasAudioCodec:(NSInteger)arg1 withPeerSDP:(id)arg2;
- (BOOL)hasAudioCodec:(NSInteger)arg1;
- (BOOL)hasH263;
- (BOOL)hasMultiPointFlag:(NSInteger*)arg1;
- (BOOL)hasPureVoice;
- (BOOL)hasViceroyCompatibleAudioCodec;
- (BOOL)hasViceroyCompatibleVideoCodec;
- (BOOL)hasVideoCodec:(NSInteger)arg1 withPeerSDP:(id)arg2;
- (BOOL)hasVideoCodec:(NSInteger)arg1;
- (id)init;
- (id)initWithOrigin:(id)arg1 sessionName:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1 forAudioOnly:(BOOL)arg2 withUserCount:(NSInteger)arg3;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1 forAudioOnly:(BOOL)arg2;
- (id)initWithViceroyDefaultsUsingZeroes:(BOOL)arg1;
- (const char *)ip;
- (const char *)ipAudio;
- (const char *)ipFromConnection:(id)arg1;
- (const char *)ipVideo;
- (BOOL)irisOpen;
- (NSInteger)maxBandwidth;
- (NSInteger)maxFramerate;
- (NSInteger)maxImagesize;
- (id)origin;
- (NSInteger)payload:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (id)payloadString:(NSInteger)arg1 isAudio:(BOOL)arg2;
- (NSInteger)portForMediaHelper:(id)arg1;
- (void)resetSDP;
- (NSInteger)rulesFramerate:(NSInteger)arg1;
- (void)rulesImageSize:(NSInteger)arg1 pWidth:(NSInteger*)arg2 pHeight:(NSInteger*)arg3;
- (void)rulesPeerImageSize:(NSInteger)arg1 pWidth:(NSInteger*)arg2 pHeight:(NSInteger*)arg3;
- (id)sessionAttributes;
- (id)sessionName;
- (id)sessionString;
- (void)setAudioMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (BOOL)setAudioPayloads:(NSInteger*)arg1 count:(NSInteger)arg2;
- (void)setAudioRTPID:(unsigned long)arg1;
- (void)setAutoDetectBandwidth:(BOOL)arg1;
- (void)setBandwidthWithString:(id)arg1;
- (void)setConnectionWithArray:(id)arg1;
- (void)setDataMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (void)setFeaturesListString:(char *)arg1;
- (void)setHardwareInfo:(id)arg1;
- (void)setMaxBandwidth:(NSInteger)arg1;
- (void)setMaxFramerate:(NSInteger)arg1;
- (void)setMaxImageSize:(NSInteger)arg1 forPayloadType:(NSInteger)arg2;
- (void)setMediaWithArrayHelper:(id)arg1 mediaArray:(id)arg2 attributesArray:(id)arg3;
- (void)setMultiPointFlagWithCount:(NSInteger)arg1;
- (void)setOriginWithArray:(id)arg1;
- (void)setSDP:(id)arg1;
- (void)setSessionName:(id)arg1;
- (void)setUseIChatEncryption:(BOOL)arg1;
- (void)setVideoMediaWithArray:(id)arg1 andAttributesWithArray:(id)arg2;
- (BOOL)setVideoPayloads:(NSInteger*)arg1 count:(NSInteger)arg2;
- (void)setVideoRTPID:(unsigned long)arg1;
- (char *)srtpKey;
- (char *)srtpSalt;
- (id)toString;
- (id)toStringForVersion:(NSUInteger)arg1;
- (void)updateVideoAttributePrefix:(id)arg1 withAppendedValue:(id)arg2;
- (BOOL)useIChatEncryption;
- (const char *)userName;
- (id)videoMedia;
- (id)videoMediaAttributes;
- (id)videoMediaConnection;
- (id)videoPayloadTypes;
- (NSInteger)videoPort;
- (NSInteger)videoRTCPPort;
- (unsigned long)videoRTPID;
- (id)videoStringForVersion:(NSUInteger)arg1;

@end
