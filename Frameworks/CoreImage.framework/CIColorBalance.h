/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter
{
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *inputDamping;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputDamping; // @synthesize inputDamping;
@property(retain, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

