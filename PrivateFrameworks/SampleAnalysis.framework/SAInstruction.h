/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAInstruction : NSObject <SASerializable> {
    SABinary * _binary;
    unsigned long long  _offsetIntoTextSegment;
    SASourceInfo * _sourceInfo;
    SASymbol * _symbol;
}

@property SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long offsetIntoTextSegment;
@property (retain) SASourceInfo *sourceInfo;
@property (readonly) Class superclass;
@property (retain) SASymbol *symbol;

+ (id)classDictionaryKey;
+ (id)instructionWithBinary:(id)arg1 offsetIntoTextSegment:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned char x4[16]; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned char x4[16]; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)binary;
- (id)debugDescription;
- (unsigned long long)offsetIntoTextSegment;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned char x4[16]; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setBinary:(id)arg1;
- (void)setOffsetIntoTextSegment:(unsigned long long)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setSymbol:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)sourceInfo;
- (id)symbol;
- (bool)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2;

@end