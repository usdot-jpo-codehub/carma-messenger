/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_NodeAttributeXYList_H_
#define	_NodeAttributeXYList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeAttributeXY.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NodeAttributeXYList */
typedef struct NodeAttributeXYList {
	A_SEQUENCE_OF(NodeAttributeXY_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeXYList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeXYList;
extern asn_SET_OF_specifics_t asn_SPC_NodeAttributeXYList_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeAttributeXYList_1[1];
extern asn_per_constraints_t asn_PER_type_NodeAttributeXYList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeXYList_H_ */
#include <asn_internal.h>
