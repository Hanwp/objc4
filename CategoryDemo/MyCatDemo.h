//
//  MyCatDemo.h
//  objc
//
//  Created by Ban on 2021/8/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyCatDemo : NSObject

- (void)printName;

@end

@interface MyCatDemo (CatOne)

@property (nonatomic, copy) NSString *name;

- (void)printName;

@end

NS_ASSUME_NONNULL_END
