/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2022-12-07.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_Node_XY_24b_H_
#define	_Node_XY_24b_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Offset-B12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Node-XY-24b */
typedef struct Node_XY_24b {
	Offset_B12_t	 x;
	Offset_B12_t	 y;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_XY_24b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node_XY_24b;
extern asn_SEQUENCE_specifics_t asn_SPC_Node_XY_24b_specs_1;
extern asn_TYPE_member_t asn_MBR_Node_XY_24b_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Node_XY_24b_H_ */
#include <asn_internal.h>
