
#import "NSDate+Extension.h"

@implementation NSDate (Extension)

+ (NSDate *)dateWithTimeIntervalInMilliSecondSince1970:(double)timeIntervalInMilliSecond
{
    NSDate *ret = nil;
    double timeInterval = timeIntervalInMilliSecond;
    // judge if the argument is in secconds(for former data structure).
    if(timeIntervalInMilliSecond > 140000000000) {
        timeInterval = timeIntervalInMilliSecond / 1000;
    }
    ret = [NSDate dateWithTimeIntervalSince1970:timeInterval];
    return ret;
}

@end
