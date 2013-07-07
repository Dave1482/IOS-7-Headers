/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSDictionary, NSFileWrapper, NSMutableArray, NSMutableData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSRTFWriter : NSObject
{
    NSMutableData *_output;
    NSAttributedString *_attrString;
    unsigned int _attrStringLength;
    NSFileWrapper *_document;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_colors;
    NSMutableArray *_listRanges;
    id _curFont;
    id _curForegroundColor;
    id _curBackgroundColor;
    id _curParagraphStyle;
    id _curKern;
    id _curBaselineOffset;
    id _curSuperscript;
    id _curUnderlineStyle;
    int _curTraits;
    unsigned long _curEncoding;
    struct {
        unsigned int _forceColorWrite:1;
        unsigned int _activeFontFeatures:1;
        unsigned int _preserveNaturalAlignment:1;
        unsigned int _reserved:29;
    } _rwFlags;
    float _rightMargin;
    NSDictionary *_docAttrs;
    void *_layoutSections;
}

+ (void)initialize;
+ (id)RTFDataForDate:(id)arg1;
+ (id)RTFDataForString:(id)arg1 range:(struct _NSRange)arg2 encoding:(unsigned long)arg3;
- (void)writeBody;
- (void)writeTextFlow:(unsigned int)arg1;
- (unsigned int)textFlowWithAttributes:(id)arg1 range:(struct _NSRange *)arg2;
- (void)writeDate:(id)arg1;
- (BOOL)writeLinkInfo:(id)arg1;
- (void)writeGlyphInfo:(id)arg1;
- (void)writeAttachment:(id)arg1 editableData:(id)arg2 editableTypeIdentifier:(id)arg3;
- (void)writeCharacterAttributes:(id)arg1 previousAttributes:(id)arg2;
- (void)restoreAttributes:(id)arg1;
- (void)writeShadow:(id)arg1;
- (void)writeExpansion:(id)arg1;
- (void)writeObliqueness:(id)arg1;
- (void)writeStrokeWidth:(id)arg1;
- (void)writeCharacterShape:(id)arg1;
- (void)writeLigature:(id)arg1;
- (void)writeBaselineOffset:(id)arg1;
- (void)writeSuperscript:(id)arg1;
- (void)writeStrikethroughStyle:(id)arg1;
- (void)writeUnderlineStyle:(id)arg1 allowStrikethrough:(BOOL)arg2;
- (void)writeKern:(id)arg1;
- (void)writeFont:(id)arg1 forceFontNumber:(BOOL)arg2;
- (id)_plainFontNameForFont:(id)arg1;
- (void)writeParagraphStyle:(id)arg1;
- (BOOL)writeCellTerminator:(id)arg1 atIndex:(unsigned int)arg2 nestingLevel:(unsigned int)arg3;
- (void)writeTableHeader:(id)arg1 atIndex:(unsigned int)arg2 nestingLevel:(unsigned int)arg3;
- (void)writeColor:(id)arg1 type:(unsigned int)arg2;
- (void)writeHeader;
- (void)writeInfo;
- (void)writeKeywordsDocumentAttribute;
- (void)writeDateDocumentAttribute:(id)arg1 withRTFKeyword:(const char *)arg2;
- (void)writeStringDocumentAttribute:(id)arg1 withRTFKeyword:(const char *)arg2;
- (void)_writeVersionsAndEncodings;
- (void)writeBackgroundColor;
- (void)writeDefaultTabInterval;
- (void)writeHyphenation;
- (void)writePaperSize;
- (void)writeListTable;
- (void)writeStyleSheetTable;
- (void)writeColorTable;
- (void)writeFontTable;
- (void)collectResources;
- (id)RTF;
- (void)writeRTF;
- (id)documentAttributes;
- (id)documentAttribute:(id)arg1;
- (void)setDocumentAttributes:(id)arg1;
- (void)_setPreserveNaturalAlignment:(BOOL)arg1;
- (void)_setRTFDFileWrapper:(id)arg1;
- (id)_RTFDFileWrapper;
- (id)RTFDFileWrapper;
- (id)RTFD;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (int)_mostCompatibleCharset:(id)arg1;
- (void)writeEscapedUTF8String:(id)arg1;
- (void)_writeCharacters:(id)arg1 range:(struct _NSRange)arg2;

@end
