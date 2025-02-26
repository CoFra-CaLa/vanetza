/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "build/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "LaneAttributes-addGrpC.h"

static asn_TYPE_member_t asn_MBR_LaneAttributes_addGrpC_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LaneAttributes_addGrpC, maxVehicleHeight),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeight,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"maxVehicleHeight"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneAttributes_addGrpC, maxVehicleWeight),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleMass,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"maxVehicleWeight"
		},
};
static const int asn_MAP_LaneAttributes_addGrpC_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LaneAttributes_addGrpC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LaneAttributes_addGrpC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxVehicleHeight */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxVehicleWeight */
};
static asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_addGrpC_specs_1 = {
	sizeof(struct LaneAttributes_addGrpC),
	offsetof(struct LaneAttributes_addGrpC, _asn_ctx),
	asn_MAP_LaneAttributes_addGrpC_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LaneAttributes_addGrpC_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LaneAttributes_addGrpC = {
	"LaneAttributes-addGrpC",
	"LaneAttributes-addGrpC",
	&asn_OP_SEQUENCE,
	asn_DEF_LaneAttributes_addGrpC_tags_1,
	sizeof(asn_DEF_LaneAttributes_addGrpC_tags_1)
		/sizeof(asn_DEF_LaneAttributes_addGrpC_tags_1[0]), /* 1 */
	asn_DEF_LaneAttributes_addGrpC_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaneAttributes_addGrpC_tags_1)
		/sizeof(asn_DEF_LaneAttributes_addGrpC_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LaneAttributes_addGrpC_1,
	2,	/* Elements count */
	&asn_SPC_LaneAttributes_addGrpC_specs_1	/* Additional specs */
};

