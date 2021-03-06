/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AXUIMessageSenderDelegate.h"

@class AXUIClientConnection, AXUIMessageSender, NSObject<OS_xpc_object>, NSString;

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate>
{
    id <AXUIClientDelegate> _delegate;
    NSString *_serviceBundleName;
    AXUIMessageSender *_messageSender;
    AXUIClientConnection *_clientConnection;
    NSObject<OS_xpc_object> *_clientIdentifier;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) AXUIClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) AXUIMessageSender *messageSender; // @synthesize messageSender=_messageSender;
@property(copy, nonatomic) NSString *serviceBundleName; // @synthesize serviceBundleName=_serviceBundleName;
@property(nonatomic) id <AXUIClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void *)arg3;
- (void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void *)arg2;
- (void *)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned int *)arg3;
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(id)arg3;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 error:(id *)arg3;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(id)arg5;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 targetAccessQueue:(id)arg3 completion:(id)arg4;
- (void)dealloc;
- (id)initWithServiceBundleName:(id)arg1;

@end

