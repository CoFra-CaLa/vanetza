/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "build/iso/ISO14816.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AviEriDateTime_H_
#define	_AviEriDateTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AviEriDateTime */
typedef OCTET_STRING_t	 AviEriDateTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AviEriDateTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AviEriDateTime;
asn_struct_free_f AviEriDateTime_free;
asn_struct_print_f AviEriDateTime_print;
asn_constr_check_f AviEriDateTime_constraint;
ber_type_decoder_f AviEriDateTime_decode_ber;
der_type_encoder_f AviEriDateTime_encode_der;
xer_type_decoder_f AviEriDateTime_decode_xer;
xer_type_encoder_f AviEriDateTime_encode_xer;
oer_type_decoder_f AviEriDateTime_decode_oer;
oer_type_encoder_f AviEriDateTime_encode_oer;
per_type_decoder_f AviEriDateTime_decode_uper;
per_type_encoder_f AviEriDateTime_encode_uper;
per_type_decoder_f AviEriDateTime_decode_aper;
per_type_encoder_f AviEriDateTime_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AviEriDateTime_H_ */
#include "asn_internal.h"
