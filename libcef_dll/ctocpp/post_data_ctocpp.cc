// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "../precompiled_libcef.h"
#include "ctocpp/post_data_ctocpp.h"
#include "ctocpp/post_data_element_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefPostData> CefPostData::CreatePostData()
{
  cef_post_data_t* impl = cef_post_data_create();
  if(impl)
    return CefPostDataCToCpp::Wrap(impl);
  return NULL;
}


// VIRTUAL METHODS - Body may be edited by hand.

size_t CefPostDataCToCpp::GetElementCount()
{
  if(CEF_MEMBER_MISSING(struct_, get_element_count))
    return 0;

  return struct_->get_element_count(struct_);
}

void CefPostDataCToCpp::GetElements(ElementVector& elements)
{
  if(CEF_MEMBER_MISSING(struct_, get_elements))
    return;

  int count = (int)GetElementCount();

  cef_post_data_element_t* structPtr;
  for(int i = 0; i < count; ++i) {
    structPtr = struct_->get_elements(struct_, i);
    if(structPtr)
      elements.push_back(CefPostDataElementCToCpp::Wrap(structPtr));
  }
}

bool CefPostDataCToCpp::RemoveElement(CefRefPtr<CefPostDataElement> element)
{
  DCHECK(element.get());
  if(CEF_MEMBER_MISSING(struct_, remove_element) || !element.get())
    return false;

  return struct_->remove_element(struct_,
      CefPostDataElementCToCpp::Unwrap(element));
}

bool CefPostDataCToCpp::AddElement(CefRefPtr<CefPostDataElement> element)
{
  DCHECK(element.get());
  if(CEF_MEMBER_MISSING(struct_, add_element) || !element.get())
    return false;

  return struct_->add_element(struct_,
      CefPostDataElementCToCpp::Unwrap(element));
}

void CefPostDataCToCpp::RemoveElements()
{
  if(CEF_MEMBER_MISSING(struct_, remove_elements))
    return;

  return struct_->remove_elements(struct_);
}


#ifdef _DEBUG
long CefCToCpp<CefPostDataCToCpp, CefPostData, cef_post_data_t>::DebugObjCt = 0;
#endif

