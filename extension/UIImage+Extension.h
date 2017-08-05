

#import <UIKit/UIKit.h>
@import AVFoundation;

@interface UIImage (extension)

+ (UIImage *)imageWithColor:(UIColor *)color;

+ (UIImage *)videoFramerateWithPath:(NSString *)videoPath;

+ (UIImage *)compressImage:(UIImage *)originImage;

+ (UIImage *)makeArrowImageWithSize:(CGSize)imageSize image:(UIImage *)image isSender:(BOOL)isSender;

+ (UIImage *)addImage:(UIImage *)firstImg toImage:(UIImage *)secondImg;
+ (UIImage *)addImage2:(UIImage *)firstImg toImage:(UIImage *)secondImg;

@end
