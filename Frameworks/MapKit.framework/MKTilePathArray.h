/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTilePathArray : NSArray {
    id _imp;
}

+ (id)array;
+ (id)arrayWithCapacity:(NSUInteger)arg1;

- (void)addValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (NSUInteger)indexOfValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)insertValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1 atIndex:(NSUInteger)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })lastValue;
- (void)removeLastValue;
- (void)removeValueAtIndex:(NSUInteger)arg1;
- (void)removeValuesAtIndexes:(id)arg1;
- (void)removeValuesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })valueAtIndex:(NSUInteger)arg1;

@end
