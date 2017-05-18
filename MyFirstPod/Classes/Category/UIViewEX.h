//
//  UIViewEX.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (EX)

//获取特定类型子View
- (UIView*)descendantOrSelfWithClass:(Class)cls;

// 截图
- (UIImage *)captureImageInRect:(CGRect)rect;

// 截图
- (UIImage *)captureImageInRect:(CGRect)rect opaque:(BOOL)opaque;

// 获取最近的viewController
- (UIViewController *)nearestNavController;

// Easy init (for separator)
-(instancetype)initWithBackgroundColor:(UIColor *)bgColor;

@end


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

@interface UIView (TTCategory)

/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat centerX;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic) CGFloat centerY;

/**
 * Return the x coordinate on the screen.
 */
@property (nonatomic, readonly) CGFloat ttScreenX;

/**
 * Return the y coordinate on the screen.
 */
@property (nonatomic, readonly) CGFloat ttScreenY;

/**
 * Return the x coordinate on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGFloat screenViewX;

/**
 * Return the y coordinate on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGFloat screenViewY;

/**
 * Return the view frame on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGRect screenFrame;

/**
 * Shortcut for frame.origin
 */
@property (nonatomic) CGPoint origin;

/**
 * Shortcut for frame.size
 */
@property (nonatomic) CGSize size;

/**
 * Finds the first descendant view (including this view) that is a member of a particular class.
 */
- (UIView*)descendantOrSelfWithClass:(Class)cls;

/**
 * Finds the first ancestor view (including this view) that is a member of a particular class.
 */
- (UIView*)ancestorOrSelfWithClass:(Class)cls;

/**
 * Removes all subviews.
 */
- (void)removeAllSubviews;

/**
 * Calculates the offset of this view from another view in screen coordinates.
 *
 * otherView should be a parent view of this view.
 */
- (CGPoint)offsetFromView:(UIView*)otherView;

@end

@interface UIView (IOS7Path)

@property (readonly, nonatomic) UIColor *stackedBackgroundColor;

@end


@interface UIView (Util)
/**
 *  init a view
 *
 *  @param x    offset x
 *  @param y    offset y
 *  @param view the super view of self
 *
 *  @return view
 */
-(id)initWithOffsetX:(CGFloat)x offsetY:(CGFloat)y superView:(UIView*)view;

-(void)toCenter:(BOOL)changeX;
-(void)makeCenter;
-(void)makeXCenter;
-(void)makeYCenter;

//- (UIView *)addPixelLine:(CGRect)rect color:(UIColor *)color
- (UIView *)addXLine:(CGRect)rect color:(UIColor *)color;
- (UIView *)addYLine:(CGRect)rect color:(UIColor *)color;

- (UIView *)addOnePixelLine:(CGRect)rect color:(UIColor *)color;
+ (CGFloat)getOnePixelLineHeight;

+ (void)addFadeAnimation:(UIView *)view;

-(UIViewController *)viewController;


/// other
- (void)setCornerRadiusWithTopLeft:(CGFloat)rTopLeft topRight:(CGFloat)rTopRight bottomRight:(CGFloat)rBottomRight bottomLeft:(CGFloat)rBottomLeft width:(CGFloat)width height:(CGFloat)height;


@end



@interface UIViewController (Util)
-(BOOL)isVisible;
@end
