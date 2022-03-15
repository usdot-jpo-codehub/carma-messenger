/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityPath_H_
#define	_MobilityPath_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobilityLocation.h"
#include "MobilityLocationOffsets.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityPath */
typedef struct MobilityPath {
	MobilityLocation_t	 location;
	MobilityLocationOffsets_t	 trajectory;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityPath_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityPath;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityPath_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityPath_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityPath_H_ */
#include <asn_internal.h>
