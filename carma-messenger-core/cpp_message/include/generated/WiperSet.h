/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2022-12-07.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_WiperSet_H_
#define	_WiperSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WiperStatus.h"
#include "WiperRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WiperSet */
typedef struct WiperSet {
	WiperStatus_t	 statusFront;
	WiperRate_t	 rateFront;
	WiperStatus_t	*statusRear;	/* OPTIONAL */
	WiperRate_t	*rateRear;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WiperSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WiperSet;
extern asn_SEQUENCE_specifics_t asn_SPC_WiperSet_specs_1;
extern asn_TYPE_member_t asn_MBR_WiperSet_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _WiperSet_H_ */
#include <asn_internal.h>
