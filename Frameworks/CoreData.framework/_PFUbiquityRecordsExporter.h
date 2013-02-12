/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDate, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSTimer, PFUbiquityLocation;

@interface _PFUbiquityRecordsExporter : NSObject {
    NSDate *_lastTransactionDate;
    NSString *_localPeerID;
    NSPersistentStoreCoordinator *_monitoredPersistentStoreCoordinator;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    NSTimer *_tempMoveTimer;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(retain) NSDate * lastTransactionDate;
@property(readonly) NSString * localPeerID;
@property(retain) NSTimer * tempMoveTimer;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

+ (void)initialize;

- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (id)createSetOfStoresToExportForNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)lastTransactionDate;
- (id)localPeerID;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)onlyExportFromPersistentStoreCoordinator:(id)arg1;
- (void)scheduleTempMoveTimerWithPeerURL:(id)arg1;
- (void)setLastTransactionDate:(id)arg1;
- (void)setTempMoveTimer:(id)arg1;
- (BOOL)shouldRespondToSaveNotification:(id)arg1;
- (id)tempMoveTimer;
- (void)timerMoveLogsFromTempDirectory:(id)arg1;
- (id)ubiquityRootLocation;

@end