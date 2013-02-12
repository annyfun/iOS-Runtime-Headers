/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSArray, NSString, NSURL;

@interface LSResourceProxy : NSObject {
    NSString *_boundApplicationIdentifier;
    NSArray *_boundIconFileNames;
    BOOL _boundIconIsBadge;
    BOOL _boundIconIsPrerendered;
    NSURL *_boundResourcesDirURL;
    NSString *_boundRoleIdentifier;
    NSString *_localizedName;
    LSApplicationProxy *_typeOwner;
}

@property(readonly) NSString *localizedName;

+ (struct CGSize { float x1; float x2; })_applicationIconCanvasSize;
+ (NSInteger)_compareApplicationIconCanvasSize:(struct CGSize { float x1; float x2; })arg1 withSize:(struct CGSize { float x1; float x2; })arg2;

- (struct { NSInteger x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconDefinitionForSize:(struct CGSize { float x1; float x2; })arg1 style:(NSInteger)arg2;
- (id)_iconForStyle:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_iconForStyle:(NSInteger)arg1;
- (struct { NSInteger x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(NSInteger)arg1;
- (id)_imageSizesForStyle:(NSInteger)arg1;
- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundRoleIdentifier:(id)arg3 boundResourcesDirectoryURL:(id)arg4 boundIconFileNames:(id)arg5 typeOwner:(id)arg6 boundIconIsPrerendered:(BOOL)arg7 boundIconIsBadge:(BOOL)arg8;
- (id)_initWithLocalizedName:(id)arg1;
- (struct CGSize { float x1; float x2; })_largestImageSize:(NSInteger)arg1;
- (id)boundApplicationIdentifier;
- (id)boundIconFileNames;
- (BOOL)boundIconIsBadge;
- (BOOL)boundIconIsPrerendered;
- (id)boundResourcesDirectoryURL;
- (id)boundRoleIdentifier;
- (void)dealloc;
- (id)iconDataForVariant:(NSInteger)arg1;
- (id)localizedName;
- (void)setBoundApplicationIdentifier:(id)arg1;
- (void)setBoundIconFileNames:(id)arg1;
- (void)setBoundIconIsBadge:(BOOL)arg1;
- (void)setBoundIconIsPrerendered:(BOOL)arg1;
- (void)setBoundResourcesDirectoryURL:(id)arg1;
- (void)setBoundRoleIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setTypeOwner:(id)arg1;
- (id)typeOwner;

@end
