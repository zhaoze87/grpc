/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/collection_entry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "udpa/core/v1/collection_entry.upbdefs.h"

extern upb_def_init google_protobuf_any_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_core_v1_resource_locator_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout udpa_core_v1_CollectionEntry_msginit;
extern const upb_msglayout udpa_core_v1_CollectionEntry_InlineEntry_msginit;

static const upb_msglayout *layouts[2] = {
  &udpa_core_v1_CollectionEntry_msginit,
  &udpa_core_v1_CollectionEntry_InlineEntry_msginit,
};

static const char descriptor[571] = {'\n', '#', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'c', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 
'_', 'e', 'n', 't', 'r', 'y', '.', 'p', 'r', 'o', 't', 'o', '\022', '\014', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', 
'1', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 'r', 
'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 
't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 
'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 'l', 'o', 'c', 'a', 't', 'o', 'r', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 
'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\305', '\002', '\n', 
'\017', 'C', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'E', 'n', 't', 'r', 'y', '\022', '9', '\n', '\007', 'l', 'o', 'c', 'a', 't', 
'o', 'r', '\030', '\001', ' ', '\001', '(', '\013', '2', '\035', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'R', 
'e', 's', 'o', 'u', 'r', 'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', 'H', '\000', 'R', '\007', 'l', 'o', 'c', 'a', 't', 'o', 'r', 
'\022', 'N', '\n', '\014', 'i', 'n', 'l', 'i', 'n', 'e', '_', 'e', 'n', 't', 'r', 'y', '\030', '\002', ' ', '\001', '(', '\013', '2', ')', '.', 
'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '.', 'C', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'E', 'n', 
't', 'r', 'y', '.', 'I', 'n', 'l', 'i', 'n', 'e', 'E', 'n', 't', 'r', 'y', 'H', '\000', 'R', '\013', 'i', 'n', 'l', 'i', 'n', 'e', 
'E', 'n', 't', 'r', 'y', '\032', '\213', '\001', '\n', '\013', 'I', 'n', 'l', 'i', 'n', 'e', 'E', 'n', 't', 'r', 'y', '\022', '0', '\n', '\004', 
'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\034', '\372', 'B', '\031', 'r', '\027', '2', '\025', '^', '[', '0', '-', '9', 'a', 
'-', 'z', 'A', '-', 'Z', '_', '\\', '-', '\\', '.', '~', ':', ']', '+', '$', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '\030', '\n', '\007', 
'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\007', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\022', '0', '\n', 
'\010', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '\030', '\003', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'R', '\010', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'B', '\031', '\n', 
'\022', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'r', '\022', '\003', '\370', 'B', '\001', 'B', 
'>', '\n', '\034', 'c', 'o', 'm', '.', 'g', 'i', 't', 'h', 'u', 'b', '.', 'u', 'd', 'p', 'a', '.', 'u', 'd', 'p', 'a', '.', 'c', 
'o', 'r', 'e', '.', 'v', '1', 'B', '\024', 'C', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'E', 'n', 't', 'r', 'y', 'P', 'r', 
'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\010', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &google_protobuf_any_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_core_v1_resource_locator_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init udpa_core_v1_collection_entry_proto_upbdefinit = {
  deps,
  layouts,
  "udpa/core/v1/collection_entry.proto",
  UPB_STRVIEW_INIT(descriptor, 571)
};
