//
//  MyCatDemo.m
//  objc
//
//  Created by Ban on 2021/8/2.
//

#import "MyCatDemo.h"

@implementation MyCatDemo

- (void)printName {
    NSLog(@"MyCatDemo printName");
}

@end

@implementation MyCatDemo (CatOne)

- (void)printName {
    NSLog(@"MyCatDemo(CatOne) printName");
}

@end
