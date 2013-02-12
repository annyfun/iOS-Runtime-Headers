/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKIntegerArray : NSArray {
    id _imp;
}

+ (id)array;
+ (id)arrayWithCapacity:(NSUInteger)arg1;

- (void)addValue:(NSUInteger)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (NSUInteger)indexOfValue:(NSUInteger)arg1;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)insertValue:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)lastValue;
- (void)removeLastValue;
- (void)removeValueAtIndex:(NSUInteger)arg1;
- (void)removeValuesAtIndexes:(id)arg1;
- (void)removeValuesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSUInteger)valueAtIndex:(NSUInteger)arg1;

@end
