/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSLocale, NSMutableArray, NSString;

@interface AVChapterMetadataItemInternal : NSObject {
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    NSInteger chapterGroupIndex;
    NSInteger chapterIndex;
    NSString *chapterType;
    NSMutableArray *completions;
    } duration;
    struct OpaqueFigFormatReaderLoader { } *loader;
    NSLocale *locale;
    struct dispatch_queue_s { } *readWriteQueue;
    } time;
    id value;
    NSInteger valueErrorCode;
    NSInteger valueStatus;
    AVWeakReference *weakReference;
}

@end
