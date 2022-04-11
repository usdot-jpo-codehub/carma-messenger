/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TrafficControlBounds_H_
#define	_TrafficControlBounds_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EpochMins.h"
#include "Longitude.h"
#include "Latitude.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OffsetPoint;

/* TrafficControlBounds */
typedef struct TrafficControlBounds {
	EpochMins_t	 oldest;
	Longitude_t	 reflon;
	Latitude_t	 reflat;
	struct TrafficControlBounds__offsets {
		A_SEQUENCE_OF(struct OffsetPoint) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} offsets;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlBounds_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlBounds;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficControlBounds_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlBounds_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OffsetPoint.h"

#endif	/* _TrafficControlBounds_H_ */
#include <asn_internal.h>
