/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "build/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_Node_H_
#define	_Node_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "LaneID.h"
#include "LaneConnectionID.h"
#include "IntersectionID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Node */
typedef struct Node {
	long	 id;
	LaneID_t	*lane;	/* OPTIONAL */
	LaneConnectionID_t	*connectionID;	/* OPTIONAL */
	IntersectionID_t	*intersectionID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node;
extern asn_SEQUENCE_specifics_t asn_SPC_Node_specs_1;
extern asn_TYPE_member_t asn_MBR_Node_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Node_H_ */
#include "asn_internal.h"
