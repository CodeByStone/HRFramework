//
//  HRFramework.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for HRFramework.
FOUNDATION_EXPORT double HRFrameworkVersionNumber;

//! Project version string for HRFramework.
FOUNDATION_EXPORT const unsigned char HRFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HRFramework/PublicHeader.h>


#ifdef DEBUG
    #define DMLog(...) NSLog(@"%d, %s, %@", __LINE__, __FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#else
    #define DMLog(...) do { } while (0)
#endif

// UIScreen width.
#define HR_ScreenWidth   [UIScreen mainScreen].bounds.size.width
// UIScreen height.
#define HR_ScreenHeight  [UIScreen mainScreen].bounds.size.height

/// iPhone X
#define HR_iPhoneX (HR_ScreenWidth == 375.f && HR_ScreenHeight == 812.f ? YES : NO)
/// Status bar height.
#define HR_StatusBarHeight (HR_iPhoneX ? 44.f : 20.f)
/// Navigation bar height.
#define HR_NavigationBarHeight 44.f
/// Tabbar height.
#define HR_TabbarHeight (HR_iPhoneX ? (49.f + 34.f) : 49.f)
/// Tabbar safe bottom margin.
#define HR_TabbarSafeBottomMargin (HR_iPhoneX ? 34.f : 0.f)
/// Status bar & navigation bar height.
#define HR_StatusBarAndNavigationBarHeight (HR_iPhoneX ? 88.f : 64.f)
/// View safeAreaInsets
#define HR_ViewSafeAreInsets(view) ({ UIEdgeInsets insets; if(@available(iOS 11.0, *)) { insets = view.safeAreaInsets; } else { insets = UIEdgeInsetsZero; } insets; })


#import <HRFramework/UIActionSheet+Blocks.h>
#import <HRFramework/UIAlertView+Blocks.h>
#import <HRFramework/UIPickerView+Blocks.h>

#import <HRFramework/NSArray+HRExtensions.h>
#import <HRFramework/NSDate+HRExtensions.h>
#import <HRFramework/NSDictionary+HRExtensions.h>
#import <HRFramework/NSString+HRExtensions.h>
#import <HRFramework/UIButton+HRExtensions.h>
#import <HRFramework/UIColor+HRExtensions.h>
#import <HRFramework/UIImage+HRExtensions.h>
#import <HRFramework/UILabel+HRExtensions.h>

#import <HRFramework/HRAlertViewStylePlainTextInput.h>
#import <HRFramework/HRCycleScrollView.h>
#import <HRFramework/HRImagePickerController.h>
#import <HRFramework/HRLazyScrollView.h>
#import <HRFramework/HRNavigationController.h>
#import <HRFramework/HROutputView.h>
#import <HRFramework/HRTabBarController.h>
#import <HRFramework/HRTableView.h>
#import <HRFramework/HRTextField.h>
#import <HRFramework/HRTextView.h>
#import <HRFramework/HRWebView.h>

#import <HRFramework/HRCache.h>
#import <HRFramework/HRNetworking.h>
#import <HRFramework/HRSkinManager.h>

#import <HRFramework/HRFileUtil.h>
#import <HRFramework/HRSysAuthorityUtil.h>
#import <HRFramework/HRUserDefaultsUtil.h>
#import <HRFramework/HRValidateUtil.h>

