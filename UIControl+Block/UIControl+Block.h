//
//  UIControl+Block.h
//  CTools
//
//  Created by Chance on 15/9/9.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (Block)

/**
    添加事件
 */
- (void)addControlEvents:(UIControlEvents)controlEvents withAction:(void(^)(id sender))action;

/**
    移除事件
 */
- (void)removeControlEvents:(UIControlEvents)controlEvents;

/**
    添加事件 for key
 */
- (void)addControlEvents:(UIControlEvents)controlEvents withAction:(void(^)(id sender))action forKey:(NSString *)key;

/**
    移除事件 for key
 */
- (void)removeControlEvents:(UIControlEvents)controlEvents forKey:(NSString *)key;

/**
    添加点击事件 UIControlEventTouchUpInside
 */
- (void)addAction:(void(^)(id sender))action;

/**
    移除点击事件 UIControlEventTouchUpInside
 */
- (void)removeAction;

/**
    移除全部事件
 */
- (void)removeAllActions;

@end
