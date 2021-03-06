// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_ATTRITION_EXPERIMENTS_H_
#define CHROME_COMMON_ATTRITION_EXPERIMENTS_H_
#pragma once

#include "grit/chromium_strings.h"

namespace attrition_experiments {

// A list of all the IDs we use for the attrition experiments.
enum Experiment {
  kEnUs1 = IDS_TRY_TOAST_HEADING,
  kEnUs2 = IDS_TRY_TOAST_HEADING2,
  kEnUs3 = IDS_TRY_TOAST_HEADING3,
  kEnUs4 = IDS_TRY_TOAST_HEADING4,
  kSkype1 = IDS_TRY_TOAST_HEADING_SKYPE,
};

// This is used to match against locale and brands, and represents any
// locale/brand.
const wchar_t kAll[] = L"*";

// A comma-separated list of brand codes that are associated with Skype.
const wchar_t kSkype[] = L"SKPC,SKPG,SKPH,SKPI,SKPL,SKPM,SKPN";

}  // namespace

#endif  // CHROME_COMMON_ATTRITION_EXPERIMENTS_H_
