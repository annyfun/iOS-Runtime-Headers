/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
    NSMutableArray *m_keys;
    NSString *m_name;
}

@property(retain) NSMutableArray *keys;
@property(retain) NSString *name;
@property(readonly) NSUInteger count;

+ (id)keylist;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 keys:(id)arg2;
- (id)keyWithName:(id)arg1;
- (id)keys;
- (id)name;
- (void)setKeys:(id)arg1;
- (void)setName:(id)arg1;

@end
