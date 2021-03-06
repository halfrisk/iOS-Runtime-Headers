/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressConcatenator : NSObject {
    NSString * _andNMoreFormat;
    NSString * _andNMoreNoEllipsisFormat;
    NSString * _nAddressesFormat;
    NSString * _oneAddressFormat;
    NSString * _truncatedAddressFormat;
}

@property (nonatomic, retain) NSString *andNMoreFormat;
@property (nonatomic, retain) NSString *andNMoreNoEllipsisFormat;
@property (nonatomic, retain) NSString *nAddressesFormat;
@property (nonatomic, retain) NSString *oneAddressFormat;
@property (nonatomic, retain) NSString *truncatedAddressFormat;

+ (id)defaultRecipientListConcatenator;

- (id)andNMoreFormat;
- (id)andNMoreNoEllipsisFormat;
- (id)commaSeparatedAddressListWithAddressCount:(unsigned int)arg1 prefixForAddressAtIndex:(id /* block */)arg2 stringForAddressAtIndex:(id /* block */)arg3 lengthValidationBlock:(id /* block */)arg4;
- (void)dealloc;
- (void)getCommaSeparatedAddressList:(out id*)arg1 andListSuffix:(out id*)arg2 withAddressCount:(unsigned int)arg3 prefixForAddressAtIndex:(id /* block */)arg4 stringForAddressAtIndex:(id /* block */)arg5 lengthValidationBlock:(id /* block */)arg6;
- (id)nAddressesFormat;
- (id)oneAddressFormat;
- (void)setAndNMoreFormat:(id)arg1;
- (void)setAndNMoreNoEllipsisFormat:(id)arg1;
- (void)setNAddressesFormat:(id)arg1;
- (void)setOneAddressFormat:(id)arg1;
- (void)setTruncatedAddressFormat:(id)arg1;
- (id)truncatedAddressFormat;

@end
