/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F973_7253(EIF_REFERENCE);
extern void EIF_Minit973(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.make */
void F973_7253 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 972, Current, 0, 0, 13518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(972, Current, 13518);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(975, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5098, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5063, dtype))(Current, ur1x);
	RTHOOK(2);
	tr1 = RTLN(eif_new_type(974, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5096, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5063, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = RTLN(eif_new_type(977, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5103, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5063, dtype))(Current, ur1x);
	RTHOOK(4);
	tr1 = RTLN(eif_new_type(976, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5101, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5063, dtype))(Current, ur1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5046, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5044, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

void EIF_Minit973 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
