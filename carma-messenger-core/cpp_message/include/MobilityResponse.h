/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityResponse_H_
#define	_MobilityResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobilityUrgency.h"
#include "MobilityResponseFlag.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityResponse */
typedef struct MobilityResponse {
	MobilityUrgency_t	 urgency;
	MobilityResponseFlag_t	 isAccepted;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityResponse_H_ */
#include <asn_internal.h>
