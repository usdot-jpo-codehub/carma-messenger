/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2022-12-07.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_RainSensor_H_
#define	_RainSensor_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RainSensor {
	RainSensor_none	= 0,
	RainSensor_lightMist	= 1,
	RainSensor_heavyMist	= 2,
	RainSensor_lightRainOrDrizzle	= 3,
	RainSensor_rain	= 4,
	RainSensor_moderateRain	= 5,
	RainSensor_heavyRain	= 6,
	RainSensor_heavyDownpour	= 7
} e_RainSensor;

/* RainSensor */
typedef long	 RainSensor_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RainSensor_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RainSensor;
extern const asn_INTEGER_specifics_t asn_SPC_RainSensor_specs_1;
asn_struct_free_f RainSensor_free;
asn_struct_print_f RainSensor_print;
asn_constr_check_f RainSensor_constraint;
ber_type_decoder_f RainSensor_decode_ber;
der_type_encoder_f RainSensor_encode_der;
xer_type_decoder_f RainSensor_decode_xer;
xer_type_encoder_f RainSensor_encode_xer;
oer_type_decoder_f RainSensor_decode_oer;
oer_type_encoder_f RainSensor_encode_oer;
per_type_decoder_f RainSensor_decode_uper;
per_type_encoder_f RainSensor_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RainSensor_H_ */
#include <asn_internal.h>
