/*
 * Code for class DIVISION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1285_14132(EIF_REFERENCE);
extern void F1285_14133(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1285_14134(EIF_REFERENCE);
extern void EIF_Minit1285(void);

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

/* {DIVISION}.make_division */
void F1285_14132 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_division";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1284, Current, 0, 0, 19735);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1284, Current, 19735);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11681, Dtype(Current)))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {DIVISION}.accept */
void F1285_14133 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "accept";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1284, Current, 0, 1, 19736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1284, Current, 19736);
	RTCC(arg1, 1284, l_feature_name, 1, eif_attached_type(1224));
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10976, "visit_division", arg1))(arg1, ur1x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {DIVISION}.output */
EIF_TYPED_VALUE F1285_14134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "output";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1284, Current, 0, 0, 19737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1284, Current, 19737);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
	
	Result = RTMS_EX_H("/",1,47);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit1285 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
