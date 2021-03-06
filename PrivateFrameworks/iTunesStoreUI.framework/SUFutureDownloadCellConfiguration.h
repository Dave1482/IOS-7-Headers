/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUMediaItemCellConfiguration.h>

@interface SUFutureDownloadCellConfiguration : SUMediaItemCellConfiguration
{
    int _style;
}

+ (id)_copyDefaultContextForTable;
+ (id)_copyDefaultContextForGrid;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;
- (void)_reloadStringsFromItem;
- (void)_reloadStringsFromDownload;
- (void)_reloadLayoutInformationForTable;
- (void)_reloadLayoutInformationForGrid;
- (void)_reloadImagesForPreorder;
- (void)_reloadImagesForDownload;
- (int)mediaIconType;
- (BOOL)showContentRating;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)init;

@end

