/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "build/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_TimeMark_H_
#define	_TimeMark_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TimeMark */
typedef long	 TimeMark_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeMark_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeMark;
asn_struct_free_f TimeMark_free;
asn_struct_print_f TimeMark_print;
asn_constr_check_f TimeMark_constraint;
ber_type_decoder_f TimeMark_decode_ber;
der_type_encoder_f TimeMark_encode_der;
xer_type_decoder_f TimeMark_decode_xer;
xer_type_encoder_f TimeMark_encode_xer;
oer_type_decoder_f TimeMark_decode_oer;
oer_type_encoder_f TimeMark_encode_oer;
per_type_decoder_f TimeMark_decode_uper;
per_type_encoder_f TimeMark_encode_uper;
per_type_decoder_f TimeMark_decode_aper;
per_type_encoder_f TimeMark_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeMark_H_ */
#include "asn_internal.h"
