// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK load_handler_on_load_start(struct _cef_load_handler_t* self,
    cef_browser_t* browser, cef_frame_t* frame) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadStart(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame));
}

void CEF_CALLBACK load_handler_on_load_end(struct _cef_load_handler_t* self,
    cef_browser_t* browser, cef_frame_t* frame, int httpStatusCode) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadEnd(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      httpStatusCode);
}

void CEF_CALLBACK load_handler_on_load_error(struct _cef_load_handler_t* self,
    cef_browser_t* browser, cef_frame_t* frame,
    enum cef_handler_errorcode_t errorCode, const cef_string_t* errorText,
    const cef_string_t* failedUrl) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;
  // Verify param: failedUrl; type: string_byref_const
  DCHECK(failedUrl);
  if (!failedUrl)
    return;
  // Unverified params: errorText

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadError(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      errorCode,
      CefString(errorText),
      CefString(failedUrl));
}


// CONSTRUCTOR - Do not edit by hand.

CefLoadHandlerCppToC::CefLoadHandlerCppToC(CefLoadHandler* cls)
    : CefCppToC<CefLoadHandlerCppToC, CefLoadHandler, cef_load_handler_t>(cls) {
  struct_.struct_.on_load_start = load_handler_on_load_start;
  struct_.struct_.on_load_end = load_handler_on_load_end;
  struct_.struct_.on_load_error = load_handler_on_load_error;
}

#ifndef NDEBUG
template<> long CefCppToC<CefLoadHandlerCppToC, CefLoadHandler,
    cef_load_handler_t>::DebugObjCt = 0;
#endif

