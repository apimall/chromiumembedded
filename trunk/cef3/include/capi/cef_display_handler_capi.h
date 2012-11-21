// Copyright (c) 2012 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef CEF_INCLUDE_CAPI_CEF_DISPLAY_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_DISPLAY_HANDLER_CAPI_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "include/capi/cef_base_capi.h"


///
// Implement this structure to handle events related to browser display state.
// The functions of this structure will be called on the UI thread.
///
typedef struct _cef_display_handler_t {
  ///
  // Base structure.
  ///
  cef_base_t base;

  ///
  // Called when the loading state has changed.
  ///
  void (CEF_CALLBACK *on_loading_state_change)(
      struct _cef_display_handler_t* self, struct _cef_browser_t* browser,
      int isLoading, int canGoBack, int canGoForward);

  ///
  // Called when a frame's address has changed.
  ///
  void (CEF_CALLBACK *on_address_change)(struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser, struct _cef_frame_t* frame,
      const cef_string_t* url);

  ///
  // Called when the page title changes.
  ///
  void (CEF_CALLBACK *on_title_change)(struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser, const cef_string_t* title);

  ///
  // Called when the browser is about to display a tooltip. |text| contains the
  // text that will be displayed in the tooltip. To handle the display of the
  // tooltip yourself return true (1). Otherwise, you can optionally modify
  // |text| and then return false (0) to allow the browser to display the
  // tooltip. When window rendering is disabled the application is responsible
  // for drawing tooltips and the return value is ignored.
  ///
  int (CEF_CALLBACK *on_tooltip)(struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser, cef_string_t* text);

  ///
  // Called when the browser receives a status message. |text| contains the text
  // that will be displayed in the status message and |type| indicates the
  // status message type.
  ///
  void (CEF_CALLBACK *on_status_message)(struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser, const cef_string_t* value);

  ///
  // Called to display a console message. Return true (1) to stop the message
  // from being output to the console.
  ///
  int (CEF_CALLBACK *on_console_message)(struct _cef_display_handler_t* self,
      struct _cef_browser_t* browser, const cef_string_t* message,
      const cef_string_t* source, int line);
} cef_display_handler_t;


#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_DISPLAY_HANDLER_CAPI_H_
