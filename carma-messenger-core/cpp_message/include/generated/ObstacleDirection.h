/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ObstacleDirection_H_
#define	_ObstacleDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRC_Angle.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ObstacleDirection */
typedef DSRC_Angle_t	 ObstacleDirection_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ObstacleDirection_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ObstacleDirection;
asn_struct_free_f ObstacleDirection_free;
asn_struct_print_f ObstacleDirection_print;
asn_constr_check_f ObstacleDirection_constraint;
ber_type_decoder_f ObstacleDirection_decode_ber;
der_type_encoder_f ObstacleDirection_encode_der;
xer_type_decoder_f ObstacleDirection_decode_xer;
xer_type_encoder_f ObstacleDirection_encode_xer;
oer_type_decoder_f ObstacleDirection_decode_oer;
oer_type_encoder_f ObstacleDirection_encode_oer;
per_type_decoder_f ObstacleDirection_decode_uper;
per_type_encoder_f ObstacleDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ObstacleDirection_H_ */
#include <asn_internal.h>
