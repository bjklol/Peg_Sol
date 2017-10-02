/*
 * Class TIME_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_981 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_981 [] = {0xFF01,244,980,0xFFFF};
static const EIF_TYPE_INDEX egt_2_981 [] = {0xFF01,980,0xFFFF};
static const EIF_TYPE_INDEX egt_3_981 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_981 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_981 [] = {0xFF01,980,0xFFFF};
static const EIF_TYPE_INDEX egt_6_981 [] = {0xFF01,980,0xFFFF};
static const EIF_TYPE_INDEX egt_7_981 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_981 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_981 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_981 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_981 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_981 [] = {0xFF01,980,0xFFFF};
static const EIF_TYPE_INDEX egt_13_981 [] = {0xFF01,966,0xFFFF};
static const EIF_TYPE_INDEX egt_14_981 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_15_981 [] = {0xFF01,231,0xFFFF};


static const struct desc_info desc_981[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_981), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_981), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_981), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_981), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_981), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_981), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_981), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_981), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_981), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_981), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_981), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_981), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07A9 /*980*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_981), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13555, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13556, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_981), 13557, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_981), 13558, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13559, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13560, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13561, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13562, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 13563, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_981), 13564, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B3 /*217*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019B /*205*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
};
void Init981(void)
{
	IDSC(desc_981, 0, 980);
	IDSC(desc_981 + 1, 1, 980);
	IDSC(desc_981 + 32, 406, 980);
	IDSC(desc_981 + 36, 404, 980);
	IDSC(desc_981 + 42, 403, 980);
}


#ifdef __cplusplus
}
#endif
