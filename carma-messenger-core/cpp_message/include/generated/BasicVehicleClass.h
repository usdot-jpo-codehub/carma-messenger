/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2022-12-07.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_BasicVehicleClass_H_
#define	_BasicVehicleClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BasicVehicleClass */
typedef long	 BasicVehicleClass_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BasicVehicleClass_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BasicVehicleClass;
asn_struct_free_f BasicVehicleClass_free;
asn_struct_print_f BasicVehicleClass_print;
asn_constr_check_f BasicVehicleClass_constraint;
ber_type_decoder_f BasicVehicleClass_decode_ber;
der_type_encoder_f BasicVehicleClass_encode_der;
xer_type_decoder_f BasicVehicleClass_decode_xer;
xer_type_encoder_f BasicVehicleClass_encode_xer;
oer_type_decoder_f BasicVehicleClass_decode_oer;
oer_type_encoder_f BasicVehicleClass_encode_oer;
per_type_decoder_f BasicVehicleClass_decode_uper;
per_type_encoder_f BasicVehicleClass_encode_uper;
#define BasicVehicleClass_unknownVehicleClass	((BasicVehicleClass_t)0)
#define BasicVehicleClass_specialVehicleClass	((BasicVehicleClass_t)1)
#define BasicVehicleClass_passenger_Vehicle_TypeUnknown	((BasicVehicleClass_t)10)
#define BasicVehicleClass_passenger_Vehicle_TypeOther	((BasicVehicleClass_t)11)
#define BasicVehicleClass_lightTruck_Vehicle_TypeUnknown	((BasicVehicleClass_t)20)
#define BasicVehicleClass_lightTruck_Vehicle_TypeOther	((BasicVehicleClass_t)21)
#define BasicVehicleClass_truck_Vehicle_TypeUnknown	((BasicVehicleClass_t)25)
#define BasicVehicleClass_truck_Vehicle_TypeOther	((BasicVehicleClass_t)26)
#define BasicVehicleClass_truck_axleCnt2	((BasicVehicleClass_t)27)
#define BasicVehicleClass_truck_axleCnt3	((BasicVehicleClass_t)28)
#define BasicVehicleClass_truck_axleCnt4	((BasicVehicleClass_t)29)
#define BasicVehicleClass_truck_axleCnt4Trailer	((BasicVehicleClass_t)30)
#define BasicVehicleClass_truck_axleCnt5Trailer	((BasicVehicleClass_t)31)
#define BasicVehicleClass_truck_axleCnt6Trailer	((BasicVehicleClass_t)32)
#define BasicVehicleClass_truck_axleCnt5MultiTrailer	((BasicVehicleClass_t)33)
#define BasicVehicleClass_truck_axleCnt6MultiTrailer	((BasicVehicleClass_t)34)
#define BasicVehicleClass_truck_axleCnt7MultiTrailer	((BasicVehicleClass_t)35)
#define BasicVehicleClass_motorcycle_TypeUnknown	((BasicVehicleClass_t)40)
#define BasicVehicleClass_motorcycle_TypeOther	((BasicVehicleClass_t)41)
#define BasicVehicleClass_motorcycle_Cruiser_Standard	((BasicVehicleClass_t)42)
#define BasicVehicleClass_motorcycle_SportUnclad	((BasicVehicleClass_t)43)
#define BasicVehicleClass_motorcycle_SportTouring	((BasicVehicleClass_t)44)
#define BasicVehicleClass_motorcycle_SuperSport	((BasicVehicleClass_t)45)
#define BasicVehicleClass_motorcycle_Touring	((BasicVehicleClass_t)46)
#define BasicVehicleClass_motorcycle_Trike	((BasicVehicleClass_t)47)
#define BasicVehicleClass_motorcycle_wPassengers	((BasicVehicleClass_t)48)
#define BasicVehicleClass_transit_TypeUnknown	((BasicVehicleClass_t)50)
#define BasicVehicleClass_transit_TypeOther	((BasicVehicleClass_t)51)
#define BasicVehicleClass_transit_BRT	((BasicVehicleClass_t)52)
#define BasicVehicleClass_transit_ExpressBus	((BasicVehicleClass_t)53)
#define BasicVehicleClass_transit_LocalBus	((BasicVehicleClass_t)54)
#define BasicVehicleClass_transit_SchoolBus	((BasicVehicleClass_t)55)
#define BasicVehicleClass_transit_FixedGuideway	((BasicVehicleClass_t)56)
#define BasicVehicleClass_transit_Paratransit	((BasicVehicleClass_t)57)
#define BasicVehicleClass_transit_Paratransit_Ambulance	((BasicVehicleClass_t)58)
#define BasicVehicleClass_emergency_TypeUnknown	((BasicVehicleClass_t)60)
#define BasicVehicleClass_emergency_TypeOther	((BasicVehicleClass_t)61)
#define BasicVehicleClass_emergency_Fire_Light_Vehicle	((BasicVehicleClass_t)62)
#define BasicVehicleClass_emergency_Fire_Heavy_Vehicle	((BasicVehicleClass_t)63)
#define BasicVehicleClass_emergency_Fire_Paramedic_Vehicle	((BasicVehicleClass_t)64)
#define BasicVehicleClass_emergency_Fire_Ambulance_Vehicle	((BasicVehicleClass_t)65)
#define BasicVehicleClass_emergency_Police_Light_Vehicle	((BasicVehicleClass_t)66)
#define BasicVehicleClass_emergency_Police_Heavy_Vehicle	((BasicVehicleClass_t)67)
#define BasicVehicleClass_emergency_Other_Responder	((BasicVehicleClass_t)68)
#define BasicVehicleClass_emergency_Other_Ambulance	((BasicVehicleClass_t)69)
#define BasicVehicleClass_otherTraveler_TypeUnknown	((BasicVehicleClass_t)80)
#define BasicVehicleClass_otherTraveler_TypeOther	((BasicVehicleClass_t)81)
#define BasicVehicleClass_otherTraveler_Pedestrian	((BasicVehicleClass_t)82)
#define BasicVehicleClass_otherTraveler_Visually_Disabled	((BasicVehicleClass_t)83)
#define BasicVehicleClass_otherTraveler_Physically_Disabled	((BasicVehicleClass_t)84)
#define BasicVehicleClass_otherTraveler_Bicycle	((BasicVehicleClass_t)85)
#define BasicVehicleClass_otherTraveler_Vulnerable_Roadworker	((BasicVehicleClass_t)86)
#define BasicVehicleClass_infrastructure_TypeUnknown	((BasicVehicleClass_t)90)
#define BasicVehicleClass_infrastructure_Fixed	((BasicVehicleClass_t)91)
#define BasicVehicleClass_infrastructure_Movable	((BasicVehicleClass_t)92)
#define BasicVehicleClass_equipped_CargoTrailer	((BasicVehicleClass_t)93)

#ifdef __cplusplus
}
#endif

#endif	/* _BasicVehicleClass_H_ */
#include <asn_internal.h>
