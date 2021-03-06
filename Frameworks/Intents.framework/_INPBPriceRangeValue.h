/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPriceRangeValue : PBCodable <NSCopying> {
    NSString * _currencyCode;
    _INPBDecimalNumberValue * _maximumPrice;
    _INPBDecimalNumberValue * _minimumPrice;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, readonly) BOOL hasCurrencyCode;
@property (nonatomic, readonly) BOOL hasMaximumPrice;
@property (nonatomic, readonly) BOOL hasMinimumPrice;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic, retain) _INPBDecimalNumberValue *maximumPrice;
@property (nonatomic, retain) _INPBDecimalNumberValue *minimumPrice;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCurrencyCode;
- (BOOL)hasMaximumPrice;
- (BOOL)hasMinimumPrice;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)maximumPrice;
- (void)mergeFrom:(id)arg1;
- (id)minimumPrice;
- (BOOL)readFrom:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMaximumPrice:(id)arg1;
- (void)setMinimumPrice:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
