/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CARMA-CLOUD"
 * 	found in "cc_traffic_control_messages_asn1.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TrafficControlRequestV01_H_
#define	_TrafficControlRequestV01_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Id64b.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TrafficControlBounds;

/* TrafficControlRequestV01 */
typedef struct TrafficControlRequestV01 {
	Id64b_t	 reqid;
	long	 reqseq;
	long	 scale;
	struct TrafficControlRequestV01__bounds {
		A_SEQUENCE_OF(struct TrafficControlBounds) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bounds;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlRequestV01_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlRequestV01;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficControlRequestV01_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlRequestV01_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TrafficControlBounds.h"

#endif	/* _TrafficControlRequestV01_H_ */
#include <asn_internal.h>
