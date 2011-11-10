# Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
# reserved. Use of this source code is governed by a BSD-style license that
# can be found in the LICENSE file.

{
  'variables': {
    'includes_common': [
      'include/cef.h',
      'include/cef_capi.h',
      'include/cef_nplugin.h',
      'include/cef_nplugin_capi.h',
      'include/cef_runnable.h',
      'include/cef_wrapper.h',
      'include/internal/cef_build.h',
      'include/internal/cef_export.h',
      'include/internal/cef_nplugin_types.h',
      'include/internal/cef_ptr.h',
      'include/internal/cef_string.h',
      'include/internal/cef_string_list.h',
      'include/internal/cef_string_map.h',
      'include/internal/cef_string_multimap.h',
      'include/internal/cef_string_types.h',
      'include/internal/cef_string_wrappers.h',
      'include/internal/cef_time.h',
      'include/internal/cef_tuple.h',
      'include/internal/cef_types.h',
      'include/internal/cef_types_wrappers.h',
    ],
    'includes_win': [
      'include/internal/cef_types_win.h',
      'include/internal/cef_win.h',
    ],
    'includes_mac': [
      'include/cef_application_mac.h',
      'include/internal/cef_mac.h',
      'include/internal/cef_types_mac.h',
    ],
    'includes_linux': [
      'include/internal/cef_linux.h',
      'include/internal/cef_types_linux.h',
    ],
    'cefclient_sources_common': [
      'tests/cefclient/binding_test.cpp',
      'tests/cefclient/binding_test.h',
      'tests/cefclient/cefclient.cpp',
      'tests/cefclient/cefclient.h',
      'tests/cefclient/client_handler.cpp',
      'tests/cefclient/client_handler.h',
      'tests/cefclient/client_popup_handler.cpp',
      'tests/cefclient/client_popup_handler.h',
      'tests/cefclient/download_handler.cpp',
      'tests/cefclient/download_handler.h',
      'tests/cefclient/extension_test.cpp',
      'tests/cefclient/extension_test.h',
      'tests/cefclient/res/domaccess.html',
      'tests/cefclient/res/extensionperf.html',
      'tests/cefclient/res/localstorage.html',
      'tests/cefclient/res/xmlhttprequest.html',
      'tests/cefclient/resource_util.h',
      'tests/cefclient/scheme_test.cpp',
      'tests/cefclient/scheme_test.h',
      'tests/cefclient/string_util.cpp',
      'tests/cefclient/string_util.h',
      'tests/cefclient/util.h',
    ],
    'cefclient_sources_win': [
      'tests/cefclient/cefclient.rc',
      'tests/cefclient/cefclient_win.cpp',
      'tests/cefclient/client_handler_win.cpp',
      'tests/cefclient/clientplugin.cpp',
      'tests/cefclient/clientplugin.h',
      'tests/cefclient/osrplugin.cpp',
      'tests/cefclient/osrplugin.h',
      'tests/cefclient/osrplugin_test.cpp',
      'tests/cefclient/osrplugin_test.h',
      'tests/cefclient/plugin_test.cpp',
      'tests/cefclient/plugin_test.h',
      'tests/cefclient/Resource.h',
      'tests/cefclient/res/cefclient.ico',
      'tests/cefclient/res/logo.png',
      'tests/cefclient/res/logoball.png',
      'tests/cefclient/res/modaldialog.html',
      'tests/cefclient/res/modalmain.html',
      'tests/cefclient/res/osrplugin.html',
      'tests/cefclient/res/small.ico',
      'tests/cefclient/res/transparency.html',
      'tests/cefclient/res/uiplugin.html',
      'tests/cefclient/resource_util_win.cpp',
      'tests/cefclient/uiplugin.cpp',
      'tests/cefclient/uiplugin.h',
      'tests/cefclient/uiplugin_test.cpp',
      'tests/cefclient/uiplugin_test.h',
    ],
    'cefclient_sources_mac': [
      'tests/cefclient/cefclient_mac.mm',
      'tests/cefclient/client_handler_mac.mm',
      'tests/cefclient/resource_util_mac.mm',
      'tests/cefclient/res/logo.png',
    ],
    'cefclient_bundle_resources_mac': [
      'tests/cefclient/mac/cefclient.icns',
      'tests/cefclient/mac/data/',
      'tests/cefclient/mac/English.lproj/InfoPlist.strings',
      'tests/cefclient/mac/English.lproj/MainMenu.xib',
      'tests/cefclient/mac/Info.plist',
      'tests/cefclient/res/domaccess.html',
      'tests/cefclient/res/extensionperf.html',
      'tests/cefclient/res/localstorage.html',
      'tests/cefclient/res/logo.png',
      'tests/cefclient/res/xmlhttprequest.html',
    ],
    'cefclient_sources_linux': [
      'tests/cefclient/cefclient_gtk.cpp',
      'tests/cefclient/client_handler_gtk.cpp',
      'tests/cefclient/resource_util_linux.cpp',
    ],
    'libcef_dll_wrapper_sources_common': [
      'libcef_dll/cef_logging.h',
      'libcef_dll/cpptoc/base_cpptoc.h',
      'libcef_dll/cpptoc/client_cpptoc.cc',
      'libcef_dll/cpptoc/client_cpptoc.h',
      'libcef_dll/cpptoc/content_filter_cpptoc.cc',
      'libcef_dll/cpptoc/content_filter_cpptoc.h',
      'libcef_dll/cpptoc/cookie_visitor_cpptoc.cc',
      'libcef_dll/cpptoc/cookie_visitor_cpptoc.h',
      'libcef_dll/cpptoc/cpptoc.h',
      'libcef_dll/cpptoc/display_handler_cpptoc.cc',
      'libcef_dll/cpptoc/display_handler_cpptoc.h',
      'libcef_dll/cpptoc/domevent_listener_cpptoc.cc',
      'libcef_dll/cpptoc/domevent_listener_cpptoc.h',
      'libcef_dll/cpptoc/domvisitor_cpptoc.cc',
      'libcef_dll/cpptoc/domvisitor_cpptoc.h',
      'libcef_dll/cpptoc/download_handler_cpptoc.cc',
      'libcef_dll/cpptoc/download_handler_cpptoc.h',
      'libcef_dll/cpptoc/drag_handler_cpptoc.cc',
      'libcef_dll/cpptoc/drag_handler_cpptoc.h',
      'libcef_dll/cpptoc/find_handler_cpptoc.cc',
      'libcef_dll/cpptoc/find_handler_cpptoc.h',
      'libcef_dll/cpptoc/focus_handler_cpptoc.cc',
      'libcef_dll/cpptoc/focus_handler_cpptoc.h',
      'libcef_dll/cpptoc/jsbinding_handler_cpptoc.cc',
      'libcef_dll/cpptoc/jsbinding_handler_cpptoc.h',
      'libcef_dll/cpptoc/jsdialog_handler_cpptoc.cc',
      'libcef_dll/cpptoc/jsdialog_handler_cpptoc.h',
      'libcef_dll/cpptoc/keyboard_handler_cpptoc.cc',
      'libcef_dll/cpptoc/keyboard_handler_cpptoc.h',
      'libcef_dll/cpptoc/life_span_handler_cpptoc.cc',
      'libcef_dll/cpptoc/life_span_handler_cpptoc.h',
      'libcef_dll/cpptoc/load_handler_cpptoc.cc',
      'libcef_dll/cpptoc/load_handler_cpptoc.h',
      'libcef_dll/cpptoc/menu_handler_cpptoc.cc',
      'libcef_dll/cpptoc/menu_handler_cpptoc.h',
      'libcef_dll/cpptoc/print_handler_cpptoc.cc',
      'libcef_dll/cpptoc/print_handler_cpptoc.h',
      'libcef_dll/cpptoc/read_handler_cpptoc.cc',
      'libcef_dll/cpptoc/read_handler_cpptoc.h',
      'libcef_dll/cpptoc/render_handler_cpptoc.cc',
      'libcef_dll/cpptoc/render_handler_cpptoc.h',
      'libcef_dll/cpptoc/request_handler_cpptoc.cc',
      'libcef_dll/cpptoc/request_handler_cpptoc.h',
      'libcef_dll/cpptoc/scheme_handler_cpptoc.cc',
      'libcef_dll/cpptoc/scheme_handler_cpptoc.h',
      'libcef_dll/cpptoc/scheme_handler_factory_cpptoc.cc',
      'libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h',
      'libcef_dll/cpptoc/storage_visitor_cpptoc.cc',
      'libcef_dll/cpptoc/storage_visitor_cpptoc.h',
      'libcef_dll/cpptoc/task_cpptoc.cc',
      'libcef_dll/cpptoc/task_cpptoc.h',
      'libcef_dll/cpptoc/v8accessor_cpptoc.cc',
      'libcef_dll/cpptoc/v8accessor_cpptoc.h',
      'libcef_dll/cpptoc/v8handler_cpptoc.cc',
      'libcef_dll/cpptoc/v8handler_cpptoc.h',
      'libcef_dll/cpptoc/web_urlrequest_client_cpptoc.cc',
      'libcef_dll/cpptoc/web_urlrequest_client_cpptoc.h',
      'libcef_dll/cpptoc/write_handler_cpptoc.cc',
      'libcef_dll/cpptoc/write_handler_cpptoc.h',
      'libcef_dll/ctocpp/base_ctocpp.h',
      'libcef_dll/ctocpp/browser_ctocpp.cc',
      'libcef_dll/ctocpp/browser_ctocpp.h',
      'libcef_dll/ctocpp/ctocpp.h',
      'libcef_dll/ctocpp/domdocument_ctocpp.cc',
      'libcef_dll/ctocpp/domdocument_ctocpp.h',
      'libcef_dll/ctocpp/domevent_ctocpp.cc',
      'libcef_dll/ctocpp/domevent_ctocpp.h',
      'libcef_dll/ctocpp/domnode_ctocpp.cc',
      'libcef_dll/ctocpp/domnode_ctocpp.h',
      'libcef_dll/ctocpp/drag_data_ctocpp.cc',
      'libcef_dll/ctocpp/drag_data_ctocpp.h',
      'libcef_dll/ctocpp/frame_ctocpp.cc',
      'libcef_dll/ctocpp/frame_ctocpp.h',
      'libcef_dll/ctocpp/post_data_ctocpp.cc',
      'libcef_dll/ctocpp/post_data_ctocpp.h',
      'libcef_dll/ctocpp/post_data_element_ctocpp.cc',
      'libcef_dll/ctocpp/post_data_element_ctocpp.h',
      'libcef_dll/ctocpp/request_ctocpp.cc',
      'libcef_dll/ctocpp/request_ctocpp.h',
      'libcef_dll/ctocpp/response_ctocpp.cc',
      'libcef_dll/ctocpp/response_ctocpp.h',
      'libcef_dll/ctocpp/scheme_handler_callback_ctocpp.cc',
      'libcef_dll/ctocpp/scheme_handler_callback_ctocpp.h',
      'libcef_dll/ctocpp/stream_reader_ctocpp.cc',
      'libcef_dll/ctocpp/stream_reader_ctocpp.h',
      'libcef_dll/ctocpp/stream_writer_ctocpp.cc',
      'libcef_dll/ctocpp/stream_writer_ctocpp.h',
      'libcef_dll/ctocpp/v8context_ctocpp.cc',
      'libcef_dll/ctocpp/v8context_ctocpp.h',
      'libcef_dll/ctocpp/v8exception_ctocpp.cc',
      'libcef_dll/ctocpp/v8exception_ctocpp.h',
      'libcef_dll/ctocpp/v8value_ctocpp.cc',
      'libcef_dll/ctocpp/v8value_ctocpp.h',
      'libcef_dll/ctocpp/web_urlrequest_ctocpp.cc',
      'libcef_dll/ctocpp/web_urlrequest_ctocpp.h',
      'libcef_dll/ctocpp/xml_reader_ctocpp.cc',
      'libcef_dll/ctocpp/xml_reader_ctocpp.h',
      'libcef_dll/ctocpp/zip_reader_ctocpp.cc',
      'libcef_dll/ctocpp/zip_reader_ctocpp.h',
      'libcef_dll/transfer_util.cpp',
      'libcef_dll/transfer_util.h',
      'libcef_dll/wrapper/cef_byte_read_handler.cc',
      'libcef_dll/wrapper/cef_xml_object.cc',
      'libcef_dll/wrapper/cef_zip_archive.cc',
      'libcef_dll/wrapper/libcef_dll_wrapper.cc',
    ],
  },
}
