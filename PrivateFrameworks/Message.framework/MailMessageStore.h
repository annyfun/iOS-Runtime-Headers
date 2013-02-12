/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ActivityMonitor, MailAccount, MailboxUid, NSMutableArray, NSTimer;

@interface MailMessageStore : MessageStore {
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 22; 
    MailAccount *_account;
    NSMutableArray *_allMessages;
    NSUInteger _deletedMessageCount;
    NSUInteger _deletedMessagesSize;
    } _flags;
    NSUInteger _generationNumber;
    NSUInteger _lastFetchCount;
    MailboxUid *_mailboxUid;
    ActivityMonitor *_openMonitor;
    NSInteger _state;
    NSTimer *_timer;
    NSUInteger _unreadMessageCount;
    double timeOfLastAutosaveOperation;
}

+ (void)_autosaveMessageStore:(void*)arg1;
+ (Class)classForMimePart;
+ (NSInteger)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (Class)headersClass;
+ (BOOL)storeAtPathIsWritable:(id)arg1;

- (void)_cancelAutosave;
- (id)_defaultRouterDestination;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllMessageData;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (void)_setNeedsAutosave;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)account;
- (BOOL)allowsAppend;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (BOOL)canCompact;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)canFetchMessageIDs;
- (BOOL)canFetchSearchResults;
- (BOOL)canRebuild;
- (void)cancelOpen;
- (void)close;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(NSUInteger)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(NSUInteger)arg1 limit:(NSUInteger)arg2;
- (id)copyOfAllMessagesWithOptions:(NSUInteger)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(NSInteger)arg1 compact:(BOOL)arg2;
- (void)deletedCount:(NSUInteger*)arg1 andSize:(NSUInteger*)arg2;
- (id)description;
- (void)didOpen;
- (id)displayName;
- (void)doCompact;
- (NSInteger)fetchMessagesMatchingCriterion:(id)arg1 limit:(NSUInteger)arg2;
- (NSInteger)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (NSInteger)fetchMobileSynchronously:(NSUInteger)arg1 preservingUID:(id)arg2 compact:(BOOL)arg3;
- (NSInteger)fetchMobileSynchronously:(NSUInteger)arg1;
- (NSInteger)fetchNumMessages:(NSUInteger)arg1 preservingUID:(id)arg2 fetchType:(NSInteger)arg3 synchronize:(BOOL)arg4 compact:(BOOL)arg5;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (BOOL)hasMoreMessages:(NSUInteger)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (NSUInteger)indexOfMessage:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (BOOL)isDrafts;
- (BOOL)isOpened;
- (BOOL)isReadOnly;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageWithOptions:(NSUInteger)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)mailboxUid;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1 options:(NSUInteger)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)messageWithValue:(id)arg1 forHeader:(id)arg2 options:(NSUInteger)arg3;
- (void)messagesWereAdded:(id)arg1 forIncrementalLoading:(BOOL)arg2;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)purgeMessagesBeyond:(NSUInteger)arg1;
- (void)rebuildTableOfContentsAsynchronously;
- (NSUInteger)serverMessageCount;
- (NSUInteger)serverUnreadCount;
- (NSUInteger)serverUnreadOnlyOnServerCount;
- (void)setData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (BOOL)shouldDeleteInPlace;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (id)status;
- (id)storePathRelativeToAccount;
- (void)structureDidChange;
- (NSUInteger)totalCount;
- (void)undeleteMessages:(id)arg1;
- (NSUInteger)unreadCount;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2;
- (void)updateUserInfoToLatestValues;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;

@end
