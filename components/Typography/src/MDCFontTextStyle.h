// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

/**
 Material font text styles

 These styles are defined in:
 https://material.io/go/design-typography
 This enumeration is a set of semantic descriptions intended to describe the fonts returned by
 + [UIFont mdc_preferredFontForMaterialTextStyle:]
 + [UIFontDescriptor mdc_preferredFontDescriptorForMaterialTextStyle:]
 */
API_DEPRECATED("Follow go/material-ios-dynamic-type#custom-fonts instead.",
               ios(11, API_TO_BE_DEPRECATED))
typedef NS_ENUM(NSInteger, MDCFontTextStyle) {
  MDCFontTextStyleBody1,
  MDCFontTextStyleBody2,
  MDCFontTextStyleCaption,
  MDCFontTextStyleHeadline,
  MDCFontTextStyleSubheadline,
  MDCFontTextStyleTitle,
  MDCFontTextStyleDisplay1,
  MDCFontTextStyleDisplay2,
  MDCFontTextStyleDisplay3,
  MDCFontTextStyleDisplay4,
  MDCFontTextStyleButton,
};
