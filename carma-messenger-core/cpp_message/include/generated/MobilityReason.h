/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityReason_H_
#define	_MobilityReason_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityReason {
	MobilityReason_unknown	= 0,
	MobilityReason_accepted	= 1,
	MobilityReason_safetyViolation	= 2,
	MobilityReason_insufficientTime	= 3,
	MobilityReason_planConflict	= 4,
	MobilityReason_otherwiseEngaged	= 5,
	MobilityReason_insufficientUrgency	= 6,
	MobilityReason_planUnclear	= 7,
	MobilityReason_other	= 8
	/*
	 * Enumeration is extensible
	 */
} e_MobilityReason;

/* MobilityReason */
typedef long	 MobilityReason_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MobilityReason_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MobilityReason;
extern const asn_INTEGER_specifics_t asn_SPC_MobilityReason_specs_1;
asn_struct_free_f MobilityReason_free;
asn_struct_print_f MobilityReason_print;
asn_constr_check_f MobilityReason_constraint;
ber_type_decoder_f MobilityReason_decode_ber;
der_type_encoder_f MobilityReason_encode_der;
xer_type_decoder_f MobilityReason_decode_xer;
xer_type_encoder_f MobilityReason_encode_xer;
oer_type_decoder_f MobilityReason_decode_oer;
oer_type_encoder_f MobilityReason_encode_oer;
per_type_decoder_f MobilityReason_decode_uper;
per_type_encoder_f MobilityReason_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityReason_H_ */
#include <asn_internal.h>
