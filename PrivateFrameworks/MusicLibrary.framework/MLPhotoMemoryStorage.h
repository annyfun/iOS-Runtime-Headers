/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDate, NSString, NSSet;

@interface MLPhotoMemoryStorage : MLPhoto {
    unsigned int _writeIsPending : 1;
    double _captureTime;
    NSDate *_date;
    unsigned int _durationInMilliseconds;
    NSSet *_extensions;
    NSString *_fileExtension;
    NSString *_filenameWithoutExtension;
    int _imageID;
    double _latitude;
    double _longitude;
    NSString *_metadataPath;
    int _type;
    NSString *_videoPath;
}

+ (void)_initializeSafeCategory;

- (id)_metadataPath;
- (void)_setFilenameFromFullSizeVideoPath:(id)arg1;
- (void)_setMetadataPathFromFullSizeVideoPath:(id)arg1;
- (void)addExtension:(id)arg1;
- (double)captureTime;
- (void)dealloc;
- (id)description;
- (double)durationInMilliseconds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1;
- (id)filenameWithoutExtension;
- (BOOL)hasFullSizeImageData;
- (int)imageID;
- (id)initWithImageID:(int)arg1;
- (BOOL)isWritePending;
- (double)latitude;
- (double)longitude;
- (id)pathForImageFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (int)photoType;
- (void)setCaptureTime:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setDurationInMilliseconds:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setPathForVideoFile:(id)arg1;
- (void)setType:(int)arg1;
- (void)setWriteIsPending:(BOOL)arg1;

@end