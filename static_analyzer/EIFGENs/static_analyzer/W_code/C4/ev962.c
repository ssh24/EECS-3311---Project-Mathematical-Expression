/*
 * Code for class EV_SCROLLABLE_ACTION_SEQUENCES_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F962_9908(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_9909(EIF_REFERENCE);
extern EIF_TYPED_VALUE F962_9910(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit962(void);

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

/* {EV_SCROLLABLE_ACTION_SEQUENCES_IMP}.create_horizontal_scroll_actions */
EIF_TYPED_VALUE F962_9908 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_horizontal_scroll_actions";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 15586);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 15586);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800051E, 0,0); /* Result */
	
	tr1 = RTLN(1310);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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

/* {EV_SCROLLABLE_ACTION_SEQUENCES_IMP}.create_vertical_scroll_actions */
EIF_TYPED_VALUE F962_9909 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_vertical_scroll_actions";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 0, 15587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(961, Current, 15587);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800051E, 0,0); /* Result */
	
	tr1 = RTLN(1310);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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

/* {EV_SCROLLABLE_ACTION_SEQUENCES_IMP}.convert_from_wel_constant */
EIF_TYPED_VALUE F962_9910 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_from_wel_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 961, Current, 0, 1, 15588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(961, Current, 15588);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case 7L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6627, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 8L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6628, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 1L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6629, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 0L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6630, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 3L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6631, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 2L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6632, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6633, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 5L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6634, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		case 6L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6635, 882))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(12);
				RTCT("invalid", EX_CHECK);
					RTCF;
			}
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("valid", EX_POST);
		tr1 = RTLN(882);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		
		RTNHOOK(13,1);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6636, "is_valid", tr1))(tr1, ui4_1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

void EIF_Minit962 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
