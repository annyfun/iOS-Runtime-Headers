/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, UIImageView, UIView<GKTableViewCellContents>;

@interface GKTableViewCell : UITableViewCell {
    struct { 
        unsigned int isGroupedTableView : 1; 
        unsigned int leaveAccessorySpace : 1; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInsets;
    NSInteger _backgroundStyle;
    } _contentInsets;
    UIView<GKTableViewCellContents> *_contents;
    UIImageView *_disclosureIndicator;
    } _styleFlags;
    GKUITheme *_theme;
}

@property(retain) UIView<GKTableViewCellContents> *contents;
@property(retain) GKUITheme *theme;
@property UIEdgeInsets backgroundInsets;
@property NSInteger backgroundStyle;
@property UIEdgeInsets contentInsets;
@property(readonly) BOOL isGroupedTableView;
@property BOOL leaveAccessorySpace;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (NSInteger)backgroundStyle;
- (void)configureBackgroundView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)contents;
- (void)dealloc;
- (id)description;
- (id)initWithReuseIdentifier:(id)arg1 tableViewStyle:(NSInteger)arg2 backgroundStyle:(NSInteger)arg3;
- (id)initWithReuseIdentifier:(id)arg1 tableViewStyle:(NSInteger)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(NSInteger)arg3 backgroundStyle:(NSInteger)arg4;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isGroupedTableView;
- (BOOL)isSelectable;
- (void)layoutSubviews;
- (BOOL)leaveAccessorySpace;
- (void)prepareForReuse;
- (void)setAccessoryType:(NSInteger)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBackgroundStyle:(NSInteger)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContents:(id)arg1;
- (void)setContentsInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeaveAccessorySpace:(BOOL)arg1;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectionStyle:(NSInteger)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
