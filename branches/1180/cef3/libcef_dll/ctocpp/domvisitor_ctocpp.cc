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

#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/ctocpp/domvisitor_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefDOMVisitorCToCpp::Visit(CefRefPtr<CefDOMDocument> document) {
  if (CEF_MEMBER_MISSING(struct_, visit))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: document; type: refptr_diff
  DCHECK(document.get());
  if (!document.get())
    return;

  // Execute
  struct_->visit(struct_,
      CefDOMDocumentCppToC::Wrap(document));
}


#ifndef NDEBUG
template<> long CefCToCpp<CefDOMVisitorCToCpp, CefDOMVisitor,
    cef_domvisitor_t>::DebugObjCt = 0;
#endif

