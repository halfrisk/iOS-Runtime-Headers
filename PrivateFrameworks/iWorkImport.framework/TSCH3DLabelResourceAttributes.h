/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCH3DLabelBitmapContextInfo, TSWPParagraphStyle;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {
    TSCH3DLabelBitmapContextInfo *mBitmapContextInfo;
    float mLabelWidth;
    TSWPParagraphStyle *mParagraphStyle;
    float mRenderSamples;
    NSString *mString;
}

@property(readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo;
@property(readonly) float labelWidth;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) float renderSamples;
@property(readonly) NSString * string;

+ (id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5;

- (id)bitmapContextInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5;
- (BOOL)isEqual:(id)arg1;
- (float)labelWidth;
- (id)paragraphStyle;
- (float)renderSamples;
- (id)string;

@end