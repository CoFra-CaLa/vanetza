/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "build/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_RestrictionClassAssignment_H_
#define	_RestrictionClassAssignment_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RestrictionClassID.h"
#include "RestrictionUserTypeList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RestrictionClassAssignment */
typedef struct RestrictionClassAssignment {
	RestrictionClassID_t	 id;
	RestrictionUserTypeList_t	 users;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictionClassAssignment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictionClassAssignment;
extern asn_SEQUENCE_specifics_t asn_SPC_RestrictionClassAssignment_specs_1;
extern asn_TYPE_member_t asn_MBR_RestrictionClassAssignment_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RestrictionClassAssignment_H_ */
#include "asn_internal.h"
