// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "../precompiled_libcef.h"
#include "cpptoc/post_data_cpptoc.h"
#include "cpptoc/request_cpptoc.h"
#include "../transfer_util.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_request_t* cef_request_create()
{
  CefRefPtr<CefRequest> impl = CefRequest::CreateRequest();
  if(impl.get())
    return CefRequestCppToC::Wrap(impl);
  return NULL;
}


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_t CEF_CALLBACK request_get_url(struct _cef_request_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  std::wstring urlStr = CefRequestCppToC::Get(self)->GetURL();
  if(!urlStr.empty())
    return cef_string_alloc(urlStr.c_str());
  return NULL;
}

void CEF_CALLBACK request_set_url(struct _cef_request_t* self,
    const wchar_t* url)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring urlStr;
  if(url)
    urlStr = url;
  CefRequestCppToC::Get(self)->SetURL(urlStr);
}

cef_string_t CEF_CALLBACK request_get_method(struct _cef_request_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  std::wstring methodStr = CefRequestCppToC::Get(self)->GetMethod();
  if(!methodStr.empty())
    return cef_string_alloc(methodStr.c_str());
  return NULL;
}

void CEF_CALLBACK request_set_method(struct _cef_request_t* self,
    const wchar_t* method)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring methodStr;
  if(method)
    methodStr = method;
  CefRequestCppToC::Get(self)->SetMethod(methodStr);
}

struct _cef_post_data_t* CEF_CALLBACK request_get_post_data(
    struct _cef_request_t* self)
{
  DCHECK(self);
  if(!self)
    return NULL;

  CefRefPtr<CefPostData> postDataPtr =
      CefRequestCppToC::Get(self)->GetPostData();
  if(!postDataPtr.get())
    return NULL;

  return CefPostDataCppToC::Wrap(postDataPtr);
}

void CEF_CALLBACK request_set_post_data(struct _cef_request_t* self,
    struct _cef_post_data_t* postData)
{
  DCHECK(self);
  if(!self)
    return;

  CefRefPtr<CefPostData> postDataPtr;
  if(postData)
    postDataPtr = CefPostDataCppToC::Unwrap(postData);
  
  CefRequestCppToC::Get(self)->SetPostData(postDataPtr);
}

void CEF_CALLBACK request_get_header_map(struct _cef_request_t* self,
    cef_string_map_t headerMap)
{
  DCHECK(self);
  if(!self)
    return;

  CefRequest::HeaderMap map;
  CefRequestCppToC::Get(self)->GetHeaderMap(map);
  transfer_string_map_contents(map, headerMap);
}

void CEF_CALLBACK request_set_header_map(struct _cef_request_t* self,
    cef_string_map_t headerMap)
{
  DCHECK(self);
  if(!self)
    return;

  CefRequest::HeaderMap map;
  if(headerMap)
    transfer_string_map_contents(headerMap, map);

  CefRequestCppToC::Get(self)->SetHeaderMap(map);
}

void CEF_CALLBACK request_set(struct _cef_request_t* self, const wchar_t* url,
    const wchar_t* method, struct _cef_post_data_t* postData,
    cef_string_map_t headerMap)
{
  DCHECK(self);
  if(!self)
    return;

  std::wstring urlStr, methodStr;
  CefRefPtr<CefPostData> postDataPtr;
  CefRequest::HeaderMap map;

  if(url)
    urlStr = url;
  if(method)
    methodStr = method;  
  if(postData)
    postDataPtr = CefPostDataCppToC::Unwrap(postData);
  if(headerMap)
    transfer_string_map_contents(headerMap, map);

  CefRequestCppToC::Get(self)->Set(urlStr, methodStr, postDataPtr, map);
}


// CONSTRUCTOR - Do not edit by hand.

CefRequestCppToC::CefRequestCppToC(CefRequest* cls)
    : CefCppToC<CefRequestCppToC, CefRequest, cef_request_t>(cls)
{
  struct_.struct_.get_url = request_get_url;
  struct_.struct_.set_url = request_set_url;
  struct_.struct_.get_method = request_get_method;
  struct_.struct_.set_method = request_set_method;
  struct_.struct_.get_post_data = request_get_post_data;
  struct_.struct_.set_post_data = request_set_post_data;
  struct_.struct_.get_header_map = request_get_header_map;
  struct_.struct_.set_header_map = request_set_header_map;
  struct_.struct_.set = request_set;
}

#ifdef _DEBUG
long CefCppToC<CefRequestCppToC, CefRequest, cef_request_t>::DebugObjCt = 0;
#endif

