// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefBrowserHost> CefBrowserCToCpp::GetHost() {
  if (CEF_MEMBER_MISSING(struct_, get_host))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_host_t* _retval = struct_->get_host(struct_);

  // Return type: refptr_same
  return CefBrowserHostCToCpp::Wrap(_retval);
}

bool CefBrowserCToCpp::CanGoBack() {
  if (CEF_MEMBER_MISSING(struct_, can_go_back))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->can_go_back(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefBrowserCToCpp::GoBack() {
  if (CEF_MEMBER_MISSING(struct_, go_back))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->go_back(struct_);
}

bool CefBrowserCToCpp::CanGoForward() {
  if (CEF_MEMBER_MISSING(struct_, can_go_forward))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->can_go_forward(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefBrowserCToCpp::GoForward() {
  if (CEF_MEMBER_MISSING(struct_, go_forward))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->go_forward(struct_);
}

bool CefBrowserCToCpp::IsLoading() {
  if (CEF_MEMBER_MISSING(struct_, is_loading))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_loading(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefBrowserCToCpp::Reload() {
  if (CEF_MEMBER_MISSING(struct_, reload))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->reload(struct_);
}

void CefBrowserCToCpp::ReloadIgnoreCache() {
  if (CEF_MEMBER_MISSING(struct_, reload_ignore_cache))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->reload_ignore_cache(struct_);
}

void CefBrowserCToCpp::StopLoad() {
  if (CEF_MEMBER_MISSING(struct_, stop_load))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->stop_load(struct_);
}

int CefBrowserCToCpp::GetIdentifier() {
  if (CEF_MEMBER_MISSING(struct_, get_identifier))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_identifier(struct_);

  // Return type: simple
  return _retval;
}

bool CefBrowserCToCpp::IsSame(CefRefPtr<CefBrowser> that) {
  if (CEF_MEMBER_MISSING(struct_, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = struct_->is_same(struct_,
      CefBrowserCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

bool CefBrowserCToCpp::IsPopup() {
  if (CEF_MEMBER_MISSING(struct_, is_popup))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_popup(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefBrowserCToCpp::HasDocument() {
  if (CEF_MEMBER_MISSING(struct_, has_document))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->has_document(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetMainFrame() {
  if (CEF_MEMBER_MISSING(struct_, get_main_frame))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = struct_->get_main_frame(struct_);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetFocusedFrame() {
  if (CEF_MEMBER_MISSING(struct_, get_focused_frame))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = struct_->get_focused_frame(struct_);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetFrame(int64 identifier) {
  if (CEF_MEMBER_MISSING(struct_, get_frame_byident))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = struct_->get_frame_byident(struct_,
      identifier);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

CefRefPtr<CefFrame> CefBrowserCToCpp::GetFrame(const CefString& name) {
  if (CEF_MEMBER_MISSING(struct_, get_frame))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return NULL;

  // Execute
  cef_frame_t* _retval = struct_->get_frame(struct_,
      name.GetStruct());

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

size_t CefBrowserCToCpp::GetFrameCount() {
  if (CEF_MEMBER_MISSING(struct_, get_frame_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = struct_->get_frame_count(struct_);

  // Return type: simple
  return _retval;
}

void CefBrowserCToCpp::GetFrameIdentifiers(std::vector<int64>& identifiers) {
  if (CEF_MEMBER_MISSING(struct_, get_frame_identifiers))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: identifiers; type: simple_vec_byref
  size_t identifiersSize = identifiers.size();
  size_t identifiersCount = std::max(GetFrameCount(), identifiersSize);
  int64* identifiersList = NULL;
  if (identifiersCount > 0) {
    identifiersList = new int64[identifiersCount];
    DCHECK(identifiersList);
    if (identifiersList) {
       memset(identifiersList, 0, sizeof(int64)*identifiersCount);
    }
    if (identifiersList && identifiersSize > 0) {
      for (size_t i = 0; i < identifiersSize; ++i) {
        identifiersList[i] = identifiers[i];
      }
    }
  }

  // Execute
  struct_->get_frame_identifiers(struct_,
      &identifiersCount,
      identifiersList);

  // Restore param:identifiers; type: simple_vec_byref
  identifiers.clear();
  if (identifiersCount > 0 && identifiersList) {
    for (size_t i = 0; i < identifiersCount; ++i) {
      identifiers.push_back(identifiersList[i]);
    }
    delete [] identifiersList;
  }
}

void CefBrowserCToCpp::GetFrameNames(std::vector<CefString>& names) {
  if (CEF_MEMBER_MISSING(struct_, get_frame_names))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList)
    transfer_string_list_contents(names, namesList);

  // Execute
  struct_->get_frame_names(struct_,
      namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }
}

bool CefBrowserCToCpp::SendProcessMessage(CefProcessId target_process,
    CefRefPtr<CefProcessMessage> message) {
  if (CEF_MEMBER_MISSING(struct_, send_process_message))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: message; type: refptr_same
  DCHECK(message.get());
  if (!message.get())
    return false;

  // Execute
  int _retval = struct_->send_process_message(struct_,
      target_process,
      CefProcessMessageCToCpp::Unwrap(message));

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefBrowserCToCpp, CefBrowser,
    cef_browser_t>::DebugObjCt = 0;
#endif
