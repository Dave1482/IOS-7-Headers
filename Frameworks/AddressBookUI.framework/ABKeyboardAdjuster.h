/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject
{
    NSMutableSet *_adjustmentRecords;
    BOOL _active;
}

+ (id)sharedAdjuster;
@property(nonatomic) BOOL active; // @synthesize active=_active;
- (void)resetAdjustment;
- (void)dateFieldDateDidEndEditingNotification:(id)arg1;
- (void)dateFieldDateDidBeginEditingNotification:(id)arg1;
- (void)textViewTextDidEndEditingNotification:(id)arg1;
- (void)textViewTextDidBeginEditingNotification:(id)arg1;
- (void)textFieldTextDidEndEditingNotification:(id)arg1;
- (void)textFieldTextDidBeginEditingNotification:(id)arg1;
- (BOOL)shouldForceAutomaticKeyboardForView:(id)arg1;
- (BOOL)containsScrollView:(id)arg1;
- (void)removeScrollView:(id)arg1;
- (void)addScrollView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets)arg1 force:(BOOL)arg2;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)cancelDelayedAdjustmentsForView:(id)arg1;
- (id)recordForScrollView:(id)arg1;

@end
