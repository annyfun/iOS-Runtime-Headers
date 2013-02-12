/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;

@interface EMTop : NSObject <OIProgressiveReaderDelegate> {
    CMArchiveManager *_archiver;
    NSString *_inFileName;
    EMWorkbookMapper *_mapper;
    EMState *_state;
    BOOL _xml;
}

+ (void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;

- (void)_streamWorkbook:(id)arg1;
- (void)dealloc;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(NSUInteger)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(NSInteger)arg2;

@end
