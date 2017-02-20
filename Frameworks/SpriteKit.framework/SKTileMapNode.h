/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileMapNode : SKNode <NSCoding, NSCopying> {
    BOOL  _enableAutomapping;
    float  _hexRadius;
    void _isoColumnVector;
    float  _isoColumnWidth;
    float  _isoHeightScalar;
    void _isoOrigin;
    float  _isoRowHeight;
    void _isoRowVector;
    struct SKCTileMapNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcTileMapNode;
    SKTileSet * _tileSet;
    NSString * _tileSetName;
    struct CGSize { 
        float width; 
        float height; 
    }  _tileSize;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } anchorPoint;
@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) int blendMode;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) float colorBlendFactor;
@property (nonatomic) BOOL enableAutomapping;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } mapSize;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic, retain) SKTileSet *tileSet;
@property (nonatomic, retain) NSString *tileSetName;
@property (nonatomic) struct CGSize { float x1; float x2; } tileSize;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4 fillWithTileGroup:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4 tileGroupLayout:(id)arg5;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (float)alpha;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)applyTileStamp:(id)arg1 inColumn:(int)arg2 row:(int)arg3;
- (int)blendMode;
- (void)calculateSize;
- (struct CGPoint { float x1; float x2; })centerOfTileAtColumn:(unsigned int)arg1 row:(unsigned int)arg2;
- (void)clearModifiedTileTracking;
- (id)color;
- (float)colorBlendFactor;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createTileStampFromColumn:(unsigned int)arg1 row:(unsigned int)arg2 withWidth:(unsigned int)arg3 height:(unsigned int)arg4 addToTileSet:(BOOL)arg5;
- (void)dealloc;
- (BOOL)enableAutomapping;
- (void)encodeWithCoder:(id)arg1;
- (void)fillArray:(unsigned int*)arg1 withTilesFromColumn:(unsigned int)arg2 row:(unsigned int)arg3 forWidth:(unsigned int)arg4 height:(unsigned int)arg5;
- (void)fillArrayWithTiles:(unsigned int*)arg1;
- (void)fillWithTileDefinition:(id)arg1;
- (void)fillWithTileGroup:(id)arg1;
- (void)forceRedraw;
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;
- (void)getTileModifiedData:(int*)arg1 outMinRowModified:(int*)arg2 outMaxColumnModified:(int*)arg3 outmaxRowModified:(int*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4;
- (id)initWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4 fillWithTileGroup:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4 tileGroupLayout:(id)arg5;
- (unsigned int)lightingBitMask;
- (struct CGSize { float x1; float x2; })mapSize;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfRows;
- (void)rebuildTileSprites;
- (void)removeAllTiles;
- (void)setAlpha:(float)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(float)arg1;
- (void)setColumns:(unsigned int)arg1 andRows:(int)arg2;
- (void)setEnableAutomapping:(BOOL)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setNumberOfRows:(unsigned int)arg1;
- (void)setRawTiles:(unsigned int*)arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3;
- (void)setShader:(id)arg1;
- (void)setStartData:(unsigned int)arg1 rows:(unsigned int)arg2 tileSize:(struct CGSize { float x1; float x2; })arg3 tileSet:(id)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned int)arg3 row:(unsigned int)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;
- (void)setTileGroup:(id)arg1 forColumn:(unsigned int)arg2 row:(unsigned int)arg3;
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned int)arg2 row:(unsigned int)arg3;
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned int)arg3 row:(unsigned int)arg4;
- (void)setTileSet:(id)arg1;
- (void)setTileSetName:(id)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTilesFromArray:(unsigned int*)arg1;
- (void)setTilesFromArray:(unsigned int*)arg1 fromColumn:(unsigned int)arg2 row:(unsigned int)arg3 forWidth:(unsigned int)arg4 height:(unsigned int)arg5;
- (id)shader;
- (BOOL)shouldUnarchiveTileSet;
- (unsigned int)tileColumnIndexFromPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)tileDefinitionAtColumn:(unsigned int)arg1 row:(unsigned int)arg2;
- (id)tileDefinitionForTileID:(unsigned int)arg1;
- (id)tileGroupAtColumn:(unsigned int)arg1 row:(unsigned int)arg2;
- (unsigned int)tileRowIndexFromPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)tileSet;
- (id)tileSetName;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned int)arg1 y:(unsigned int)arg2;
- (void)updateTileGroupsAtX:(unsigned int)arg1 y:(unsigned int)arg2;
- (void)validateAllTiles;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

+ (id)tileMapNodesWithTileSet:(id)arg1 columns:(unsigned int)arg2 rows:(unsigned int)arg3 tileSize:(struct CGSize { float x1; float x2; })arg4 fromNoiseMap:(id)arg5 tileTypeNoiseMapThresholds:(id)arg6;

@end