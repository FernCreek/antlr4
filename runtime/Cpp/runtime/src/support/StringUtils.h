/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include "antlr4-common.h"

namespace antlrcpp {
  void replaceAll(std::string& str, const std::string& from, const std::string& to);

  // string <-> wstring conversion (UTF-16), e.g. for use with Window's wide APIs.
  ANTLR4CPP_PUBLIC std::string ws2s(const std::wstring &wstr);
  ANTLR4CPP_PUBLIC std::wstring s2ws(const std::string &str);
}
