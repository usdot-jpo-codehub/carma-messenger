/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_PersonalCrossingRequest_H_
#define	_PersonalCrossingRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PersonalCrossingRequest */
typedef BOOLEAN_t	 PersonalCrossingRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonalCrossingRequest;
asn_struct_free_f PersonalCrossingRequest_free;
asn_struct_print_f PersonalCrossingRequest_print;
asn_constr_check_f PersonalCrossingRequest_constraint;
ber_type_decoder_f PersonalCrossingRequest_decode_ber;
der_type_encoder_f PersonalCrossingRequest_encode_der;
xer_type_decoder_f PersonalCrossingRequest_decode_xer;
xer_type_encoder_f PersonalCrossingRequest_encode_xer;
oer_type_decoder_f PersonalCrossingRequest_decode_oer;
oer_type_encoder_f PersonalCrossingRequest_encode_oer;
per_type_decoder_f PersonalCrossingRequest_decode_uper;
per_type_encoder_f PersonalCrossingRequest_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PersonalCrossingRequest_H_ */
#include <asn_internal.h>
