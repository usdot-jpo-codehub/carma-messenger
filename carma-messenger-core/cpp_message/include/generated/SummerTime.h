/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_SummerTime_H_
#define	_SummerTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SummerTime {
	SummerTime_notInSummerTime	= 0,
	SummerTime_inSummerTime	= 1
} e_SummerTime;

/* SummerTime */
typedef long	 SummerTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SummerTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SummerTime;
extern const asn_INTEGER_specifics_t asn_SPC_SummerTime_specs_1;
asn_struct_free_f SummerTime_free;
asn_struct_print_f SummerTime_print;
asn_constr_check_f SummerTime_constraint;
ber_type_decoder_f SummerTime_decode_ber;
der_type_encoder_f SummerTime_encode_der;
xer_type_decoder_f SummerTime_decode_xer;
xer_type_encoder_f SummerTime_encode_xer;
oer_type_decoder_f SummerTime_decode_oer;
oer_type_encoder_f SummerTime_encode_oer;
per_type_decoder_f SummerTime_decode_uper;
per_type_encoder_f SummerTime_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SummerTime_H_ */
#include <asn_internal.h>
