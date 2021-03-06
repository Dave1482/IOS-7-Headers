/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface SUShadow : NSObject <NSCoding, NSCopying>
{
    UIColor *_color;
    struct CGSize _offset;
    float _opacity;
    float _radius;
}

@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)applyToLayer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

