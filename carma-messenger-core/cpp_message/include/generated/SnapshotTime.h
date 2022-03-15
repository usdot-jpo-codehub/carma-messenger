/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_SnapshotTime_H_
#define	_SnapshotTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GrossSpeed.h"
#include "SecondOfTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SnapshotTime */
typedef struct SnapshotTime {
	GrossSpeed_t	 speed1;
	SecondOfTime_t	 time1;
	GrossSpeed_t	 speed2;
	SecondOfTime_t	 time2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SnapshotTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SnapshotTime;
extern asn_SEQUENCE_specifics_t asn_SPC_SnapshotTime_specs_1;
extern asn_TYPE_member_t asn_MBR_SnapshotTime_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SnapshotTime_H_ */
#include <asn_internal.h>
