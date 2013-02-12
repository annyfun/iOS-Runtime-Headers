/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
}

@property(readonly) NSString *UTI;
@property(readonly) NSString *defaultFileExtension;
@property(readonly) NSString *figFormatReaderFileFormat;
@property(readonly) NSSet *supportedMediaTypes;
@property(readonly) NSUInteger audioFileTypeID;

+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
+ (id)allFileTypeIdentifiers;
+ (void)initialize;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;

- (id)UTI;
- (unsigned long)audioFileTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultFileExtension;
- (id)description;
- (id)figFormatReaderFileFormat;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
- (id)supportedMediaTypes;
- (BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2;

@end
