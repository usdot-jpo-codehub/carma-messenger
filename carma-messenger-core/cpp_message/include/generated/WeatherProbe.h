/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_WeatherProbe_H_
#define	_WeatherProbe_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AmbientAirTemperature.h"
#include "AmbientAirPressure.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WiperSet;

/* WeatherProbe */
typedef struct WeatherProbe {
	AmbientAirTemperature_t	*airTemp	/* OPTIONAL */;
	AmbientAirPressure_t	*airPressure	/* OPTIONAL */;
	struct WiperSet	*rainRates	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WeatherProbe_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WeatherProbe;
extern asn_SEQUENCE_specifics_t asn_SPC_WeatherProbe_specs_1;
extern asn_TYPE_member_t asn_MBR_WeatherProbe_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WiperSet.h"

#endif	/* _WeatherProbe_H_ */
#include <asn_internal.h>
