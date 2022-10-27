/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "build/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "RequestImportanceLevel.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_RequestImportanceLevel_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RequestImportanceLevel_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_RequestImportanceLevel_value2enum_1[] = {
	{ 0,	29,	"requestImportanceLevelUnKnown" },
	{ 1,	23,	"requestImportanceLevel1" },
	{ 2,	23,	"requestImportanceLevel2" },
	{ 3,	23,	"requestImportanceLevel3" },
	{ 4,	23,	"requestImportanceLevel4" },
	{ 5,	23,	"requestImportanceLevel5" },
	{ 6,	23,	"requestImportanceLevel6" },
	{ 7,	23,	"requestImportanceLevel7" },
	{ 8,	23,	"requestImportanceLevel8" },
	{ 9,	23,	"requestImportanceLevel9" },
	{ 10,	24,	"requestImportanceLevel10" },
	{ 11,	24,	"requestImportanceLevel11" },
	{ 12,	24,	"requestImportanceLevel12" },
	{ 13,	24,	"requestImportanceLevel13" },
	{ 14,	24,	"requestImportanceLevel14" },
	{ 15,	25,	"requestImportanceReserved" }
};
static const unsigned int asn_MAP_RequestImportanceLevel_enum2value_1[] = {
	1,	/* requestImportanceLevel1(1) */
	10,	/* requestImportanceLevel10(10) */
	11,	/* requestImportanceLevel11(11) */
	12,	/* requestImportanceLevel12(12) */
	13,	/* requestImportanceLevel13(13) */
	14,	/* requestImportanceLevel14(14) */
	2,	/* requestImportanceLevel2(2) */
	3,	/* requestImportanceLevel3(3) */
	4,	/* requestImportanceLevel4(4) */
	5,	/* requestImportanceLevel5(5) */
	6,	/* requestImportanceLevel6(6) */
	7,	/* requestImportanceLevel7(7) */
	8,	/* requestImportanceLevel8(8) */
	9,	/* requestImportanceLevel9(9) */
	0,	/* requestImportanceLevelUnKnown(0) */
	15	/* requestImportanceReserved(15) */
};
const asn_INTEGER_specifics_t asn_SPC_RequestImportanceLevel_specs_1 = {
	asn_MAP_RequestImportanceLevel_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RequestImportanceLevel_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RequestImportanceLevel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RequestImportanceLevel = {
	"RequestImportanceLevel",
	"RequestImportanceLevel",
	&asn_OP_NativeEnumerated,
	asn_DEF_RequestImportanceLevel_tags_1,
	sizeof(asn_DEF_RequestImportanceLevel_tags_1)
		/sizeof(asn_DEF_RequestImportanceLevel_tags_1[0]), /* 1 */
	asn_DEF_RequestImportanceLevel_tags_1,	/* Same as above */
	sizeof(asn_DEF_RequestImportanceLevel_tags_1)
		/sizeof(asn_DEF_RequestImportanceLevel_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_RequestImportanceLevel_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RequestImportanceLevel_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RequestImportanceLevel_specs_1	/* Additional specs */
};

