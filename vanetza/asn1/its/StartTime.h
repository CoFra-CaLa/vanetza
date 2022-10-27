/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "build/iso/ISO14816.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_StartTime_H_
#define	_StartTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AviEriDateTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* StartTime */
typedef AviEriDateTime_t	 StartTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StartTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StartTime;
asn_struct_free_f StartTime_free;
asn_struct_print_f StartTime_print;
asn_constr_check_f StartTime_constraint;
ber_type_decoder_f StartTime_decode_ber;
der_type_encoder_f StartTime_encode_der;
xer_type_decoder_f StartTime_decode_xer;
xer_type_encoder_f StartTime_encode_xer;
oer_type_decoder_f StartTime_decode_oer;
oer_type_encoder_f StartTime_encode_oer;
per_type_decoder_f StartTime_decode_uper;
per_type_encoder_f StartTime_encode_uper;
per_type_decoder_f StartTime_decode_aper;
per_type_encoder_f StartTime_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _StartTime_H_ */
#include "asn_internal.h"
