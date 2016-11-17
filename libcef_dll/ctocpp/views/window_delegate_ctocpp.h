// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_WINDOW_DELEGATE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_WINDOW_DELEGATE_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/views/cef_window_delegate.h"
#include "include/capi/views/cef_window_delegate_capi.h"
#include "include/views/cef_window.h"
#include "include/capi/views/cef_window_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefWindowDelegateCToCpp
    : public CefCToCpp<CefWindowDelegateCToCpp, CefWindowDelegate,
        cef_window_delegate_t> {
 public:
  CefWindowDelegateCToCpp();

  // CefWindowDelegate methods.
  void OnWindowCreated(CefRefPtr<CefWindow> window) override;
  void OnWindowDestroyed(CefRefPtr<CefWindow> window) override;
  bool IsFrameless(CefRefPtr<CefWindow> window) override;
  bool CanResize(CefRefPtr<CefWindow> window) override;
  bool CanMaximize(CefRefPtr<CefWindow> window) override;
  bool CanMinimize(CefRefPtr<CefWindow> window) override;
  bool CanClose(CefRefPtr<CefWindow> window) override;

  // CefPanelDelegate methods.

  // CefViewDelegate methods.
  CefSize GetPreferredSize(CefRefPtr<CefView> view) override;
  CefSize GetMinimumSize(CefRefPtr<CefView> view) override;
  CefSize GetMaximumSize(CefRefPtr<CefView> view) override;
  int GetHeightForWidth(CefRefPtr<CefView> view, int width) override;
  void OnParentViewChanged(CefRefPtr<CefView> view, bool added,
      CefRefPtr<CefView> parent) override;
  void OnChildViewChanged(CefRefPtr<CefView> view, bool added,
      CefRefPtr<CefView> child) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_WINDOW_DELEGATE_CTOCPP_H_
