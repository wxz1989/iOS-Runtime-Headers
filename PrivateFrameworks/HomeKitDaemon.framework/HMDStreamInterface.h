/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamInterface : NSObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraNetworkConfig * _localNetworkConfig;
    int  _localRTPSocket;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    <HMDCameraRemoteStreamProtocol> * _sessionHandler;
    HMDCameraSessionID * _sessionID;
    unsigned int  _streamInterfaceState;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (nonatomic) int localRTPSocket;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) <HMDCameraRemoteStreamProtocol> *sessionHandler;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic) unsigned int streamInterfaceState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegateQueue;
- (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(int (*)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5;
- (BOOL)loadMiscFields:(id)arg1;
- (id)localNetworkConfig;
- (int)localRTPSocket;
- (id)logIdentifier;
- (int)openSocket;
- (id)propertyQueue;
- (id)sessionHandler;
- (id)sessionID;
- (void)setLocalRTPSocket:(int)arg1;
- (void)setStreamInterfaceState:(unsigned int)arg1;
- (unsigned int)streamInterfaceState;
- (id)workQueue;

@end
