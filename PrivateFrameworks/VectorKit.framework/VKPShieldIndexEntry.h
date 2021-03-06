/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexEntry : PBCodable
{
    CDStruct_56d48c16 _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setShieldTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)shieldTypesAtIndex:(unsigned int)arg1;
- (void)addShieldTypes:(int)arg1;
- (void)clearShieldTypes;
@property(readonly, nonatomic) int *shieldTypes;
@property(readonly, nonatomic) unsigned int shieldTypesCount;
@property(readonly, nonatomic) BOOL hasArtworkIdentifier;
- (void)dealloc;

@end

