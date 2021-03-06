// RDVTabBar.h
// RDVTabBarController
//
// Copyright (c) 2013 Robert Dimitrov
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "RDVTabBarItem.h"

@class RDVTabBar;

@protocol RDVTabBarDelegate <NSObject>

- (BOOL)tabBar:(RDVTabBar *)tabBar shouldSelectItemAtIndex:(NSInteger)index;
- (void)tabBar:(RDVTabBar *)tabBar didSelectItemAtIndex:(NSInteger)index;

@end

@interface RDVTabBar : UIView

@property id <RDVTabBarDelegate> delegate;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, weak) RDVTabBarItem *selectedItem;

/**
 * backgroundView stays behind tabBar's items. If you want to add additional views, 
 * add them as subviews of backgroundView
 */
@property (nonatomic, readonly) UIView *backgroundView;

/*
 * contentEdgeInsets can be used to center the items in the middle of the tabBar
 */
@property UIEdgeInsets contentEdgeInsets;

/**
 * minimumContentHeight returns the minimum height of RDVTabBar's items
 */
- (CGFloat)minimumContentHeight;

@end
