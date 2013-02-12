/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItem, CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem {
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
    CoreDAVItemWithNoChildren *_propName;
}

@property(retain) CoreDAVItemWithNoChildren *allProp;
@property(retain) CoreDAVItem *include;
@property(retain) CoreDAVItem *prop;
@property(retain) CoreDAVItemWithNoChildren *propName;

- (id)allProp;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)include;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)prop;
- (id)propName;
- (void)setAllProp:(id)arg1;
- (void)setInclude:(id)arg1;
- (void)setProp:(id)arg1;
- (void)setPropName:(id)arg1;

@end
