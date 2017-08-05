

#ifndef MyNSString_h
#define MyNSString_h

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

@interface NSString (extension)

- (NSString *)toLower:(NSString *)str;
- (NSString *)toUpper:(NSString *)str;

- (NSString *)lowercaseFirstCharacter;
- (NSString *)uppercaseFirstCharacter;

- (BOOL)isEmpty;

- (NSString *)trim;
- (NSString *)trimTheExtraSpaces;

- (NSString *)md5;
- (NSString *)md5ForUTF16;


- (NSString *)emoji;

- (CGSize)sizeWithMaxWidth:(CGFloat)width andFont:(UIFont *)font;

- (NSString *)originName;
+ (NSString *)currentName;

- (NSString *)firstStringSeparatedByString:(NSString *)separeted;

@end

#endif /* MyNSString_h */
