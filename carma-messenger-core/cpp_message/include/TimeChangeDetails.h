/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TimeChangeDetails_H_
#define	_TimeChangeDetails_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRC_TimeMark.h"
#include "TimeIntervalConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeChangeDetails */
typedef struct TimeChangeDetails {
	DSRC_TimeMark_t	*startTime	/* OPTIONAL */;
	DSRC_TimeMark_t	 minEndTime;
	DSRC_TimeMark_t	*maxEndTime	/* OPTIONAL */;
	DSRC_TimeMark_t	*likelyTime	/* OPTIONAL */;
	TimeIntervalConfidence_t	*confidence	/* OPTIONAL */;
	DSRC_TimeMark_t	*nextTime	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeChangeDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeChangeDetails;
extern asn_SEQUENCE_specifics_t asn_SPC_TimeChangeDetails_specs_1;
extern asn_TYPE_member_t asn_MBR_TimeChangeDetails_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _TimeChangeDetails_H_ */
#include <asn_internal.h>
