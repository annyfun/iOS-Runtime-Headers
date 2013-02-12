/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
    NSMutableDictionary *m_keyCache;
    NSMutableArray *m_keyplanes;
    NSMutableDictionary *m_keysetCache;
    NSString *m_layout;
    NSString *m_name;
    NSString *m_visualStyle;
}

@property(readonly) NSString *cacheKey;
@property(retain) NSDictionary *keyCache;
@property(retain) NSArray *keyplanes;
@property(retain) NSMutableDictionary *keysetCache;
@property(readonly) NSString *layoutName;
@property(retain) NSString *name;
@property(retain) NSString *visualStyle;

+ (id)keyboard;

- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
- (id)cacheKey;
- (id)cachedKeysByKeyName:(id)arg1 onKeyplane:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyCache;
- (id)keyForString:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneWithName:(id)arg1;
- (id)keyplanes;
- (id)keysetCache;
- (void)layout;
- (id)layoutName;
- (void)makeLikeOther:(id)arg1;
- (id)name;
- (void)setKeyCache:(id)arg1;
- (void)setKeyplanes:(id)arg1;
- (void)setKeysetCache:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)visualStyle;

@end
