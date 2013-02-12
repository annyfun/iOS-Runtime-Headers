/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;

@interface EventSystemManager : NSObject {
    NSInteger accelEventIndex;
    NSInteger accelUpdateInternalUS;
    NSMutableArray *clientList;
    struct __IOHIDEventSystemClient { } *eventSystemClient;
    BOOL manageAccel;
    BOOL manageRotation;
    NSInteger rotationEventIndex;
    NSInteger rotationUpdateInternalUS;
    struct __CFRunLoop { } *runLoop;
}

+ (id)sharedEventSystem;

- (void)addClient:(id)arg1;
- (id)clientList;
- (void)dealloc;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (id)init;
- (BOOL)managingAccel;
- (BOOL)managingRotation;
- (void)refreshEventSystem;
- (void)removeClient:(id)arg1;
- (void)setAccelUpdateInterval:(double)arg1;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)updateClientState;

@end
