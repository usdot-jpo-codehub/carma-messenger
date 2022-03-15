/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_NMEAcorrections_H_
#define	_NMEAcorrections_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "NMEA-Revision.h"
#include "NMEA-MsgType.h"
#include "ObjectCount.h"
#include "NMEA-Payload.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegionalExtension;

/* NMEAcorrections */
typedef struct NMEAcorrections {
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	NMEA_Revision_t	*rev	/* OPTIONAL */;
	NMEA_MsgType_t	*msg	/* OPTIONAL */;
	ObjectCount_t	*wdCount	/* OPTIONAL */;
	NMEA_Payload_t	 payload;
	struct NMEAcorrections__regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NMEAcorrections_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NMEAcorrections;
extern asn_SEQUENCE_specifics_t asn_SPC_NMEAcorrections_specs_1;
extern asn_TYPE_member_t asn_MBR_NMEAcorrections_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _NMEAcorrections_H_ */
#include <asn_internal.h>
