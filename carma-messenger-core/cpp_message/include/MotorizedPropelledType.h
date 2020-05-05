/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MotorizedPropelledType_H_
#define	_MotorizedPropelledType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MotorizedPropelledType {
	MotorizedPropelledType_unavailable	= 0,
	MotorizedPropelledType_otherTypes	= 1,
	MotorizedPropelledType_wheelChair	= 2,
	MotorizedPropelledType_bicycle	= 3,
	MotorizedPropelledType_scooter	= 4,
	MotorizedPropelledType_selfBalancingDevice	= 5
	/*
	 * Enumeration is extensible
	 */
} e_MotorizedPropelledType;

/* MotorizedPropelledType */
typedef long	 MotorizedPropelledType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MotorizedPropelledType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MotorizedPropelledType;
extern const asn_INTEGER_specifics_t asn_SPC_MotorizedPropelledType_specs_1;
asn_struct_free_f MotorizedPropelledType_free;
asn_struct_print_f MotorizedPropelledType_print;
asn_constr_check_f MotorizedPropelledType_constraint;
ber_type_decoder_f MotorizedPropelledType_decode_ber;
der_type_encoder_f MotorizedPropelledType_encode_der;
xer_type_decoder_f MotorizedPropelledType_decode_xer;
xer_type_encoder_f MotorizedPropelledType_encode_xer;
oer_type_decoder_f MotorizedPropelledType_decode_oer;
oer_type_encoder_f MotorizedPropelledType_encode_oer;
per_type_decoder_f MotorizedPropelledType_decode_uper;
per_type_encoder_f MotorizedPropelledType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MotorizedPropelledType_H_ */
#include <asn_internal.h>
