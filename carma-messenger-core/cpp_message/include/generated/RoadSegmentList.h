/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_RoadSegmentList_H_
#define	_RoadSegmentList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RoadSegment;

/* RoadSegmentList */
typedef struct RoadSegmentList {
	A_SEQUENCE_OF(struct RoadSegment) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSegmentList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSegmentList;
extern asn_SET_OF_specifics_t asn_SPC_RoadSegmentList_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadSegmentList_1[1];
extern asn_per_constraints_t asn_PER_type_RoadSegmentList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RoadSegment.h"

#endif	/* _RoadSegmentList_H_ */
#include <asn_internal.h>
