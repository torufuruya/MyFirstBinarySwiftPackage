#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VJPKIKotlinByteArray, VJPKIBERTLVNodeConfirmationAPCityCode, VJPKIBERTLVNodeConfirmationAPEncryptNumberData, VJPKIBERTLVNodeConfirmationAPInfo, VJPKIBERTLVNodeConfirmationAPInfoID, VJPKIBERTLVNodeConfirmationDateOfBirth, VJPKIBERTLVNodeConfirmationDateOfBirthAuthenticationPublicKey, VJPKIBERTLVNodeConfirmationDateOfBirthContentStructure, VJPKIBERTLVNodeConfirmationDateOfBirthHashASignature, VJPKIBERTLVNodeConfirmationMyNumberAuthenticationPublicKey, VJPKIBERTLVNodeConfirmationMyNumberContentStructure, VJPKIBERTLVNodeConfirmationMyNumberHashESignature, VJPKIBERTLVNodeConfirmationMyNumberImage, VJPKIBERTLVNodeConfirmationPersonalInfoAddressImage, VJPKIBERTLVNodeConfirmationPersonalInfoAuthenticationPublicKey, VJPKIBERTLVNodeConfirmationPersonalInfoCommonNameImage, VJPKIBERTLVNodeConfirmationPersonalInfoContentStructure, VJPKIBERTLVNodeConfirmationPersonalInfoDateOfBirth, VJPKIBERTLVNodeConfirmationPersonalInfoExpirationDate, VJPKIBERTLVNodeConfirmationPersonalInfoFaceImage, VJPKIBERTLVNodeConfirmationPersonalInfoGender, VJPKIBERTLVNodeConfirmationPersonalInfoHashBCDSignature, VJPKIBERTLVNodeConfirmationPersonalInfoOffset, VJPKIBERTLVNodeConfirmationPersonalInfoSecurityCodeImage, VJPKIBERTLVNodeInputSupportAPInfo, VJPKIBERTLVNodeInputSupportAPInfoID, VJPKIBERTLVNodeInputSupportAddress, VJPKIBERTLVNodeInputSupportAuthenticationCertificate, VJPKIBERTLVNodeInputSupportAuthenticationPublicKey, VJPKIBERTLVNodeInputSupportCommonName, VJPKIBERTLVNodeInputSupportDateOfBirth, VJPKIBERTLVNodeInputSupportGender, VJPKIBERTLVNodeInputSupportHashASignature, VJPKIBERTLVNodeInputSupportHashBSignature, VJPKIBERTLVNodeInputSupportHashCSignature, VJPKIBERTLVNodeInputSupportIDAndVerificationPublicKey, VJPKIBERTLVNodeInputSupportMyNumber, VJPKIBERTLVNodeInputSupportMyNumberAndPersonalInfoSignature, VJPKIBERTLVNodeInputSupportMyNumberHash, VJPKIBERTLVNodeInputSupportPersonalInfo, VJPKIBERTLVNodeInputSupportPersonalInfoHash, VJPKIBERTLVNodeInputSupportPersonalInfoOffset, VJPKIBERTLVNodeInputSupportVerificationCertificate, VJPKIBERTLVNodePublicKeyExponent, VJPKIBERTLVNodePublicKeyModulus, VJPKIOID, VJPKIKotlinIntArray, VJPKITLV, VJPKITLVIterator, VJPKITLVNodeBitString, VJPKITLVNodeBoolean, VJPKITLVNodeIA5String, VJPKITLVNodeInteger, VJPKITLVNodeNull, VJPKITLVNodeObjectIdentifier, VJPKITLVNodeOctetString, VJPKITLVNodePrintableString, VJPKIKotlinArray<T>, VJPKIKotlinx_datetimeLocalDateTime, VJPKITLVNodeUTCTime, VJPKITLVNodeUTF8String, VJPKITLVNodeSequence, VJPKIAlgorithmIdentifier, VJPKIDigestInfo, VJPKIOneAsymmetricKey, VJPKIRSAPrivateKey, VJPKIRSAPublicKey, VJPKIAttributeTypeAndValue, VJPKITBSCertificate, VJPKICertificate, VJPKITLVNodeExplicit, VJPKIExtension, VJPKIName, VJPKIGeneralNamesDirectoryName, VJPKITLVNodeImplicit, VJPKIGeneralNamesOtherName, VJPKIGeneralNamesUniformResourceIdentifier, VJPKIPolicyQualifierInfo, VJPKISubjectPublicKeyInfo, VJPKIReaderSessionEvent, VJPKIHashAlgorithm, VJPKIVerifiableDateOfBirthContent<Data>, VJPKIVerifiableMyNumberContent<Data>, VJPKIVerifiablePersonalInfoContent<Data>, VJPKIVerifiableInputSupportData<Data>, VJPKIPreference, VJPKIRemainingRetries, VJPKISigningResult<Data>, VJPKIKotlinThrowable, VJPKIKotlinException, VJPKIKotlinRuntimeException, VJPKIKotlinIllegalStateException, VJPKICommandResponseStatus, VJPKICommandResponseStatusFailure, VJPKICommandResponseStatusArgumentError, VJPKICommandResponseStatusArgumentErrorAccessTargetFileNotExit, VJPKICommandResponseStatusArgumentErrorContradictingLcToP1P2, VJPKICommandResponseStatusArgumentErrorContradictingLcToTLVStructure, VJPKICommandResponseStatusArgumentErrorFunctionNotProvided, VJPKICommandResponseStatusArgumentErrorIncorrectP1P2, VJPKICommandResponseStatusArgumentErrorIncorrectValueInDataField, VJPKICommandResponseStatusArgumentErrorInsufficientMemorySpaceInFile, VJPKICommandResponseStatusArgumentErrorReferencedKeyNotSetCorrectly, VJPKICommandResponseStatusClassNotProvided, VJPKICommandResponseStatusCommandExecutionError, VJPKICommandResponseStatusCommandExecutionErrorCommandUsageConditionNotSatisfied, VJPKICommandResponseStatusCommandExecutionErrorContradictingCommandToFileStructure, VJPKICommandResponseStatusCommandExecutionErrorCurrentEFNotExist, VJPKICommandResponseStatusCommandExecutionErrorHashNotMatched, VJPKICommandResponseStatusCommandExecutionErrorPaddingError, VJPKICommandResponseStatusCommandExecutionErrorReferencedIEFClosed, VJPKICommandResponseStatusCommandExecutionErrorSecurityStatusNotSatisfied, VJPKICommandResponseStatusCommandExecutionErrorTemporalVariableError, VJPKICommandResponseStatusCommunicationError, VJPKICommandResponseStatusCommunicationErrorLogicalChannelNotSupported, VJPKICommandResponseStatusCommunicationErrorSecureMessagingNotSupported, VJPKICommandResponseStatusIncorrectArgumentLcLe, VJPKICommandResponseStatusIncorrectPassword, VJPKICommandResponseStatusIncorrectPasswordRetryLimitedCompanion, VJPKICommandResponseStatusIncorrectPasswordRetryLimited, VJPKICommandResponseStatusIncorrectPasswordRetryUnlimited, VJPKICommandResponseStatusInsNotProvided, VJPKICommandResponseStatusMemoryFailure, VJPKICommandResponseStatusMoreDataAvailable, VJPKICommandResponseStatusSecurityEnvironmentError, VJPKICommandResponseStatusSecurityEnvironmentErrorEnvironmentError, VJPKICommandResponseStatusSecurityEnvironmentErrorIEFError, VJPKICommandResponseStatusSuccess, VJPKICommandResponseStatusUnknown, NSObject, VJPKIKotlinEnumCompanion, VJPKIKotlinEnum<E>, VJPKIReaderSessionExceptionCode, NSError, VJPKIReaderSessionException, VJPKIReaderSession, VJPKIKotlinIllegalArgumentException, VJPKIRemainingRetriesLimited, VJPKIRemainingRetriesUnlimited, VJPKIPassword, NSData, VJPKIIdenticalDataTranslator, VJPKIPlatformDataTranslator, VJPKIPlatformLocalDateTimeTranslator, NSDate, VJPKIPlatformLongTranslator, NSNumber, VJPKIKotlinByteIterator, VJPKIKotlinIntIterator, VJPKIKotlinx_datetimeLocalDate, VJPKIKotlinx_datetimeLocalTime, VJPKIKotlinx_datetimeMonth, VJPKIKotlinx_datetimeLocalDateTimeCompanion, VJPKIKotlinx_datetimeDayOfWeek, VJPKIKotlinx_datetimeLocalDateCompanion, VJPKIKotlinx_datetimeLocalTimeCompanion, VJPKIKotlinx_datetimePadding, VJPKIKotlinx_datetimeDayOfWeekNames, VJPKIKotlinx_datetimeMonthNames, VJPKIKotlinx_datetimeDayOfWeekNamesCompanion, VJPKIKotlinx_datetimeMonthNamesCompanion, VJPKIKotlinx_serialization_coreSerializersModule, VJPKIKotlinx_serialization_coreSerialKind, VJPKIKotlinNothing;

