/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_LaneAttributes_Bike_H_
#define	_LaneAttributes_Bike_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneAttributes_Bike {
	LaneAttributes_Bike_bikeRevocableLane	= 0,
	LaneAttributes_Bike_pedestrianUseAllowed	= 1,
	LaneAttributes_Bike_isBikeFlyOverLane	= 2,
	LaneAttributes_Bike_fixedCycleTime	= 3,
	LaneAttributes_Bike_biDirectionalCycleTimes	= 4,
	LaneAttributes_Bike_isolatedByBarrier	= 5,
	LaneAttributes_Bike_unsignalizedSegmentsPresent	= 6
} e_LaneAttributes_Bike;

/* LaneAttributes-Bike */
typedef BIT_STRING_t	 LaneAttributes_Bike_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LaneAttributes_Bike_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_Bike;
asn_struct_free_f LaneAttributes_Bike_free;
asn_struct_print_f LaneAttributes_Bike_print;
asn_constr_check_f LaneAttributes_Bike_constraint;
ber_type_decoder_f LaneAttributes_Bike_decode_ber;
der_type_encoder_f LaneAttributes_Bike_encode_der;
xer_type_decoder_f LaneAttributes_Bike_decode_xer;
xer_type_encoder_f LaneAttributes_Bike_encode_xer;
oer_type_decoder_f LaneAttributes_Bike_decode_oer;
oer_type_encoder_f LaneAttributes_Bike_encode_oer;
per_type_decoder_f LaneAttributes_Bike_decode_uper;
per_type_encoder_f LaneAttributes_Bike_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_Bike_H_ */
#include <asn_internal.h>
