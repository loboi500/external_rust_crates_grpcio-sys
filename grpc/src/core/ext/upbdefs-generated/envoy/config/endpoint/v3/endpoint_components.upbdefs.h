/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/endpoint/v3/endpoint_components.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_ENDPOINT_V3_ENDPOINT_COMPONENTS_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_ENDPOINT_V3_ENDPOINT_COMPONENTS_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_endpoint_v3_endpoint_components_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_endpoint_v3_Endpoint_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_endpoint_v3_endpoint_components_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.endpoint.v3.Endpoint");
}

UPB_INLINE const upb_msgdef *envoy_config_endpoint_v3_Endpoint_HealthCheckConfig_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_endpoint_v3_endpoint_components_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.endpoint.v3.Endpoint.HealthCheckConfig");
}

UPB_INLINE const upb_msgdef *envoy_config_endpoint_v3_LbEndpoint_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_endpoint_v3_endpoint_components_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.endpoint.v3.LbEndpoint");
}

UPB_INLINE const upb_msgdef *envoy_config_endpoint_v3_LocalityLbEndpoints_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_endpoint_v3_endpoint_components_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.endpoint.v3.LocalityLbEndpoints");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_ENDPOINT_V3_ENDPOINT_COMPONENTS_PROTO_UPBDEFS_H_ */
