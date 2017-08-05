
#import <Foundation/Foundation.h>

@interface NSDictionary (Extension)


+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonStr;

- (NSString*)jsonString;

@end