@protocol VJPKIBERTLVNode, VJPKIBERTLVNodeConfirmation, VJPKIBERTLVNodeInputSupport, VJPKIKotlinIterator, VJPKITLVNode, VJPKIReaderSessionInterface, VJPKIBidirectionalTranslatorInterface, VJPKICommandResponseStatusInterface, VJPKIPlatformReaderSessionInterface, VJPKIKotlinComparable, VJPKIConfirmationAPInterface, VJPKILowLevelConfirmationAPInterface, VJPKIDataTranslatorInterface, VJPKIInputSupportAPInterface, VJPKILowLevelInputSupportAPInterface, VJPKIJPKIAPInterface, VJPKILowLevelJPKIAPInterface, VJPKITranslatorInterface, NFCISO7816Tag, VJPKIKotlinKDeclarationContainer, VJPKIKotlinKAnnotatedElement, VJPKIKotlinKClassifier, VJPKIKotlinx_datetimeDateTimeFormat, VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDateTime, VJPKIKotlinx_serialization_coreKSerializer, VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDate, VJPKIKotlinx_datetimeDateTimeFormatBuilderWithTime, VJPKIKotlinAppendable, VJPKIKotlinx_datetimeDateTimeFormatBuilder, VJPKIKotlinx_serialization_coreEncoder, VJPKIKotlinx_serialization_coreSerialDescriptor, VJPKIKotlinx_serialization_coreSerializationStrategy, VJPKIKotlinx_serialization_coreDecoder, VJPKIKotlinx_serialization_coreDeserializationStrategy, VJPKIKotlinx_serialization_coreCompositeEncoder, VJPKIKotlinAnnotation, VJPKIKotlinx_serialization_coreCompositeDecoder, VJPKIKotlinx_serialization_coreSerializersModuleCollector, VJPKIKotlinKClass;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface VJPKIBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface VJPKIBase (VJPKIBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface VJPKIMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface VJPKIMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorVJPKIKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface VJPKINumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface VJPKIByte : VJPKINumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface VJPKIUByte : VJPKINumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface VJPKIShort : VJPKINumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface VJPKIUShort : VJPKINumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface VJPKIInt : VJPKINumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface VJPKIUInt : VJPKINumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface VJPKILong : VJPKINumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface VJPKIULong : VJPKINumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface VJPKIFloat : VJPKINumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface VJPKIDouble : VJPKINumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface VJPKIBoolean : VJPKINumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("BERTLVNode")))
@protocol VJPKIBERTLVNode
@required
@property (readonly) VJPKIKotlinByteArray *encoded __attribute__((swift_name("encoded")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *length __attribute__((swift_name("length")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("BERTLVNodeConfirmation")))
@protocol VJPKIBERTLVNodeConfirmation <VJPKIBERTLVNode>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPBasicInfo")))
@interface VJPKIBERTLVNodeConfirmationAPBasicInfo : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPCardInfoVersion")))
@interface VJPKIBERTLVNodeConfirmationAPCardInfoVersion : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPCityCode")))
@interface VJPKIBERTLVNodeConfirmationAPCityCode : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithCityCode:(VJPKIKotlinByteArray *)cityCode __attribute__((swift_name("init(cityCode:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationAPCityCode *)doCopyCityCode:(VJPKIKotlinByteArray *)cityCode __attribute__((swift_name("doCopy(cityCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *cityCode __attribute__((swift_name("cityCode")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPEncryptNumberData")))
@interface VJPKIBERTLVNodeConfirmationAPEncryptNumberData : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithEncryptNumberData:(VJPKIKotlinByteArray *)encryptNumberData __attribute__((swift_name("init(encryptNumberData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationAPEncryptNumberData *)doCopyEncryptNumberData:(VJPKIKotlinByteArray *)encryptNumberData __attribute__((swift_name("doCopy(encryptNumberData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *encryptNumberData __attribute__((swift_name("encryptNumberData")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPInfo")))
@interface VJPKIBERTLVNodeConfirmationAPInfo : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithBasicInfo:(VJPKIKotlinByteArray *)basicInfo id:(VJPKIKotlinByteArray *)id cardInfoVersion:(VJPKIKotlinByteArray *)cardInfoVersion cityCode:(VJPKIKotlinByteArray *)cityCode encryptNumberData:(VJPKIKotlinByteArray *)encryptNumberData __attribute__((swift_name("init(basicInfo:id:cardInfoVersion:cityCode:encryptNumberData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationAPInfo *)doCopyBasicInfo:(VJPKIKotlinByteArray *)basicInfo id:(VJPKIKotlinByteArray *)id cardInfoVersion:(VJPKIKotlinByteArray *)cardInfoVersion cityCode:(VJPKIKotlinByteArray *)cityCode encryptNumberData:(VJPKIKotlinByteArray *)encryptNumberData __attribute__((swift_name("doCopy(basicInfo:id:cardInfoVersion:cityCode:encryptNumberData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *basicInfo __attribute__((swift_name("basicInfo")));
@property (readonly) VJPKIKotlinByteArray *cardInfoVersion __attribute__((swift_name("cardInfoVersion")));
@property (readonly) VJPKIKotlinByteArray *cityCode __attribute__((swift_name("cityCode")));
@property (readonly) VJPKIKotlinByteArray *encryptNumberData __attribute__((swift_name("encryptNumberData")));
@property (readonly) VJPKIKotlinByteArray *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationAPInfoID")))
@interface VJPKIBERTLVNodeConfirmationAPInfoID : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithVerifierID:(VJPKIKotlinByteArray *)verifierID __attribute__((swift_name("init(verifierID:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationAPInfoID *)doCopyVerifierID:(VJPKIKotlinByteArray *)verifierID __attribute__((swift_name("doCopy(verifierID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@property (readonly) VJPKIKotlinByteArray *verifierID __attribute__((swift_name("verifierID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationDateOfBirth")))
@interface VJPKIBERTLVNodeConfirmationDateOfBirth : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("init(dateOfBirth:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationDateOfBirth *)doCopyDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("doCopy(dateOfBirth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationDateOfBirthAuthenticationPublicKey")))
@interface VJPKIBERTLVNodeConfirmationDateOfBirthAuthenticationPublicKey : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("init(publicKey:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationDateOfBirthAuthenticationPublicKey *)doCopyPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("doCopy(publicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationDateOfBirthContentStructure")))
@interface VJPKIBERTLVNodeConfirmationDateOfBirthContentStructure : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithDateOfBirth:(VJPKIKotlinByteArray *)dateOfBirth authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey signature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(dateOfBirth:authenticationPublicKey:signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationDateOfBirthContentStructure *)doCopyDateOfBirth:(VJPKIKotlinByteArray *)dateOfBirth authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey signature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(dateOfBirth:authenticationPublicKey:signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *authenticationPublicKey __attribute__((swift_name("authenticationPublicKey")));
@property (readonly) VJPKIKotlinByteArray *dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationDateOfBirthHashASignature")))
@interface VJPKIBERTLVNodeConfirmationDateOfBirthHashASignature : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationDateOfBirthHashASignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationMyNumberAuthenticationPublicKey")))
@interface VJPKIBERTLVNodeConfirmationMyNumberAuthenticationPublicKey : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("init(publicKey:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationMyNumberAuthenticationPublicKey *)doCopyPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("doCopy(publicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationMyNumberContentStructure")))
@interface VJPKIBERTLVNodeConfirmationMyNumberContentStructure : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithMyNumberImage:(VJPKIKotlinByteArray *)myNumberImage authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey signature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(myNumberImage:authenticationPublicKey:signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationMyNumberContentStructure *)doCopyMyNumberImage:(VJPKIKotlinByteArray *)myNumberImage authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey signature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(myNumberImage:authenticationPublicKey:signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *authenticationPublicKey __attribute__((swift_name("authenticationPublicKey")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *myNumberImage __attribute__((swift_name("myNumberImage")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationMyNumberHashESignature")))
@interface VJPKIBERTLVNodeConfirmationMyNumberHashESignature : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationMyNumberHashESignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationMyNumberImage")))
@interface VJPKIBERTLVNodeConfirmationMyNumberImage : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithMyNumberImage:(VJPKIKotlinByteArray *)myNumberImage __attribute__((swift_name("init(myNumberImage:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationMyNumberImage *)doCopyMyNumberImage:(VJPKIKotlinByteArray *)myNumberImage __attribute__((swift_name("doCopy(myNumberImage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *myNumberImage __attribute__((swift_name("myNumberImage")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoAddressImage")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoAddressImage : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithAddressImageData:(VJPKIKotlinByteArray *)addressImageData __attribute__((swift_name("init(addressImageData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoAddressImage *)doCopyAddressImageData:(VJPKIKotlinByteArray *)addressImageData __attribute__((swift_name("doCopy(addressImageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *addressImageData __attribute__((swift_name("addressImageData")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoAuthenticationPublicKey")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoAuthenticationPublicKey : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("init(publicKey:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoAuthenticationPublicKey *)doCopyPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("doCopy(publicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoCommonNameImage")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoCommonNameImage : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithNameImageData:(VJPKIKotlinByteArray *)nameImageData __attribute__((swift_name("init(nameImageData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoCommonNameImage *)doCopyNameImageData:(VJPKIKotlinByteArray *)nameImageData __attribute__((swift_name("doCopy(nameImageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *nameImageData __attribute__((swift_name("nameImageData")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoContentStructure")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoContentStructure : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithOffset:(VJPKIKotlinByteArray *)offset dateOfBirth:(VJPKIKotlinByteArray *)dateOfBirth gender:(VJPKIKotlinByteArray *)gender authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey nameImage:(VJPKIKotlinByteArray *)nameImage addressImage:(VJPKIKotlinByteArray *)addressImage faceImage:(VJPKIKotlinByteArray *)faceImage signature:(VJPKIKotlinByteArray *)signature expirationDate:(VJPKIKotlinByteArray *)expirationDate securityCodeImage:(VJPKIKotlinByteArray *)securityCodeImage __attribute__((swift_name("init(offset:dateOfBirth:gender:authenticationPublicKey:nameImage:addressImage:faceImage:signature:expirationDate:securityCodeImage:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoContentStructure *)doCopyOffset:(VJPKIKotlinByteArray *)offset dateOfBirth:(VJPKIKotlinByteArray *)dateOfBirth gender:(VJPKIKotlinByteArray *)gender authenticationPublicKey:(VJPKIKotlinByteArray *)authenticationPublicKey nameImage:(VJPKIKotlinByteArray *)nameImage addressImage:(VJPKIKotlinByteArray *)addressImage faceImage:(VJPKIKotlinByteArray *)faceImage signature:(VJPKIKotlinByteArray *)signature expirationDate:(VJPKIKotlinByteArray *)expirationDate securityCodeImage:(VJPKIKotlinByteArray *)securityCodeImage __attribute__((swift_name("doCopy(offset:dateOfBirth:gender:authenticationPublicKey:nameImage:addressImage:faceImage:signature:expirationDate:securityCodeImage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *addressImage __attribute__((swift_name("addressImage")));
@property (readonly) VJPKIKotlinByteArray *authenticationPublicKey __attribute__((swift_name("authenticationPublicKey")));
@property (readonly) VJPKIKotlinByteArray *dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) VJPKIKotlinByteArray *expirationDate __attribute__((swift_name("expirationDate")));
@property (readonly) VJPKIKotlinByteArray *faceImage __attribute__((swift_name("faceImage")));
@property (readonly) VJPKIKotlinByteArray *gender __attribute__((swift_name("gender")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *nameImage __attribute__((swift_name("nameImage")));
@property (readonly) VJPKIKotlinByteArray *offset __attribute__((swift_name("offset")));
@property (readonly) VJPKIKotlinByteArray *securityCodeImage __attribute__((swift_name("securityCodeImage")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoDateOfBirth")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoDateOfBirth : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("init(dateOfBirth:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoDateOfBirth *)doCopyDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("doCopy(dateOfBirth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoExpirationDate")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoExpirationDate : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithExpirationDate:(NSString *)expirationDate __attribute__((swift_name("init(expirationDate:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoExpirationDate *)doCopyExpirationDate:(NSString *)expirationDate __attribute__((swift_name("doCopy(expirationDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *expirationDate __attribute__((swift_name("expirationDate")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoFaceImage")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoFaceImage : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithFaceImageData:(VJPKIKotlinByteArray *)faceImageData __attribute__((swift_name("init(faceImageData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoFaceImage *)doCopyFaceImageData:(VJPKIKotlinByteArray *)faceImageData __attribute__((swift_name("doCopy(faceImageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *faceImageData __attribute__((swift_name("faceImageData")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoGender")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoGender : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithGender:(int32_t)gender __attribute__((swift_name("init(gender:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoGender *)doCopyGender:(int32_t)gender __attribute__((swift_name("doCopy(gender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t gender __attribute__((swift_name("gender")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoHashBCDSignature")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoHashBCDSignature : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoHashBCDSignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoOffset")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoOffset : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithDateOfBirthOffset:(VJPKIKotlinByteArray *)dateOfBirthOffset genderOffset:(VJPKIKotlinByteArray *)genderOffset authenticationPublicKeyOffset:(VJPKIKotlinByteArray *)authenticationPublicKeyOffset nameImageOffset:(VJPKIKotlinByteArray *)nameImageOffset addressImageOffset:(VJPKIKotlinByteArray *)addressImageOffset faceImageOffset:(VJPKIKotlinByteArray *)faceImageOffset signatureOffset:(VJPKIKotlinByteArray *)signatureOffset expirationDateOffset:(VJPKIKotlinByteArray *)expirationDateOffset securityCodeImageOffset:(VJPKIKotlinByteArray *)securityCodeImageOffset __attribute__((swift_name("init(dateOfBirthOffset:genderOffset:authenticationPublicKeyOffset:nameImageOffset:addressImageOffset:faceImageOffset:signatureOffset:expirationDateOffset:securityCodeImageOffset:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoOffset *)doCopyDateOfBirthOffset:(VJPKIKotlinByteArray *)dateOfBirthOffset genderOffset:(VJPKIKotlinByteArray *)genderOffset authenticationPublicKeyOffset:(VJPKIKotlinByteArray *)authenticationPublicKeyOffset nameImageOffset:(VJPKIKotlinByteArray *)nameImageOffset addressImageOffset:(VJPKIKotlinByteArray *)addressImageOffset faceImageOffset:(VJPKIKotlinByteArray *)faceImageOffset signatureOffset:(VJPKIKotlinByteArray *)signatureOffset expirationDateOffset:(VJPKIKotlinByteArray *)expirationDateOffset securityCodeImageOffset:(VJPKIKotlinByteArray *)securityCodeImageOffset __attribute__((swift_name("doCopy(dateOfBirthOffset:genderOffset:authenticationPublicKeyOffset:nameImageOffset:addressImageOffset:faceImageOffset:signatureOffset:expirationDateOffset:securityCodeImageOffset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *addressImageOffset __attribute__((swift_name("addressImageOffset")));
@property (readonly) VJPKIKotlinByteArray *authenticationPublicKeyOffset __attribute__((swift_name("authenticationPublicKeyOffset")));
@property (readonly) VJPKIKotlinByteArray *dateOfBirthOffset __attribute__((swift_name("dateOfBirthOffset")));
@property (readonly) VJPKIKotlinByteArray *expirationDateOffset __attribute__((swift_name("expirationDateOffset")));
@property (readonly) VJPKIKotlinByteArray *faceImageOffset __attribute__((swift_name("faceImageOffset")));
@property (readonly) VJPKIKotlinByteArray *genderOffset __attribute__((swift_name("genderOffset")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *nameImageOffset __attribute__((swift_name("nameImageOffset")));
@property (readonly) VJPKIKotlinByteArray *securityCodeImageOffset __attribute__((swift_name("securityCodeImageOffset")));
@property (readonly) VJPKIKotlinByteArray *signatureOffset __attribute__((swift_name("signatureOffset")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeConfirmationPersonalInfoSecurityCodeImage")))
@interface VJPKIBERTLVNodeConfirmationPersonalInfoSecurityCodeImage : VJPKIBase <VJPKIBERTLVNodeConfirmation>
- (instancetype)initWithSecurityCodeImageData:(VJPKIKotlinByteArray *)securityCodeImageData __attribute__((swift_name("init(securityCodeImageData:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeConfirmationPersonalInfoSecurityCodeImage *)doCopySecurityCodeImageData:(VJPKIKotlinByteArray *)securityCodeImageData __attribute__((swift_name("doCopy(securityCodeImageData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *securityCodeImageData __attribute__((swift_name("securityCodeImageData")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("BERTLVNodeInputSupport")))
@protocol VJPKIBERTLVNodeInputSupport <VJPKIBERTLVNode>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAPBasicInfo")))
@interface VJPKIBERTLVNodeInputSupportAPBasicInfo : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAPInfo")))
@interface VJPKIBERTLVNodeInputSupportAPInfo : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithBasicInfoAndID:(VJPKIKotlinByteArray *)basicInfoAndID __attribute__((swift_name("init(basicInfoAndID:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportAPInfo *)doCopyBasicInfoAndID:(VJPKIKotlinByteArray *)basicInfoAndID __attribute__((swift_name("doCopy(basicInfoAndID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *basicInfoAndID __attribute__((swift_name("basicInfoAndID")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAPInfoID")))
@interface VJPKIBERTLVNodeInputSupportAPInfoID : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithVerifierID:(VJPKIKotlinByteArray *)verifierID __attribute__((swift_name("init(verifierID:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportAPInfoID *)doCopyVerifierID:(VJPKIKotlinByteArray *)verifierID __attribute__((swift_name("doCopy(verifierID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@property (readonly) VJPKIKotlinByteArray *verifierID __attribute__((swift_name("verifierID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAddress")))
@interface VJPKIBERTLVNodeInputSupportAddress : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithAddress:(NSString *)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportAddress *)doCopyAddress:(NSString *)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAuthenticationCertificate")))
@interface VJPKIBERTLVNodeInputSupportAuthenticationCertificate : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithPublicKey:(VJPKIKotlinByteArray *)publicKey hashCSignature:(VJPKIKotlinByteArray *)hashCSignature __attribute__((swift_name("init(publicKey:hashCSignature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportAuthenticationCertificate *)doCopyPublicKey:(VJPKIKotlinByteArray *)publicKey hashCSignature:(VJPKIKotlinByteArray *)hashCSignature __attribute__((swift_name("doCopy(publicKey:hashCSignature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *hashCSignature __attribute__((swift_name("hashCSignature")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportAuthenticationPublicKey")))
@interface VJPKIBERTLVNodeInputSupportAuthenticationPublicKey : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("init(publicKey:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportAuthenticationPublicKey *)doCopyPublicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("doCopy(publicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportCommonName")))
@interface VJPKIBERTLVNodeInputSupportCommonName : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportCommonName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportDateOfBirth")))
@interface VJPKIBERTLVNodeInputSupportDateOfBirth : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("init(dateOfBirth:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportDateOfBirth *)doCopyDateOfBirth:(NSString *)dateOfBirth __attribute__((swift_name("doCopy(dateOfBirth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportGender")))
@interface VJPKIBERTLVNodeInputSupportGender : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithGender:(int32_t)gender __attribute__((swift_name("init(gender:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportGender *)doCopyGender:(int32_t)gender __attribute__((swift_name("doCopy(gender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t gender __attribute__((swift_name("gender")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportHashASignature")))
@interface VJPKIBERTLVNodeInputSupportHashASignature : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportHashASignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportHashBSignature")))
@interface VJPKIBERTLVNodeInputSupportHashBSignature : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportHashBSignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportHashCSignature")))
@interface VJPKIBERTLVNodeInputSupportHashCSignature : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportHashCSignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportIDAndVerificationPublicKey")))
@interface VJPKIBERTLVNodeInputSupportIDAndVerificationPublicKey : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithVerifierID:(VJPKIKotlinByteArray *)verifierID subjectID:(VJPKIKotlinByteArray *)subjectID publicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("init(verifierID:subjectID:publicKey:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportIDAndVerificationPublicKey *)doCopyVerifierID:(VJPKIKotlinByteArray *)verifierID subjectID:(VJPKIKotlinByteArray *)subjectID publicKey:(VJPKIKotlinByteArray *)publicKey __attribute__((swift_name("doCopy(verifierID:subjectID:publicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKey __attribute__((swift_name("publicKey")));
@property (readonly) VJPKIKotlinByteArray *subjectID __attribute__((swift_name("subjectID")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@property (readonly) VJPKIKotlinByteArray *verifierID __attribute__((swift_name("verifierID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportMyNumber")))
@interface VJPKIBERTLVNodeInputSupportMyNumber : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithMyNumber:(NSString *)myNumber __attribute__((swift_name("init(myNumber:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportMyNumber *)doCopyMyNumber:(NSString *)myNumber __attribute__((swift_name("doCopy(myNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) NSString *myNumber __attribute__((swift_name("myNumber")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportMyNumberAndPersonalInfoSignature")))
@interface VJPKIBERTLVNodeInputSupportMyNumberAndPersonalInfoSignature : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithSignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("init(signature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportMyNumberAndPersonalInfoSignature *)doCopySignature:(VJPKIKotlinByteArray *)signature __attribute__((swift_name("doCopy(signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *signature __attribute__((swift_name("signature")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportMyNumberHash")))
@interface VJPKIBERTLVNodeInputSupportMyNumberHash : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithMyNumberHash:(VJPKIKotlinByteArray *)myNumberHash __attribute__((swift_name("init(myNumberHash:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportMyNumberHash *)doCopyMyNumberHash:(VJPKIKotlinByteArray *)myNumberHash __attribute__((swift_name("doCopy(myNumberHash:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *myNumberHash __attribute__((swift_name("myNumberHash")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportPersonalInfo")))
@interface VJPKIBERTLVNodeInputSupportPersonalInfo : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithPersonalInfoByteArray:(VJPKIKotlinByteArray *)personalInfoByteArray __attribute__((swift_name("init(personalInfoByteArray:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportPersonalInfo *)doCopyPersonalInfoByteArray:(VJPKIKotlinByteArray *)personalInfoByteArray __attribute__((swift_name("doCopy(personalInfoByteArray:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *personalInfoByteArray __attribute__((swift_name("personalInfoByteArray")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportPersonalInfoHash")))
@interface VJPKIBERTLVNodeInputSupportPersonalInfoHash : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithPersonalInfoHash:(VJPKIKotlinByteArray *)personalInfoHash __attribute__((swift_name("init(personalInfoHash:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportPersonalInfoHash *)doCopyPersonalInfoHash:(VJPKIKotlinByteArray *)personalInfoHash __attribute__((swift_name("doCopy(personalInfoHash:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *personalInfoHash __attribute__((swift_name("personalInfoHash")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportPersonalInfoOffset")))
@interface VJPKIBERTLVNodeInputSupportPersonalInfoOffset : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithNameOffset:(int32_t)nameOffset addressOffset:(int32_t)addressOffset dateOfBirthOffset:(int32_t)dateOfBirthOffset genderOffset:(int32_t)genderOffset __attribute__((swift_name("init(nameOffset:addressOffset:dateOfBirthOffset:genderOffset:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportPersonalInfoOffset *)doCopyNameOffset:(int32_t)nameOffset addressOffset:(int32_t)addressOffset dateOfBirthOffset:(int32_t)dateOfBirthOffset genderOffset:(int32_t)genderOffset __attribute__((swift_name("doCopy(nameOffset:addressOffset:dateOfBirthOffset:genderOffset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t addressOffset __attribute__((swift_name("addressOffset")));
@property (readonly) int32_t dateOfBirthOffset __attribute__((swift_name("dateOfBirthOffset")));
@property (readonly) int32_t genderOffset __attribute__((swift_name("genderOffset")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t nameOffset __attribute__((swift_name("nameOffset")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodeInputSupportVerificationCertificate")))
@interface VJPKIBERTLVNodeInputSupportVerificationCertificate : VJPKIBase <VJPKIBERTLVNodeInputSupport>
- (instancetype)initWithIdAndPublicKey:(VJPKIKotlinByteArray *)idAndPublicKey hashSignature:(VJPKIKotlinByteArray *)hashSignature __attribute__((swift_name("init(idAndPublicKey:hashSignature:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodeInputSupportVerificationCertificate *)doCopyIdAndPublicKey:(VJPKIKotlinByteArray *)idAndPublicKey hashSignature:(VJPKIKotlinByteArray *)hashSignature __attribute__((swift_name("doCopy(idAndPublicKey:hashSignature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *hashSignature __attribute__((swift_name("hashSignature")));
@property (readonly) VJPKIKotlinByteArray *idAndPublicKey __attribute__((swift_name("idAndPublicKey")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodePublicKeyExponent")))
@interface VJPKIBERTLVNodePublicKeyExponent : VJPKIBase <VJPKIBERTLVNode>
- (instancetype)initWithPublicKeyExponent:(VJPKIKotlinByteArray *)publicKeyExponent __attribute__((swift_name("init(publicKeyExponent:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodePublicKeyExponent *)doCopyPublicKeyExponent:(VJPKIKotlinByteArray *)publicKeyExponent __attribute__((swift_name("doCopy(publicKeyExponent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKeyExponent __attribute__((swift_name("publicKeyExponent")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BERTLVNodePublicKeyModulus")))
@interface VJPKIBERTLVNodePublicKeyModulus : VJPKIBase <VJPKIBERTLVNode>
- (instancetype)initWithPublicKeyModulus:(VJPKIKotlinByteArray *)publicKeyModulus __attribute__((swift_name("init(publicKeyModulus:)"))) __attribute__((objc_designated_initializer));
- (VJPKIBERTLVNodePublicKeyModulus *)doCopyPublicKeyModulus:(VJPKIKotlinByteArray *)publicKeyModulus __attribute__((swift_name("doCopy(publicKeyModulus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLengthBytesFixed __attribute__((swift_name("isLengthBytesFixed")));
@property (readonly) VJPKIKotlinByteArray *publicKeyModulus __attribute__((swift_name("publicKeyModulus")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OID")))
@interface VJPKIOID : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oID __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIOID *shared __attribute__((swift_name("shared")));
@property (readonly) VJPKIKotlinIntArray *accessDescriptionOcsp __attribute__((swift_name("accessDescriptionOcsp")));
@property (readonly) VJPKIKotlinIntArray *authorityInfoAccess __attribute__((swift_name("authorityInfoAccess")));
@property (readonly) VJPKIKotlinIntArray *authorityKeyIdentifier __attribute__((swift_name("authorityKeyIdentifier")));
@property (readonly) VJPKIKotlinIntArray *basicConstraints __attribute__((swift_name("basicConstraints")));
@property (readonly) VJPKIKotlinIntArray *certificatePolicies __attribute__((swift_name("certificatePolicies")));
@property (readonly) VJPKIKotlinIntArray *commonName __attribute__((swift_name("commonName")));
@property (readonly) VJPKIKotlinIntArray *countryName __attribute__((swift_name("countryName")));
@property (readonly) VJPKIKotlinIntArray *crlDistributionPoints __attribute__((swift_name("crlDistributionPoints")));
@property (readonly) VJPKIKotlinIntArray *extendedKeyUsage __attribute__((swift_name("extendedKeyUsage")));
@property (readonly) VJPKIKotlinIntArray *issuerAltName __attribute__((swift_name("issuerAltName")));
@property (readonly) VJPKIKotlinIntArray *keyUsage __attribute__((swift_name("keyUsage")));
@property (readonly) VJPKIKotlinIntArray *localityName __attribute__((swift_name("localityName")));
@property (readonly) VJPKIKotlinIntArray *organizationName __attribute__((swift_name("organizationName")));
@property (readonly) VJPKIKotlinIntArray *organizationUnitName __attribute__((swift_name("organizationUnitName")));
@property (readonly) VJPKIKotlinIntArray *policyQualifierId __attribute__((swift_name("policyQualifierId")));
@property (readonly) VJPKIKotlinIntArray *rsaEncryption __attribute__((swift_name("rsaEncryption")));
@property (readonly) VJPKIKotlinIntArray *sha256 __attribute__((swift_name("sha256")));
@property (readonly) VJPKIKotlinIntArray *sha256WithRSAEncryption __attribute__((swift_name("sha256WithRSAEncryption")));
@property (readonly) VJPKIKotlinIntArray *sha384 __attribute__((swift_name("sha384")));
@property (readonly) VJPKIKotlinIntArray *sha512 __attribute__((swift_name("sha512")));
@property (readonly) VJPKIKotlinIntArray *subjectAltName __attribute__((swift_name("subjectAltName")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameAddress __attribute__((swift_name("subjectAltNameAddress")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameCommonName __attribute__((swift_name("subjectAltNameCommonName")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameDateOfBirth __attribute__((swift_name("subjectAltNameDateOfBirth")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameGender __attribute__((swift_name("subjectAltNameGender")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameSubstituteCharacterOfAddress __attribute__((swift_name("subjectAltNameSubstituteCharacterOfAddress")));
@property (readonly) VJPKIKotlinIntArray *subjectAltNameSubstituteCharacterOfCommonName __attribute__((swift_name("subjectAltNameSubstituteCharacterOfCommonName")));
@property (readonly) VJPKIKotlinIntArray *subjectKeyIdentifier __attribute__((swift_name("subjectKeyIdentifier")));
@property (readonly) VJPKIKotlinIntArray *tlsWebClientAuthentication __attribute__((swift_name("tlsWebClientAuthentication")));
@property (readonly) VJPKIKotlinIntArray *verifyMockCardDigitalSignatureCertPolicyID __attribute__((swift_name("verifyMockCardDigitalSignatureCertPolicyID")));
@property (readonly) VJPKIKotlinIntArray *verifyMockCardUserAuthenticationCertPolicyID __attribute__((swift_name("verifyMockCardUserAuthenticationCertPolicyID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLV")))
@interface VJPKITLV : VJPKIBase
- (instancetype)initWithRaw:(VJPKIKotlinByteArray *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLV *)doCopyRaw:(VJPKIKotlinByteArray *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VJPKITLVIterator *)toIterator __attribute__((swift_name("toIterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@property (readonly) VJPKIKotlinByteArray *rest __attribute__((swift_name("rest")));
@property (readonly) int32_t tag __attribute__((swift_name("tag")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@property (readonly) VJPKIKotlinByteArray *whole __attribute__((swift_name("whole")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol VJPKIKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVIterator")))
@interface VJPKITLVIterator : VJPKIBase <VJPKIKotlinIterator>
- (instancetype)initWithRest:(VJPKIKotlinByteArray *)rest __attribute__((swift_name("init(rest:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (VJPKITLV *)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("TLVNode")))
@protocol VJPKITLVNode
@required
@property (readonly) VJPKIKotlinByteArray *encoded __attribute__((swift_name("encoded")));
@property (readonly) VJPKIKotlinByteArray *length __attribute__((swift_name("length")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeBitString")))
@interface VJPKITLVNodeBitString : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithUnusedBits:(int32_t)unusedBits raw:(VJPKIKotlinByteArray *)raw __attribute__((swift_name("init(unusedBits:raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeBitString *)doCopyUnusedBits:(int32_t)unusedBits raw:(VJPKIKotlinByteArray *)raw __attribute__((swift_name("doCopy(unusedBits:raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) int32_t unusedBits __attribute__((swift_name("unusedBits")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeBoolean")))
@interface VJPKITLVNodeBoolean : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(BOOL)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeBoolean *)doCopyRaw:(BOOL)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("TLVNodeExplicit")))
@interface VJPKITLVNodeExplicit : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithNum:(int32_t)num node:(id<VJPKITLVNode>)node __attribute__((swift_name("init(num:node:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeIA5String")))
@interface VJPKITLVNodeIA5String : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(NSString *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeIA5String *)doCopyRaw:(NSString *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("TLVNodeImplicit")))
@interface VJPKITLVNodeImplicit : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithNum:(int32_t)num node:(id<VJPKITLVNode>)node __attribute__((swift_name("init(num:node:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeInteger")))
@interface VJPKITLVNodeInteger : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(int32_t)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRaw:(VJPKIKotlinByteArray *)raw isPositive:(BOOL)isPositive __attribute__((swift_name("init(raw:isPositive:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeInteger *)doCopyRaw:(VJPKIKotlinByteArray *)raw isPositive:(BOOL)isPositive __attribute__((swift_name("doCopy(raw:isPositive:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isPositive __attribute__((swift_name("isPositive")));
@property (readonly) VJPKIKotlinByteArray *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeNull")))
@interface VJPKITLVNodeNull : VJPKIBase <VJPKITLVNode>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)null __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKITLVNodeNull *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeObjectIdentifier")))
@interface VJPKITLVNodeObjectIdentifier : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRawValues:(VJPKIKotlinIntArray *)rawValues __attribute__((swift_name("init(rawValues:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeObjectIdentifier *)doCopyRawValues:(VJPKIKotlinIntArray *)rawValues __attribute__((swift_name("doCopy(rawValues:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinIntArray *rawValues __attribute__((swift_name("rawValues")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeOctetString")))
@interface VJPKITLVNodeOctetString : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithValue:(VJPKIKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeOctetString *)doCopyValue:(VJPKIKotlinByteArray *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodePrintableString")))
@interface VJPKITLVNodePrintableString : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(NSString *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodePrintableString *)doCopyRaw:(NSString *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("TLVNodeSequence")))
@interface VJPKITLVNodeSequence : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("TLVNodeSet")))
@interface VJPKITLVNodeSet : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeUTCTime")))
@interface VJPKITLVNodeUTCTime : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(VJPKIKotlinx_datetimeLocalDateTime *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeUTCTime *)doCopyRaw:(VJPKIKotlinx_datetimeLocalDateTime *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinx_datetimeLocalDateTime *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TLVNodeUTF8String")))
@interface VJPKITLVNodeUTF8String : VJPKIBase <VJPKITLVNode>
- (instancetype)initWithRaw:(NSString *)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
- (VJPKITLVNodeUTF8String *)doCopyRaw:(NSString *)raw __attribute__((swift_name("doCopy(raw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@property (readonly) int8_t tag_ __attribute__((swift_name("tag_")));
@property (readonly) VJPKIKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestInfo")))
@interface VJPKIDigestInfo : VJPKITLVNodeSequence
- (instancetype)initWithDigestAlgorithm:(VJPKIAlgorithmIdentifier *)digestAlgorithm digest:(VJPKIKotlinByteArray *)digest __attribute__((swift_name("init(digestAlgorithm:digest:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIDigestInfo *)doCopyDigestAlgorithm:(VJPKIAlgorithmIdentifier *)digestAlgorithm digest:(VJPKIKotlinByteArray *)digest __attribute__((swift_name("doCopy(digestAlgorithm:digest:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIAlgorithmIdentifier *digestAlgorithm __attribute__((swift_name("digestAlgorithm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneAsymmetricKey")))
@interface VJPKIOneAsymmetricKey : VJPKITLVNodeSequence
- (instancetype)initWithPrivateKeyAlgorithm:(VJPKIAlgorithmIdentifier *)privateKeyAlgorithm privateKey:(id<VJPKITLVNode>)privateKey __attribute__((swift_name("init(privateKeyAlgorithm:privateKey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIOneAsymmetricKey *)doCopyPrivateKeyAlgorithm:(VJPKIAlgorithmIdentifier *)privateKeyAlgorithm privateKey:(id<VJPKITLVNode>)privateKey __attribute__((swift_name("doCopy(privateKeyAlgorithm:privateKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VJPKITLVNode> privateKey __attribute__((swift_name("privateKey")));
@property (readonly) VJPKIAlgorithmIdentifier *privateKeyAlgorithm __attribute__((swift_name("privateKeyAlgorithm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RSAPrivateKey")))
@interface VJPKIRSAPrivateKey : VJPKITLVNodeSequence
- (instancetype)initWithModulus:(VJPKIKotlinByteArray *)modulus publicExponent:(VJPKIKotlinByteArray *)publicExponent privateExponent:(VJPKIKotlinByteArray *)privateExponent prime1:(VJPKIKotlinByteArray *)prime1 prime2:(VJPKIKotlinByteArray *)prime2 exponent1:(VJPKIKotlinByteArray *)exponent1 exponent2:(VJPKIKotlinByteArray *)exponent2 coefficient:(VJPKIKotlinByteArray *)coefficient __attribute__((swift_name("init(modulus:publicExponent:privateExponent:prime1:prime2:exponent1:exponent2:coefficient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIRSAPrivateKey *)doCopyModulus:(VJPKIKotlinByteArray *)modulus publicExponent:(VJPKIKotlinByteArray *)publicExponent privateExponent:(VJPKIKotlinByteArray *)privateExponent prime1:(VJPKIKotlinByteArray *)prime1 prime2:(VJPKIKotlinByteArray *)prime2 exponent1:(VJPKIKotlinByteArray *)exponent1 exponent2:(VJPKIKotlinByteArray *)exponent2 coefficient:(VJPKIKotlinByteArray *)coefficient __attribute__((swift_name("doCopy(modulus:publicExponent:privateExponent:prime1:prime2:exponent1:exponent2:coefficient:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *coefficient __attribute__((swift_name("coefficient")));
@property (readonly) VJPKIKotlinByteArray *exponent1 __attribute__((swift_name("exponent1")));
@property (readonly) VJPKIKotlinByteArray *exponent2 __attribute__((swift_name("exponent2")));
@property (readonly) VJPKIKotlinByteArray *modulus __attribute__((swift_name("modulus")));
@property (readonly) VJPKIKotlinByteArray *prime1 __attribute__((swift_name("prime1")));
@property (readonly) VJPKIKotlinByteArray *prime2 __attribute__((swift_name("prime2")));
@property (readonly) VJPKIKotlinByteArray *privateExponent __attribute__((swift_name("privateExponent")));
@property (readonly) VJPKIKotlinByteArray *publicExponent __attribute__((swift_name("publicExponent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RSAPublicKey")))
@interface VJPKIRSAPublicKey : VJPKITLVNodeSequence
- (instancetype)initWithModulus:(VJPKIKotlinByteArray *)modulus publicExponent:(VJPKIKotlinByteArray *)publicExponent __attribute__((swift_name("init(modulus:publicExponent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIRSAPublicKey *)doCopyModulus:(VJPKIKotlinByteArray *)modulus publicExponent:(VJPKIKotlinByteArray *)publicExponent __attribute__((swift_name("doCopy(modulus:publicExponent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinByteArray *modulus __attribute__((swift_name("modulus")));
@property (readonly) VJPKIKotlinByteArray *publicExponent __attribute__((swift_name("publicExponent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlgorithmIdentifier")))
@interface VJPKIAlgorithmIdentifier : VJPKITLVNodeSequence
- (instancetype)initWithAlgorithm:(VJPKIKotlinIntArray *)algorithm __attribute__((swift_name("init(algorithm:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIAlgorithmIdentifier *)doCopyAlgorithm:(VJPKIKotlinIntArray *)algorithm __attribute__((swift_name("doCopy(algorithm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinIntArray *algorithm __attribute__((swift_name("algorithm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttributeTypeAndValue")))
@interface VJPKIAttributeTypeAndValue : VJPKITLVNodeSequence
- (instancetype)initWithType:(VJPKIKotlinIntArray *)type attrValue:(id<VJPKITLVNode>)attrValue __attribute__((swift_name("init(type:attrValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIAttributeTypeAndValue *)doCopyType:(VJPKIKotlinIntArray *)type attrValue:(id<VJPKITLVNode>)attrValue __attribute__((swift_name("doCopy(type:attrValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VJPKITLVNode> attrValue __attribute__((swift_name("attrValue")));
@property (readonly) VJPKIKotlinIntArray *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Certificate")))
@interface VJPKICertificate : VJPKITLVNodeSequence
- (instancetype)initWithTbsCertificate:(VJPKITBSCertificate *)tbsCertificate signatureAlgorithm:(VJPKIAlgorithmIdentifier *)signatureAlgorithm signatureValue:(VJPKIKotlinByteArray *)signatureValue __attribute__((swift_name("init(tbsCertificate:signatureAlgorithm:signatureValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKICertificate *)doCopyTbsCertificate:(VJPKITBSCertificate *)tbsCertificate signatureAlgorithm:(VJPKIAlgorithmIdentifier *)signatureAlgorithm signatureValue:(VJPKIKotlinByteArray *)signatureValue __attribute__((swift_name("doCopy(tbsCertificate:signatureAlgorithm:signatureValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIAlgorithmIdentifier *signatureAlgorithm __attribute__((swift_name("signatureAlgorithm")));
@property (readonly) VJPKIKotlinByteArray *signatureValue __attribute__((swift_name("signatureValue")));
@property (readonly) VJPKITBSCertificate *tbsCertificate __attribute__((swift_name("tbsCertificate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistributionPoint")))
@interface VJPKIDistributionPoint : VJPKITLVNodeSequence
- (instancetype)initWithNames:(VJPKIKotlinArray<VJPKITLVNodeExplicit *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Extension")))
@interface VJPKIExtension : VJPKITLVNodeSequence
- (instancetype)initWithExtnID:(VJPKIKotlinIntArray *)extnID critical:(VJPKIBoolean * _Nullable)critical extnValue:(id<VJPKITLVNode>)extnValue __attribute__((swift_name("init(extnID:critical:extnValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIExtension *)doCopyExtnID:(VJPKIKotlinIntArray *)extnID critical:(VJPKIBoolean * _Nullable)critical extnValue:(id<VJPKITLVNode>)extnValue __attribute__((swift_name("doCopy(extnID:critical:extnValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIBoolean * _Nullable critical __attribute__((swift_name("critical")));
@property (readonly) VJPKIKotlinIntArray *extnID __attribute__((swift_name("extnID")));
@property (readonly) id<VJPKITLVNode> extnValue __attribute__((swift_name("extnValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralNames")))
@interface VJPKIGeneralNames : VJPKITLVNodeSequence
- (instancetype)initWithNames:(VJPKIKotlinArray<id<VJPKITLVNode>> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralNames.DirectoryName")))
@interface VJPKIGeneralNamesDirectoryName : VJPKITLVNodeExplicit
- (instancetype)initWithName:(VJPKIName *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNum:(int32_t)num node:(id<VJPKITLVNode>)node __attribute__((swift_name("init(num:node:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIGeneralNamesDirectoryName *)doCopyName:(VJPKIName *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIName *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralNames.OtherName")))
@interface VJPKIGeneralNamesOtherName : VJPKITLVNodeImplicit
- (instancetype)initWithTypeId:(VJPKITLVNodeObjectIdentifier *)typeId name:(VJPKITLVNodeUTF8String *)name __attribute__((swift_name("init(typeId:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNum:(int32_t)num node:(id<VJPKITLVNode>)node __attribute__((swift_name("init(num:node:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIGeneralNamesOtherName *)doCopyTypeId:(VJPKITLVNodeObjectIdentifier *)typeId name:(VJPKITLVNodeUTF8String *)name __attribute__((swift_name("doCopy(typeId:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKITLVNodeUTF8String *name __attribute__((swift_name("name")));
@property (readonly) VJPKITLVNodeObjectIdentifier *typeId __attribute__((swift_name("typeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralNames.UniformResourceIdentifier")))
@interface VJPKIGeneralNamesUniformResourceIdentifier : VJPKITLVNodeImplicit
- (instancetype)initWithUri:(VJPKITLVNodeIA5String *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNum:(int32_t)num node:(id<VJPKITLVNode>)node __attribute__((swift_name("init(num:node:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIGeneralNamesUniformResourceIdentifier *)doCopyUri:(VJPKITLVNodeIA5String *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKITLVNodeIA5String *uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Name")))
@interface VJPKIName : VJPKITLVNodeSequence
- (instancetype)initWithRdnSequence:(VJPKIKotlinArray<VJPKIAttributeTypeAndValue *> *)rdnSequence __attribute__((swift_name("init(rdnSequence:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyInformation")))
@interface VJPKIPolicyInformation : VJPKITLVNodeSequence
- (instancetype)initWithCertPolicyId:(VJPKIKotlinIntArray *)certPolicyId policyQualifiers:(VJPKIKotlinArray<id<VJPKITLVNode>> *)policyQualifiers __attribute__((swift_name("init(certPolicyId:policyQualifiers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) VJPKIKotlinIntArray *certPolicyId __attribute__((swift_name("certPolicyId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyQualifierInfo")))
@interface VJPKIPolicyQualifierInfo : VJPKITLVNodeSequence
- (instancetype)initWithPolicyQualifierID:(VJPKIKotlinIntArray *)policyQualifierID qualifier:(id<VJPKITLVNode>)qualifier __attribute__((swift_name("init(policyQualifierID:qualifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIPolicyQualifierInfo *)doCopyPolicyQualifierID:(VJPKIKotlinIntArray *)policyQualifierID qualifier:(id<VJPKITLVNode>)qualifier __attribute__((swift_name("doCopy(policyQualifierID:qualifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinIntArray *policyQualifierID __attribute__((swift_name("policyQualifierID")));
@property (readonly) id<VJPKITLVNode> qualifier __attribute__((swift_name("qualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubjectPublicKeyInfo")))
@interface VJPKISubjectPublicKeyInfo : VJPKITLVNodeSequence
- (instancetype)initWithAlgorithm:(VJPKIAlgorithmIdentifier *)algorithm subjectPublicKey:(id<VJPKITLVNode>)subjectPublicKey __attribute__((swift_name("init(algorithm:subjectPublicKey:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKISubjectPublicKeyInfo *)doCopyAlgorithm:(VJPKIAlgorithmIdentifier *)algorithm subjectPublicKey:(id<VJPKITLVNode>)subjectPublicKey __attribute__((swift_name("doCopy(algorithm:subjectPublicKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIAlgorithmIdentifier *algorithm __attribute__((swift_name("algorithm")));
@property (readonly) id<VJPKITLVNode> subjectPublicKey __attribute__((swift_name("subjectPublicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TBSCertificate")))
@interface VJPKITBSCertificate : VJPKITLVNodeSequence
- (instancetype)initWithSerialNumber:(VJPKIKotlinByteArray *)serialNumber signature:(VJPKIAlgorithmIdentifier *)signature issuer:(VJPKIName *)issuer notBefore:(VJPKIKotlinx_datetimeLocalDateTime *)notBefore notAfter:(VJPKIKotlinx_datetimeLocalDateTime *)notAfter subject:(VJPKIName *)subject subjectPublicKeyInfo:(VJPKISubjectPublicKeyInfo *)subjectPublicKeyInfo extensions:(VJPKIKotlinArray<VJPKIExtension *> *)extensions __attribute__((swift_name("init(serialNumber:signature:issuer:notBefore:notAfter:subject:subjectPublicKeyInfo:extensions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodes:(VJPKIKotlinArray<id<VJPKITLVNode>> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKITBSCertificate *)doCopySerialNumber:(VJPKIKotlinByteArray *)serialNumber signature:(VJPKIAlgorithmIdentifier *)signature issuer:(VJPKIName *)issuer notBefore:(VJPKIKotlinx_datetimeLocalDateTime *)notBefore notAfter:(VJPKIKotlinx_datetimeLocalDateTime *)notAfter subject:(VJPKIName *)subject subjectPublicKeyInfo:(VJPKISubjectPublicKeyInfo *)subjectPublicKeyInfo extensions:(VJPKIKotlinArray<VJPKIExtension *> *)extensions __attribute__((swift_name("doCopy(serialNumber:signature:issuer:notBefore:notAfter:subject:subjectPublicKeyInfo:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinArray<VJPKIExtension *> *extensions __attribute__((swift_name("extensions")));
@property (readonly) VJPKIName *issuer __attribute__((swift_name("issuer")));
@property (readonly) VJPKIKotlinx_datetimeLocalDateTime *notAfter __attribute__((swift_name("notAfter")));
@property (readonly) VJPKIKotlinx_datetimeLocalDateTime *notBefore __attribute__((swift_name("notBefore")));
@property (readonly) VJPKIKotlinByteArray *serialNumber __attribute__((swift_name("serialNumber")));
@property (readonly) VJPKIAlgorithmIdentifier *signature __attribute__((swift_name("signature")));
@property (readonly) VJPKIName *subject __attribute__((swift_name("subject")));
@property (readonly) VJPKISubjectPublicKeyInfo *subjectPublicKeyInfo __attribute__((swift_name("subjectPublicKeyInfo")));
@end

__attribute__((swift_name("CommandResponseStatusInterface")))
@protocol VJPKICommandResponseStatusInterface
@required
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("ReaderSessionInterface")))
@protocol VJPKIReaderSessionInterface
@required
- (void)close __attribute__((swift_name("close()")));
@property void (^onEvent)(VJPKIReaderSessionEvent *) __attribute__((swift_name("onEvent")));
@end

__attribute__((swift_name("PlatformReaderSessionInterface")))
@protocol VJPKIPlatformReaderSessionInterface <VJPKIReaderSessionInterface>
@required
- (void)closeWithErrorMessage:(NSString *)message __attribute__((swift_name("closeWithError(message:)")));
@property NSString *dialogMessage __attribute__((swift_name("dialogMessage")));
@end

__attribute__((swift_name("ConfirmationAPInterface")))
@protocol VJPKIConfirmationAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDateOfBirthContentWithDateOfBirthPasswordPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableDateOfBirthContent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDateOfBirthContentWithDateOfBirthPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberContentWithVerificationNumberAPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableMyNumberContent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberContentWithVerificationNumberA(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoContentWithVerificationNumberBPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiablePersonalInfoContent<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoContentWithVerificationNumberB(password:nonce:hashAlgorithm:completionHandler:)")));
@end

__attribute__((swift_name("InputSupportAPInterface")))
@protocol VJPKIInputSupportAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readAllDataWithPasswordPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAllDataWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberWithPasswordPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberWithVerificationNumberAPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberWithVerificationNumberA(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoWithPasswordPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoWithVerificationNumberBPassword:(NSString *)password nonce:(id _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoWithVerificationNumberB(password:nonce:hashAlgorithm:completionHandler:)")));
@end

__attribute__((swift_name("LowLevelConfirmationAPInterface")))
@protocol VJPKILowLevelConfirmationAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readAPInfoWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readAPInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDateOfBirthContentWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readDateOfBirthContent(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberContentWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberContent(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoContentWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoContent(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readVerificationPublicKeyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readVerificationPublicKey(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)selectAPWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("selectAP(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithAuthenticationPrivateKeyData:(id _Nullable)data completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithAuthenticationPrivateKey(data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyDateOfBirthPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyDateOfBirthPassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyVerificationNumberAPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyVerificationNumberA(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyVerificationNumberBPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyVerificationNumberB(password:completionHandler:)")));
@end

__attribute__((swift_name("LowLevelInputSupportAPInterface")))
@protocol VJPKILowLevelInputSupportAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readAPInfoWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readAPInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readAuthenticationPublicKeyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readAuthenticationPublicKey(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumber(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readSessionKeyEncryptionPublicKeyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readSessionKeyEncryptionPublicKey(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readSignatureWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readSignature(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readVerificationPublicKeyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readVerificationPublicKey(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)selectAPWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("selectAP(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithAuthenticationPrivateKeyData:(id _Nullable)data completionHandler_:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithAuthenticationPrivateKey(data:completionHandler_:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyVerificationNumberAPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyVerificationNumberA(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyVerificationNumberBPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyVerificationNumberB(password:completionHandler:)")));
@end

__attribute__((swift_name("JPKIAPInterface")))
@protocol VJPKIJPKIAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeDigitalSignaturePasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeDigitalSignaturePassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeUserAuthenticationPasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeUserAuthenticationPassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createConsentApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID preference:(VJPKIPreference *)preference completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createConsentApplication(password:serviceID:serviceProviderID:preference:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createRevocationApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createRevocationApplication(password:serviceID:serviceProviderID:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDigitalSignaturePasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDigitalSignaturePasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getUserAuthenticationPasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAuthenticationPasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithDigitalSignatureSecretKeyPassword:(NSString *)password data:(id _Nullable)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithDigitalSignatureSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithUserAuthenticationSecretKeyPassword:(NSString *)password data:(id _Nullable)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithUserAuthenticationSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithDigitalSignatureSecretKeyPassword:(NSString *)password digest:(id _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithDigitalSignatureSecretKey(password:digest:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithUserAuthenticationSecretKeyPassword:(NSString *)password digest:(id _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithUserAuthenticationSecretKey(password:digest:hashAlgorithm:completionHandler:)")));
@end

__attribute__((swift_name("LowLevelJPKIAPInterface")))
@protocol VJPKILowLevelJPKIAPInterface
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeDigitalSignaturePasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeDigitalSignaturePassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeUserAuthenticationPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeUserAuthenticationPassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDigitalSignaturePasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDigitalSignaturePasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getUserAuthenticationPasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAuthenticationPasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDigitalSignatureCACertificateWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readDigitalSignatureCACertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDigitalSignatureCertificateWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readDigitalSignatureCertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readTokenInfoWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readTokenInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readUserAuthenticationCACertificateWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUserAuthenticationCACertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readUserAuthenticationCertificateWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUserAuthenticationCertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)selectAPWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("selectAP(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithDigitalSignaturePrivateKeyData:(id _Nullable)data completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithDigitalSignaturePrivateKey(data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithUserAuthenticationPrivateKeyData:(id _Nullable)data completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithUserAuthenticationPrivateKey(data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyDigitalSignaturePasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyDigitalSignaturePassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyUserAuthenticationPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyUserAuthenticationPassword(password:completionHandler:)")));
@end

__attribute__((swift_name("BidirectionalTranslatorInterface")))
@protocol VJPKIBidirectionalTranslatorInterface
@required
- (id _Nullable)toSourceData:(id _Nullable)data __attribute__((swift_name("toSource(data:)")));
- (id _Nullable)toTargetData:(id _Nullable)data __attribute__((swift_name("toTarget(data:)")));
@end

__attribute__((swift_name("DataTranslatorInterface")))
@protocol VJPKIDataTranslatorInterface <VJPKIBidirectionalTranslatorInterface>
@required
- (VJPKIKotlinByteArray *)toByteArrayData:(id _Nullable)data __attribute__((swift_name("toByteArray(data:)")));
- (id _Nullable)toDataData:(VJPKIKotlinByteArray *)data __attribute__((swift_name("toData(data:)")));
@end

__attribute__((swift_name("TranslatorInterface")))
@protocol VJPKITranslatorInterface
@required
- (id _Nullable)toData:(id _Nullable)data __attribute__((swift_name("to(data:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface VJPKIKotlinThrowable : VJPKIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (VJPKIKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface VJPKIKotlinException : VJPKIKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface VJPKIKotlinRuntimeException : VJPKIKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface VJPKIKotlinIllegalStateException : VJPKIKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandExecutionException")))
@interface VJPKICommandExecutionException : VJPKIKotlinIllegalStateException <VJPKICommandResponseStatusInterface>
- (instancetype)initWithStatus:(id<VJPKICommandResponseStatusInterface>)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) id<VJPKICommandResponseStatusInterface> status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("CommandResponseStatus")))
@interface VJPKICommandResponseStatus : VJPKIBase <VJPKICommandResponseStatusInterface>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)acceptSw1:(int8_t)sw1 sw2:(int8_t)sw2 __attribute__((swift_name("accept(sw1:sw2:)")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("CommandResponseStatus.Failure")))
@interface VJPKICommandResponseStatusFailure : VJPKICommandResponseStatus
@end

__attribute__((swift_name("CommandResponseStatus.ArgumentError")))
@interface VJPKICommandResponseStatusArgumentError : VJPKICommandResponseStatusFailure
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorAccessTargetFileNotExit")))
@interface VJPKICommandResponseStatusArgumentErrorAccessTargetFileNotExit : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accessTargetFileNotExit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorAccessTargetFileNotExit *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorContradictingLcToP1P2")))
@interface VJPKICommandResponseStatusArgumentErrorContradictingLcToP1P2 : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contradictingLcToP1P2 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorContradictingLcToP1P2 *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorContradictingLcToTLVStructure")))
@interface VJPKICommandResponseStatusArgumentErrorContradictingLcToTLVStructure : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contradictingLcToTLVStructure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorContradictingLcToTLVStructure *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorFunctionNotProvided")))
@interface VJPKICommandResponseStatusArgumentErrorFunctionNotProvided : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)functionNotProvided __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorFunctionNotProvided *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorIncorrectP1P2")))
@interface VJPKICommandResponseStatusArgumentErrorIncorrectP1P2 : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incorrectP1P2 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorIncorrectP1P2 *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorIncorrectValueInDataField")))
@interface VJPKICommandResponseStatusArgumentErrorIncorrectValueInDataField : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incorrectValueInDataField __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorIncorrectValueInDataField *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorInsufficientMemorySpaceInFile")))
@interface VJPKICommandResponseStatusArgumentErrorInsufficientMemorySpaceInFile : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)insufficientMemorySpaceInFile __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorInsufficientMemorySpaceInFile *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ArgumentErrorReferencedKeyNotSetCorrectly")))
@interface VJPKICommandResponseStatusArgumentErrorReferencedKeyNotSetCorrectly : VJPKICommandResponseStatusArgumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)referencedKeyNotSetCorrectly __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusArgumentErrorReferencedKeyNotSetCorrectly *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.ClassNotProvided")))
@interface VJPKICommandResponseStatusClassNotProvided : VJPKICommandResponseStatusFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)classNotProvided __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusClassNotProvided *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("CommandResponseStatus.CommandExecutionError")))
@interface VJPKICommandResponseStatusCommandExecutionError : VJPKICommandResponseStatusFailure
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorCommandUsageConditionNotSatisfied")))
@interface VJPKICommandResponseStatusCommandExecutionErrorCommandUsageConditionNotSatisfied : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commandUsageConditionNotSatisfied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorCommandUsageConditionNotSatisfied *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorContradictingCommandToFileStructure")))
@interface VJPKICommandResponseStatusCommandExecutionErrorContradictingCommandToFileStructure : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contradictingCommandToFileStructure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorContradictingCommandToFileStructure *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorCurrentEFNotExist")))
@interface VJPKICommandResponseStatusCommandExecutionErrorCurrentEFNotExist : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)currentEFNotExist __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorCurrentEFNotExist *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorHashNotMatched")))
@interface VJPKICommandResponseStatusCommandExecutionErrorHashNotMatched : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hashNotMatched __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorHashNotMatched *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorPaddingError")))
@interface VJPKICommandResponseStatusCommandExecutionErrorPaddingError : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paddingError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorPaddingError *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorReferencedIEFClosed")))
@interface VJPKICommandResponseStatusCommandExecutionErrorReferencedIEFClosed : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)referencedIEFClosed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorReferencedIEFClosed *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorSecurityStatusNotSatisfied")))
@interface VJPKICommandResponseStatusCommandExecutionErrorSecurityStatusNotSatisfied : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)securityStatusNotSatisfied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorSecurityStatusNotSatisfied *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommandExecutionErrorTemporalVariableError")))
@interface VJPKICommandResponseStatusCommandExecutionErrorTemporalVariableError : VJPKICommandResponseStatusCommandExecutionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)temporalVariableError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommandExecutionErrorTemporalVariableError *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("CommandResponseStatus.CommunicationError")))
@interface VJPKICommandResponseStatusCommunicationError : VJPKICommandResponseStatusFailure
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommunicationErrorLogicalChannelNotSupported")))
@interface VJPKICommandResponseStatusCommunicationErrorLogicalChannelNotSupported : VJPKICommandResponseStatusCommunicationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logicalChannelNotSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommunicationErrorLogicalChannelNotSupported *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.CommunicationErrorSecureMessagingNotSupported")))
@interface VJPKICommandResponseStatusCommunicationErrorSecureMessagingNotSupported : VJPKICommandResponseStatusCommunicationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)secureMessagingNotSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusCommunicationErrorSecureMessagingNotSupported *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.IncorrectArgumentLcLe")))
@interface VJPKICommandResponseStatusIncorrectArgumentLcLe : VJPKICommandResponseStatusFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incorrectArgumentLcLe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusIncorrectArgumentLcLe *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("CommandResponseStatus.IncorrectPassword")))
@interface VJPKICommandResponseStatusIncorrectPassword : VJPKICommandResponseStatusFailure
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.IncorrectPasswordRetryLimited")))
@interface VJPKICommandResponseStatusIncorrectPasswordRetryLimited : VJPKICommandResponseStatusIncorrectPassword
- (instancetype)initWithSw2:(int8_t)sw2 __attribute__((swift_name("init(sw2:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKICommandResponseStatusIncorrectPasswordRetryLimitedCompanion *companion __attribute__((swift_name("companion")));
- (VJPKICommandResponseStatusIncorrectPasswordRetryLimited *)doCopySw2:(int8_t)sw2 __attribute__((swift_name("doCopy(sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int32_t remainingRetries __attribute__((swift_name("remainingRetries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.IncorrectPasswordRetryLimitedCompanion")))
@interface VJPKICommandResponseStatusIncorrectPasswordRetryLimitedCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusIncorrectPasswordRetryLimitedCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.IncorrectPasswordRetryUnlimited")))
@interface VJPKICommandResponseStatusIncorrectPasswordRetryUnlimited : VJPKICommandResponseStatusIncorrectPassword
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)retryUnlimited __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusIncorrectPasswordRetryUnlimited *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.InsNotProvided")))
@interface VJPKICommandResponseStatusInsNotProvided : VJPKICommandResponseStatusFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)insNotProvided __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusInsNotProvided *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.MemoryFailure")))
@interface VJPKICommandResponseStatusMemoryFailure : VJPKICommandResponseStatusFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)memoryFailure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusMemoryFailure *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.MoreDataAvailable")))
@interface VJPKICommandResponseStatusMoreDataAvailable : VJPKICommandResponseStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)moreDataAvailable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusMoreDataAvailable *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("CommandResponseStatus.SecurityEnvironmentError")))
@interface VJPKICommandResponseStatusSecurityEnvironmentError : VJPKICommandResponseStatusFailure
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.SecurityEnvironmentErrorEnvironmentError")))
@interface VJPKICommandResponseStatusSecurityEnvironmentErrorEnvironmentError : VJPKICommandResponseStatusSecurityEnvironmentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)environmentError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusSecurityEnvironmentErrorEnvironmentError *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.SecurityEnvironmentErrorIEFError")))
@interface VJPKICommandResponseStatusSecurityEnvironmentErrorIEFError : VJPKICommandResponseStatusSecurityEnvironmentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iEFError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusSecurityEnvironmentErrorIEFError *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.Success")))
@interface VJPKICommandResponseStatusSuccess : VJPKICommandResponseStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusSuccess *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseStatus.Unknown")))
@interface VJPKICommandResponseStatusUnknown : VJPKICommandResponseStatusFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKICommandResponseStatusUnknown *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReaderSession")))
@interface VJPKIReaderSession : VJPKIBase <VJPKIReaderSessionInterface, VJPKIPlatformReaderSessionInterface>
- (instancetype)initWithDispatchQueue:(NSObject * _Nullable)dispatchQueue __attribute__((swift_name("init(dispatchQueue:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)closeWithErrorMessage:(NSString *)message __attribute__((swift_name("closeWithError(message:)")));
@property NSString *dialogMessage __attribute__((swift_name("dialogMessage")));
@property void (^onEvent)(VJPKIReaderSessionEvent *) __attribute__((swift_name("onEvent")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol VJPKIKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface VJPKIKotlinEnum<E> : VJPKIBase <VJPKIKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReaderSessionEvent")))
@interface VJPKIReaderSessionEvent : VJPKIKotlinEnum<VJPKIReaderSessionEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIReaderSessionEvent *connectionestablished __attribute__((swift_name("connectionestablished")));
@property (class, readonly) VJPKIReaderSessionEvent *usercancelled __attribute__((swift_name("usercancelled")));
+ (VJPKIKotlinArray<VJPKIReaderSessionEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIReaderSessionEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReaderSessionException")))
@interface VJPKIReaderSessionException : VJPKIKotlinIllegalStateException
- (instancetype)initWithCode:(VJPKIReaderSessionExceptionCode *)code cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(VJPKIReaderSessionExceptionCode *)code message:(NSString *)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(VJPKIReaderSessionExceptionCode *)code message:(NSString *)message cause:(VJPKIKotlinThrowable * _Nullable)cause underlyingError:(NSError * _Nullable)underlyingError __attribute__((swift_name("init(code:message:cause:underlyingError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (VJPKIReaderSessionException *)doCopyCode:(VJPKIReaderSessionExceptionCode *)code message:(NSString *)message cause:(VJPKIKotlinThrowable * _Nullable)cause underlyingError:(NSError * _Nullable)underlyingError __attribute__((swift_name("doCopy(code:message:cause:underlyingError:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) VJPKIReaderSessionExceptionCode *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSError * _Nullable underlyingError __attribute__((swift_name("underlyingError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReaderSessionException.Code")))
@interface VJPKIReaderSessionExceptionCode : VJPKIKotlinEnum<VJPKIReaderSessionExceptionCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIReaderSessionExceptionCode *notinitialized __attribute__((swift_name("notinitialized")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *invalidated __attribute__((swift_name("invalidated")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *sendcommandfailed __attribute__((swift_name("sendcommandfailed")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *readresponsefailed __attribute__((swift_name("readresponsefailed")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *nfcnotsupported __attribute__((swift_name("nfcnotsupported")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *tagdetectionfailed __attribute__((swift_name("tagdetectionfailed")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *tagconnectionfailed __attribute__((swift_name("tagconnectionfailed")));
@property (class, readonly) VJPKIReaderSessionExceptionCode *tagunsupported __attribute__((swift_name("tagunsupported")));
+ (VJPKIKotlinArray<VJPKIReaderSessionExceptionCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIReaderSessionExceptionCode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("BaseAP")))
@interface VJPKIBaseAP : VJPKIBase
- (instancetype)initWithSession:(VJPKIReaderSession *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)changePasswordEfid:(int8_t)efid newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changePassword(efid:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getRemainingRetriesEfid:(int8_t)efid completionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRemainingRetries(efid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readBinaryEfid:(int8_t)efid length:(int32_t)length completionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBinary(efid:length:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)selectAPAid:(VJPKIKotlinByteArray *)aid completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("selectAP(aid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)signEfid:(int8_t)efid data:(VJPKIKotlinByteArray *)data completionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sign(efid:data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)verifyEfid:(int8_t)efid password:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verify(efid:password:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface VJPKIKotlinIllegalArgumentException : VJPKIKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IncorrectPasswordFormatException")))
@interface VJPKIIncorrectPasswordFormatException : VJPKIKotlinIllegalArgumentException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("RemainingRetries")))
@interface VJPKIRemainingRetries : VJPKIBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemainingRetries.Limited")))
@interface VJPKIRemainingRetriesLimited : VJPKIRemainingRetries
- (instancetype)initWithCount:(int32_t)count __attribute__((swift_name("init(count:)"))) __attribute__((objc_designated_initializer));
- (VJPKIRemainingRetriesLimited *)doCopyCount:(int32_t)count __attribute__((swift_name("doCopy(count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemainingRetries.Unlimited")))
@interface VJPKIRemainingRetriesUnlimited : VJPKIRemainingRetries
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unlimited __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIRemainingRetriesUnlimited *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnsupportedVersionException")))
@interface VJPKIUnsupportedVersionException : VJPKIKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("AbstractConfirmationAP")))
@interface VJPKIAbstractConfirmationAP<Data> : VJPKIBase <VJPKIConfirmationAPInterface>
- (instancetype)initWithLowLevel:(id<VJPKILowLevelConfirmationAPInterface>)lowLevel translator:(id<VJPKIDataTranslatorInterface>)translator __attribute__((swift_name("init(lowLevel:translator:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)initializeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDateOfBirthContentWithDateOfBirthPasswordPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableDateOfBirthContent<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDateOfBirthContentWithDateOfBirthPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberContentWithVerificationNumberAPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableMyNumberContent<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberContentWithVerificationNumberA(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoContentWithVerificationNumberBPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiablePersonalInfoContent<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoContentWithVerificationNumberB(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<VJPKILowLevelConfirmationAPInterface> lowLevel __attribute__((swift_name("lowLevel")));
@end

__attribute__((swift_name("AbstractInputSupportAP")))
@interface VJPKIAbstractInputSupportAP<Data> : VJPKIBase <VJPKIInputSupportAPInterface>
- (instancetype)initWithLowLevel:(id<VJPKILowLevelInputSupportAPInterface>)lowLevel translator:(id<VJPKIDataTranslatorInterface>)translator __attribute__((swift_name("init(lowLevel:translator:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)initializeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readAllDataWithPasswordPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAllDataWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberWithPasswordPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readMyNumberWithVerificationNumberAPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMyNumberWithVerificationNumberA(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoWithPasswordPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoWithPassword(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readPersonalInfoWithVerificationNumberBPassword:(NSString *)password nonce:(Data _Nullable)nonce hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKIVerifiableInputSupportData<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPersonalInfoWithVerificationNumberB(password:nonce:hashAlgorithm:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<VJPKILowLevelInputSupportAPInterface> lowLevel __attribute__((swift_name("lowLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Password")))
@interface VJPKIPassword : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)password __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIPassword *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)checkDateOfBirthPasswordFormatPassword:(NSString *)password error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkDateOfBirthPasswordFormat(password:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)checkPasswordFormatPassword:(NSString *)password error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkPasswordFormat(password:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)checkVerificationNumberAFormatPassword:(NSString *)password error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkVerificationNumberAFormat(password:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)checkVerificationNumberBFormatPassword:(NSString *)password error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkVerificationNumberBFormat(password:)")));
- (NSString *)sanitizeDateOfBirthPasswordPassword:(NSString *)password __attribute__((swift_name("sanitizeDateOfBirthPassword(password:)")));
- (NSString *)sanitizePasswordPassword:(NSString *)password __attribute__((swift_name("sanitizePassword(password:)")));
- (NSString *)sanitizeVerificationNumberAPassword:(NSString *)password __attribute__((swift_name("sanitizeVerificationNumberA(password:)")));
- (NSString *)sanitizeVerificationNumberBPassword:(NSString *)password __attribute__((swift_name("sanitizeVerificationNumberB(password:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifiableDateOfBirthContent")))
@interface VJPKIVerifiableDateOfBirthContent<Data> : VJPKIBase
- (VJPKIVerifiableDateOfBirthContent<Data> *)doCopyVerificationPublicKey:(Data _Nullable)verificationPublicKey authenticationSignature:(Data _Nullable)authenticationSignature digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm dateOfBirthContent:(Data _Nullable)dateOfBirthContent __attribute__((swift_name("doCopy(verificationPublicKey:authenticationSignature:digest:hashAlgorithm:dateOfBirthContent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable authenticationSignature __attribute__((swift_name("authenticationSignature")));
@property (readonly) Data _Nullable dateOfBirthContent __attribute__((swift_name("dateOfBirthContent")));
@property (readonly) Data _Nullable digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIHashAlgorithm *hashAlgorithm __attribute__((swift_name("hashAlgorithm")));
@property (readonly) Data _Nullable verificationPublicKey __attribute__((swift_name("verificationPublicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifiableInputSupportData")))
@interface VJPKIVerifiableInputSupportData<Data> : VJPKIBase
- (VJPKIVerifiableInputSupportData<Data> *)doCopyVerificationPublicKey:(Data _Nullable)verificationPublicKey authenticationPublicKey:(Data _Nullable)authenticationPublicKey authenticationSignature:(Data _Nullable)authenticationSignature digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm contentSignature:(Data _Nullable)contentSignature myNumber:(Data _Nullable)myNumber personalInfo:(Data _Nullable)personalInfo __attribute__((swift_name("doCopy(verificationPublicKey:authenticationPublicKey:authenticationSignature:digest:hashAlgorithm:contentSignature:myNumber:personalInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable authenticationPublicKey __attribute__((swift_name("authenticationPublicKey")));
@property (readonly) Data _Nullable authenticationSignature __attribute__((swift_name("authenticationSignature")));
@property (readonly) Data _Nullable contentSignature __attribute__((swift_name("contentSignature")));
@property (readonly) Data _Nullable digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIHashAlgorithm *hashAlgorithm __attribute__((swift_name("hashAlgorithm")));
@property (readonly) Data _Nullable myNumber __attribute__((swift_name("myNumber")));
@property (readonly) Data _Nullable personalInfo __attribute__((swift_name("personalInfo")));
@property (readonly) Data _Nullable verificationPublicKey __attribute__((swift_name("verificationPublicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifiableMyNumberContent")))
@interface VJPKIVerifiableMyNumberContent<Data> : VJPKIBase
- (VJPKIVerifiableMyNumberContent<Data> *)doCopyVerificationPublicKey:(Data _Nullable)verificationPublicKey authenticationSignature:(Data _Nullable)authenticationSignature digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm myNumberContent:(Data _Nullable)myNumberContent __attribute__((swift_name("doCopy(verificationPublicKey:authenticationSignature:digest:hashAlgorithm:myNumberContent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable authenticationSignature __attribute__((swift_name("authenticationSignature")));
@property (readonly) Data _Nullable digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIHashAlgorithm *hashAlgorithm __attribute__((swift_name("hashAlgorithm")));
@property (readonly) Data _Nullable myNumberContent __attribute__((swift_name("myNumberContent")));
@property (readonly) Data _Nullable verificationPublicKey __attribute__((swift_name("verificationPublicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifiablePersonalInfoContent")))
@interface VJPKIVerifiablePersonalInfoContent<Data> : VJPKIBase
- (VJPKIVerifiablePersonalInfoContent<Data> *)doCopyVerificationPublicKey:(Data _Nullable)verificationPublicKey authenticationSignature:(Data _Nullable)authenticationSignature digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm personalInfoContent:(Data _Nullable)personalInfoContent __attribute__((swift_name("doCopy(verificationPublicKey:authenticationSignature:digest:hashAlgorithm:personalInfoContent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable authenticationSignature __attribute__((swift_name("authenticationSignature")));
@property (readonly) Data _Nullable digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIHashAlgorithm *hashAlgorithm __attribute__((swift_name("hashAlgorithm")));
@property (readonly) Data _Nullable personalInfoContent __attribute__((swift_name("personalInfoContent")));
@property (readonly) Data _Nullable verificationPublicKey __attribute__((swift_name("verificationPublicKey")));
@end

__attribute__((swift_name("AbstractJPKIAP")))
@interface VJPKIAbstractJPKIAP<Data> : VJPKIBase <VJPKIJPKIAPInterface>
- (instancetype)initWithLowLevel:(id<VJPKILowLevelJPKIAPInterface>)lowLevel translator:(id<VJPKIDataTranslatorInterface>)translator __attribute__((swift_name("init(lowLevel:translator:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeDigitalSignaturePasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeDigitalSignaturePassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeUserAuthenticationPasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeUserAuthenticationPassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createConsentApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID preference:(VJPKIPreference *)preference completionHandler:(void (^)(Data _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createConsentApplication(password:serviceID:serviceProviderID:preference:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createRevocationApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID completionHandler:(void (^)(Data _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createRevocationApplication(password:serviceID:serviceProviderID:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDigitalSignaturePasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDigitalSignaturePasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getUserAuthenticationPasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAuthenticationPasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)initializeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithDigitalSignatureSecretKeyPassword:(NSString *)password data:(Data _Nullable)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithDigitalSignatureSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithUserAuthenticationSecretKeyPassword:(NSString *)password data:(Data _Nullable)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithUserAuthenticationSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithDigitalSignatureSecretKeyPassword:(NSString *)password digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithDigitalSignatureSecretKey(password:digest:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithUserAuthenticationSecretKeyPassword:(NSString *)password digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<Data> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithUserAuthenticationSecretKey(password:digest:hashAlgorithm:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<VJPKILowLevelJPKIAPInterface> lowLevel __attribute__((swift_name("lowLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JPKIAP")))
@interface VJPKIJPKIAP : VJPKIBase <VJPKIJPKIAPInterface>
- (instancetype)initWithSession:(VJPKIReaderSession *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeDigitalSignaturePasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeDigitalSignaturePassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeUserAuthenticationPasswordPassword:(NSString *)password newPassword:(NSString *)newPassword completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeUserAuthenticationPassword(password:newPassword:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createConsentApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID preference:(VJPKIPreference *)preference completionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createConsentApplication(password:serviceID:serviceProviderID:preference:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)createRevocationApplicationPassword:(NSString *)password serviceID:(NSString *)serviceID serviceProviderID:(NSString *)serviceProviderID completionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createRevocationApplication(password:serviceID:serviceProviderID:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDigitalSignaturePasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDigitalSignaturePasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getUserAuthenticationPasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAuthenticationPasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithDigitalSignatureSecretKeyPassword:(NSString *)password data:(NSData *)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<NSData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithDigitalSignatureSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDataWithUserAuthenticationSecretKeyPassword:(NSString *)password data:(NSData *)data hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<NSData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDataWithUserAuthenticationSecretKey(password:data:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithDigitalSignatureSecretKeyPassword:(NSString *)password digest:(NSData *)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<NSData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithDigitalSignatureSecretKey(password:digest:hashAlgorithm:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signDigestWithUserAuthenticationSecretKeyPassword:(NSString *)password digest:(NSData *)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm completionHandler:(void (^)(VJPKISigningResult<NSData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signDigestWithUserAuthenticationSecretKey(password:digest:hashAlgorithm:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LowLevelJPKIAP")))
@interface VJPKILowLevelJPKIAP : VJPKIBase <VJPKILowLevelJPKIAPInterface>
- (instancetype)initWithSession:(VJPKIReaderSession *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeDigitalSignaturePasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeDigitalSignaturePassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)changeUserAuthenticationPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("changeUserAuthenticationPassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDigitalSignaturePasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDigitalSignaturePasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getUserAuthenticationPasswordRemainingRetriesWithCompletionHandler:(void (^)(VJPKIRemainingRetries * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAuthenticationPasswordRemainingRetries(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDigitalSignatureCACertificateWithCompletionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDigitalSignatureCACertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readDigitalSignatureCertificateWithCompletionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDigitalSignatureCertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readTokenInfoWithCompletionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readTokenInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readUserAuthenticationCACertificateWithCompletionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUserAuthenticationCACertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)readUserAuthenticationCertificateWithCompletionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUserAuthenticationCertificate(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)selectAPWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("selectAP(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithDigitalSignaturePrivateKeyData:(NSData *)data completionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithDigitalSignaturePrivateKey(data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)signWithUserAuthenticationPrivateKeyData:(NSData *)data completionHandler:(void (^)(NSData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signWithUserAuthenticationPrivateKey(data:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyDigitalSignaturePasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyDigitalSignaturePassword(password:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)verifyUserAuthenticationPasswordPassword:(NSString *)password completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("verifyUserAuthenticationPassword(password:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preference")))
@interface VJPKIPreference : VJPKIBase
- (instancetype)initWithCommonName:(BOOL)commonName address:(BOOL)address dateOfBirth:(BOOL)dateOfBirth gender:(BOOL)gender __attribute__((swift_name("init(commonName:address:dateOfBirth:gender:)"))) __attribute__((objc_designated_initializer));
- (VJPKIPreference *)doCopyCommonName:(BOOL)commonName address:(BOOL)address dateOfBirth:(BOOL)dateOfBirth gender:(BOOL)gender __attribute__((swift_name("doCopy(commonName:address:dateOfBirth:gender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL address __attribute__((swift_name("address")));
@property (readonly) BOOL commonName __attribute__((swift_name("commonName")));
@property (readonly) BOOL dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) BOOL gender __attribute__((swift_name("gender")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SigningResult")))
@interface VJPKISigningResult<Data> : VJPKIBase
- (VJPKISigningResult<Data> *)doCopyCertificate:(Data _Nullable)certificate signature:(Data _Nullable)signature digest:(Data _Nullable)digest hashAlgorithm:(VJPKIHashAlgorithm *)hashAlgorithm __attribute__((swift_name("doCopy(certificate:signature:digest:hashAlgorithm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable certificate __attribute__((swift_name("certificate")));
@property (readonly) Data _Nullable digest __attribute__((swift_name("digest")));
@property (readonly) VJPKIHashAlgorithm *hashAlgorithm __attribute__((swift_name("hashAlgorithm")));
@property (readonly) Data _Nullable signature __attribute__((swift_name("signature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdenticalDataTranslator")))
@interface VJPKIIdenticalDataTranslator : VJPKIBase <VJPKIDataTranslatorInterface>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)identicalDataTranslator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIIdenticalDataTranslator *shared __attribute__((swift_name("shared")));
- (VJPKIKotlinByteArray *)toSourceData:(VJPKIKotlinByteArray *)data __attribute__((swift_name("toSource(data:)")));
- (VJPKIKotlinByteArray *)toTargetData:(VJPKIKotlinByteArray *)data __attribute__((swift_name("toTarget(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdenticalTranslator")))
@interface VJPKIIdenticalTranslator<T> : VJPKIBase <VJPKITranslatorInterface>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)toData:(T _Nullable)data __attribute__((swift_name("to(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformDataTranslator")))
@interface VJPKIPlatformDataTranslator : VJPKIBase <VJPKIDataTranslatorInterface>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformDataTranslator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIPlatformDataTranslator *shared __attribute__((swift_name("shared")));
- (NSData *)toSourceData:(VJPKIKotlinByteArray *)data __attribute__((swift_name("toSource(data:)")));
- (VJPKIKotlinByteArray *)toTargetData:(NSData *)data __attribute__((swift_name("toTarget(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformLocalDateTimeTranslator")))
@interface VJPKIPlatformLocalDateTimeTranslator : VJPKIBase <VJPKITranslatorInterface>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformLocalDateTimeTranslator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIPlatformLocalDateTimeTranslator *shared __attribute__((swift_name("shared")));
- (VJPKIKotlinx_datetimeLocalDateTime *)toData:(NSDate *)data __attribute__((swift_name("to(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformLongTranslator")))
@interface VJPKIPlatformLongTranslator : VJPKIBase <VJPKITranslatorInterface>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformLongTranslator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIPlatformLongTranslator *shared __attribute__((swift_name("shared")));
- (VJPKILong *)toData:(NSNumber *)data __attribute__((swift_name("to(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashAlgorithm")))
@interface VJPKIHashAlgorithm : VJPKIKotlinEnum<VJPKIHashAlgorithm *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIHashAlgorithm *sha256 __attribute__((swift_name("sha256")));
@property (class, readonly) VJPKIHashAlgorithm *sha384 __attribute__((swift_name("sha384")));
@property (class, readonly) VJPKIHashAlgorithm *sha512 __attribute__((swift_name("sha512")));
+ (VJPKIKotlinArray<VJPKIHashAlgorithm *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIHashAlgorithm *> *entries __attribute__((swift_name("entries")));
@end

@interface VJPKIHashAlgorithm (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hashData:(VJPKIKotlinByteArray *)data completionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hash(data:completionHandler:)")));
- (VJPKIAlgorithmIdentifier *)toAlgorithmIdentifier __attribute__((swift_name("toAlgorithmIdentifier()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface VJPKIKotlinByteArray : VJPKIBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VJPKIByte *(^)(VJPKIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VJPKIKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VJPKIKotlinByteArray (Extensions)
- (VJPKIKotlinByteArray *)padStartLength:(int32_t)length padByte:(int8_t)padByte __attribute__((swift_name("padStart(length:padByte:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sha1WithCompletionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sha1(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sha256WithCompletionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sha256(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sha384WithCompletionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sha384(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sha512WithCompletionHandler:(void (^)(VJPKIKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sha512(completionHandler:)")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
- (VJPKIKotlinByteArray *)trimLeadingZeros __attribute__((swift_name("trimLeadingZeros()")));
- (VJPKIKotlinByteArray *)trimTLV __attribute__((swift_name("trimTLV()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface VJPKIKotlinIntArray : VJPKIBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VJPKIInt *(^)(VJPKIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VJPKIKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface VJPKIKotlinIntArray (Extensions)
- (VJPKIKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtentionKt")))
@interface VJPKIExtentionKt : VJPKIBase
+ (NSString *)hex:(int8_t)receiver __attribute__((swift_name("hex(_:)")));
+ (BOOL)isTypeA:(id<NFCISO7816Tag>)receiver __attribute__((swift_name("isTypeA(_:)")));
+ (BOOL)isTypeB:(id<NFCISO7816Tag>)receiver __attribute__((swift_name("isTypeB(_:)")));
+ (BOOL)isUUID:(NSString *)receiver __attribute__((swift_name("isUUID(_:)")));
+ (VJPKIKotlinByteArray *)toByteArray:(int32_t)receiver __attribute__((swift_name("toByteArray(_:)")));
+ (VJPKIKotlinByteArray *)toByteArray_:(NSData *)receiver __attribute__((swift_name("toByteArray(__:)")));
+ (NSString *)toFullWidth:(NSString *)receiver __attribute__((swift_name("toFullWidth(_:)")));
+ (NSString *)toHalfWidth:(NSString *)receiver __attribute__((swift_name("toHalfWidth(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface VJPKIKotlinArray<T> : VJPKIBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(VJPKIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<VJPKIKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface VJPKIKotlinx_datetimeLocalDateTime : VJPKIBase <VJPKIKotlinComparable>
- (instancetype)initWithDate:(VJPKIKotlinx_datetimeLocalDate *)date time:(VJPKIKotlinx_datetimeLocalTime *)time __attribute__((swift_name("init(date:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(VJPKIKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VJPKIKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VJPKIKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) VJPKIKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) VJPKIKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) VJPKIKotlinx_datetimeLocalTime *time __attribute__((swift_name("time")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface VJPKIKotlinEnumCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol VJPKIKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol VJPKIKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol VJPKIKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol VJPKIKotlinKClass <VJPKIKotlinKDeclarationContainer, VJPKIKotlinKAnnotatedElement, VJPKIKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface VJPKIKotlinCancellationException : VJPKIKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VJPKIKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface VJPKIKotlinByteIterator : VJPKIBase <VJPKIKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VJPKIByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface VJPKIKotlinIntIterator : VJPKIBase <VJPKIKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VJPKIInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface VJPKIKotlinx_datetimeLocalDate : VJPKIBase <VJPKIKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(VJPKIKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VJPKIKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) VJPKIKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) VJPKIKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime")))
@interface VJPKIKotlinx_datetimeLocalTime : VJPKIBase <VJPKIKotlinComparable>
- (instancetype)initWithHour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinx_datetimeLocalTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VJPKIKotlinx_datetimeLocalTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toMillisecondOfDay __attribute__((swift_name("toMillisecondOfDay()")));
- (int64_t)toNanosecondOfDay __attribute__((swift_name("toNanosecondOfDay()")));
- (int32_t)toSecondOfDay __attribute__((swift_name("toSecondOfDay()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface VJPKIKotlinx_datetimeMonth : VJPKIKotlinEnum<VJPKIKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) VJPKIKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (VJPKIKotlinArray<VJPKIKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface VJPKIKotlinx_datetimeLocalDateTimeCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<VJPKIKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDateTime>))builder __attribute__((swift_name("Format(builder:)")));
- (VJPKIKotlinx_datetimeLocalDateTime *)parseInput:(id)input format:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<VJPKIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface VJPKIKotlinx_datetimeDayOfWeek : VJPKIKotlinEnum<VJPKIKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) VJPKIKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (VJPKIKotlinArray<VJPKIKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface VJPKIKotlinx_datetimeLocalDateCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (id<VJPKIKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (VJPKIKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (VJPKIKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<VJPKIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime.Companion")))
@interface VJPKIKotlinx_datetimeLocalTimeCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinx_datetimeLocalTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<VJPKIKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<VJPKIKotlinx_datetimeDateTimeFormatBuilderWithTime>))builder __attribute__((swift_name("Format(builder:)")));
- (VJPKIKotlinx_datetimeLocalTime *)fromMillisecondOfDayMillisecondOfDay:(int32_t)millisecondOfDay __attribute__((swift_name("fromMillisecondOfDay(millisecondOfDay:)")));
- (VJPKIKotlinx_datetimeLocalTime *)fromNanosecondOfDayNanosecondOfDay:(int64_t)nanosecondOfDay __attribute__((swift_name("fromNanosecondOfDay(nanosecondOfDay:)")));
- (VJPKIKotlinx_datetimeLocalTime *)fromSecondOfDaySecondOfDay:(int32_t)secondOfDay __attribute__((swift_name("fromSecondOfDay(secondOfDay:)")));
- (VJPKIKotlinx_datetimeLocalTime *)parseInput:(id)input format:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<VJPKIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol VJPKIKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<VJPKIKotlinAppendable>)formatToAppendable:(id<VJPKIKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol VJPKIKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDate <VJPKIKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)dateFormat:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayOfMonthPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)")));
- (void)dayOfWeekNames:(VJPKIKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)monthNameNames:(VJPKIKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithTime")))
@protocol VJPKIKotlinx_datetimeDateTimeFormatBuilderWithTime <VJPKIKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)amPmHourPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("amPmHour(padding:)")));
- (void)amPmMarkerAm:(NSString *)am pm:(NSString *)pm __attribute__((swift_name("amPmMarker(am:pm:)")));
- (void)hourPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("hour(padding:)")));
- (void)minutePadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("minute(padding:)")));
- (void)secondPadding:(VJPKIKotlinx_datetimePadding *)padding __attribute__((swift_name("second(padding:)")));
- (void)secondFractionFixedLength:(int32_t)fixedLength __attribute__((swift_name("secondFraction(fixedLength:)")));
- (void)secondFractionMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("secondFraction(minLength:maxLength:)")));
- (void)timeFormat:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("time(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTime")))
@protocol VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDateTime <VJPKIKotlinx_datetimeDateTimeFormatBuilderWithDate, VJPKIKotlinx_datetimeDateTimeFormatBuilderWithTime>
@required
- (void)dateTimeFormat:(id<VJPKIKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTime(format:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol VJPKIKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<VJPKIKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<VJPKIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol VJPKIKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<VJPKIKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<VJPKIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol VJPKIKotlinx_serialization_coreKSerializer <VJPKIKotlinx_serialization_coreSerializationStrategy, VJPKIKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol VJPKIKotlinAppendable
@required
- (id<VJPKIKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<VJPKIKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<VJPKIKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface VJPKIKotlinx_datetimePadding : VJPKIKotlinEnum<VJPKIKotlinx_datetimePadding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VJPKIKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) VJPKIKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) VJPKIKotlinx_datetimePadding *space __attribute__((swift_name("space")));
+ (VJPKIKotlinArray<VJPKIKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VJPKIKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface VJPKIKotlinx_datetimeDayOfWeekNames : VJPKIBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface VJPKIKotlinx_datetimeMonthNames : VJPKIBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VJPKIKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol VJPKIKotlinx_serialization_coreEncoder
@required
- (id<VJPKIKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<VJPKIKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<VJPKIKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<VJPKIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<VJPKIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) VJPKIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol VJPKIKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<VJPKIKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VJPKIKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<VJPKIKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) VJPKIKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol VJPKIKotlinx_serialization_coreDecoder
@required
- (id<VJPKIKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<VJPKIKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (VJPKIKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) VJPKIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface VJPKIKotlinx_datetimeDayOfWeekNamesCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VJPKIKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) VJPKIKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface VJPKIKotlinx_datetimeMonthNamesCompanion : VJPKIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VJPKIKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VJPKIKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) VJPKIKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol VJPKIKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<VJPKIKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VJPKIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VJPKIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) VJPKIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface VJPKIKotlinx_serialization_coreSerializersModule : VJPKIBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<VJPKIKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VJPKIKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<VJPKIKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<VJPKIKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VJPKIKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VJPKIKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<VJPKIKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VJPKIKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol VJPKIKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface VJPKIKotlinx_serialization_coreSerialKind : VJPKIBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol VJPKIKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<VJPKIKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<VJPKIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) VJPKIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface VJPKIKotlinNothing : VJPKIBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol VJPKIKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<VJPKIKotlinKClass>)kClass provider:(id<VJPKIKotlinx_serialization_coreKSerializer> (^)(NSArray<id<VJPKIKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<VJPKIKotlinKClass>)kClass serializer:(id<VJPKIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<VJPKIKotlinKClass>)baseClass actualClass:(id<VJPKIKotlinKClass>)actualClass actualSerializer:(id<VJPKIKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<VJPKIKotlinKClass>)baseClass defaultDeserializerProvider:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<VJPKIKotlinKClass>)baseClass defaultDeserializerProvider:(id<VJPKIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<VJPKIKotlinKClass>)baseClass defaultSerializerProvider:(id<VJPKIKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
