/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface UIActivity : NSObject
{
    id _activityCompletionHandler;
}

+ (int)activityCategory;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
@property(copy, nonatomic) id activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;
- (void)activityDidFinish:(BOOL)arg1;
- (void)performActivity;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (struct CGSize)_thumbnailSize;
- (void)_setSubject:(id)arg1;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionHandler:(id)arg1;
- (id)_beforeActivity;
- (id)_activityImage;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;

@end

