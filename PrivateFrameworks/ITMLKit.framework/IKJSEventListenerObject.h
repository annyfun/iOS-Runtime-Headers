/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject> {
    NSMutableDictionary * _eventListenersMap;
}

@property (nonatomic, retain) NSMutableDictionary *eventListenersMap;

- (void).cxx_destruct;
- (id)_eventInformationForType:(id)arg1 extraInfo:(id)arg2;
- (BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3;
- (void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
- (id)eventListenersMap;
- (BOOL)invokeListeners:(id)arg1 extraInfo:(id)arg2;
- (BOOL)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4;
- (BOOL)invokeSingleListener:(id)arg1 extraInfo:(id)arg2 return:(id*)arg3;
- (void)removeEventListener:(id)arg1 :(id)arg2;
- (void)setEventListenersMap:(id)arg1;

@end