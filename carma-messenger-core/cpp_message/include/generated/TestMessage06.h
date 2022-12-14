/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2022-12-07.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_TestMessage06_H_
#define	_TestMessage06_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobilityHeader.h"
#include "EmergencyVehicleResponse.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TestMessage06 */
typedef struct TestMessage06 {
	MobilityHeader_t	 header;
	EmergencyVehicleResponse_t	 body;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestMessage06_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestMessage06;
extern asn_SEQUENCE_specifics_t asn_SPC_TestMessage06_specs_1;
extern asn_TYPE_member_t asn_MBR_TestMessage06_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TestMessage06_H_ */
#include <asn_internal.h>
