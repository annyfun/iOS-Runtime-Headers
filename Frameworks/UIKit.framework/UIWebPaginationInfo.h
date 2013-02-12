/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    NSArray *_pageRects;
    float _scaleFactor;
    UIWebDocumentView *_webDocumentView;
}

@property(retain) UIWebDocumentView *webDocumentView;
@property(readonly) float lastPageHeight;
@property(readonly) NSUInteger pageCount;

- (void)dealloc;
- (id)initWithScaleFactor:(float)arg1 layoutSize:(struct CGSize { float x1; float x2; })arg2 pageRects:(id)arg3;
- (float)lastPageHeight;
- (struct CGSize { float x1; float x2; })layoutSize;
- (NSUInteger)pageCount;
- (id)pageRects;
- (float)scaleFactor;
- (void)setWebDocumentView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForPageAtIndex:(NSInteger)arg1;
- (id)webDocumentView;

@end
