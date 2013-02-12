/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSString;

@interface IMLocalObject : NSObject {
    BOOL _busyForwarding;
    struct dispatch_semaphore_s { } *_deathLock;
    NSMutableArray *_incomingQueue;
    NSRecursiveLock *_lock;
    NSUInteger _port;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_source_s { } *_source;
    id _target;
    BOOL _wasSuspended;
}

@property(readonly) NSMachPort *port;
@property(readonly) NSString *portName;
@property(readonly) BOOL isValid;
@property id target;

+ (void)_registerIMLocalObject:(id)arg1;
+ (id)_registeredIMLocalObjectForPort:(NSUInteger)arg1;
+ (void)_unregisterIMLocalObject:(id)arg1;
+ (void)initialize;

- (void)_cancelHandlerCompleted;
- (void)_clearPort:(BOOL)arg1;
- (void)_dequeueInvocationIfNecessary;
- (void)_enqueueInvocation:(id)arg1;
- (void)_handleComponents:(id)arg1;
- (BOOL)_handleInvocation:(id)arg1;
- (NSUInteger)_port;
- (void)_portDidBecomeInvalid;
- (void)_resume:(id)arg1;
- (void)_suspend:(id)arg1;
- (void)_systemShutdown:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleHeaderData:(unsigned long long*)arg1 headerLength:(NSUInteger)arg2 data:(char *)arg3 dataLength:(NSUInteger)arg4 fromPid:(NSInteger)arg5;
- (void)handleInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)isValidSelector:(SEL)arg1;
- (id)port;
- (id)portName;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)terminated;

@end
