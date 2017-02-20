/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    /* Warning: unhandled struct encoding: '{?="isValid"c"hasBeenUsed"c"type"I"object"@"baseLevel"I"bufferLength"I"bufferOffset"I"threadgroupMemoryLength"I"hasLodClamp"c"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        BOOL isValid; 
        BOOL hasBeenUsed; 
        unsigned int type; 
        id object; 
    }  _buffers;
    <MTLDevice> * _cachedDevice;
    <MTLComputePipelineState> * _computePipelineState;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; } * _limits;
    /* Warning: unhandled struct encoding: '{?="isValid"c"hasBeenUsed"c"type"I"object"@"baseLevel"I"bufferLength"I"bufferOffset"I"threadgroupMemoryLength"I"hasLodClamp"c"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        BOOL isValid; 
        BOOL hasBeenUsed; 
        unsigned int type; 
        id object; 
    }  _samplers;
    /* Warning: unhandled struct encoding: '{?="isValid"c"hasBeenUsed"c"type"I"object"@"baseLevel"I"bufferLength"I"bufferOffset"I"threadgroupMemoryLength"I"hasLodClamp"c"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        BOOL isValid; 
        BOOL hasBeenUsed; 
        unsigned int type; 
        id object; 
    }  _textures;
    /* Warning: unhandled struct encoding: '{?="isValid"c"hasBeenUsed"c"type"I"object"@"baseLevel"I"bufferLength"I"bufferOffset"I"threadgroupMemoryLength"I"hasLodClamp"c"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        BOOL isValid; 
        BOOL hasBeenUsed; 
        unsigned int type; 
        id object; 
    }  _threadgroupMemoryLengths;
    BOOL  canDealloc;
    BOOL  canEndEncoding;
    BOOL  canSetComputePipelineState;
    BOOL  hasEndEncoding;
    BOOL  hasSetComputePipelineState;
    BOOL  hasSetStageInRegion;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
            unsigned int z; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
            unsigned int depth; 
        } size; 
    }  stageInRegion;
    struct deque<__weak id, std::__1::allocator<__weak id> > { 
        /* Warning: unhandled struct encoding: '{__split_buffer<__weak id *, std::__1::allocator<__weak id *> >="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<__weak id **, std::__1::allocator<__weak id *> >="__first_"^^@}}"__start_"I"__size_"{__compressed_pair<unsigned long, std::__1::allocator<__weak id> >="__first_"L}}' */ struct __split_buffer<__weak id *, std::__1::allocator<__weak id *> > { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

@property (nonatomic, readonly) <MTLDevice> *cachedDevice;
@property (nonatomic, readonly) <MTLComputePipelineState> *computePipelineState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resourceTrackingRecordDispatchAccesses;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (void)_validateThreadsPerThreadgroup:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (id)cachedDevice;
- (id)computePipelineState;
- (void)dealloc;
- (id)description;
- (void)dispatchThreadgroups:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 threadsPerThreadgroup:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned int)arg2 threadsPerThreadgroup:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg3;
- (void)endEncoding;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned int*)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setStageInRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1;
- (void)setTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)updateFence:(id)arg1;
- (void)validateStageInRegion:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)waitForFence:(id)arg1;

@end