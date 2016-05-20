#include <android/log.h>
__android_log_print(ANDROID_LOG_ERROR, "qiyunhu", "[+] wassup %s\n", __FUNCTION__ ) ;




#define DEBUG_qiyunhu 1

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#ifdef DEBUG_qiyunhu

    #ifndef _STRRCHR_
        #define _STRRCHR_ 1
        #define _STRRCHR_IMPL_COMMON(str, ch, offset) (str)[sizeof((str)) - 1 - (offset)] == (ch)? (str) + sizeof((str)) - (offset): sizeof((str)) <= (offset) + 1? (str)
        #define _STRRCHR_IMPL_63(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 63): (str))
        #define _STRRCHR_IMPL_62(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 62): _STRRCHR_IMPL_63(str, ch))
        #define _STRRCHR_IMPL_62(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 62): _STRRCHR_IMPL_63(str, ch))
        #define _STRRCHR_IMPL_61(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 61): _STRRCHR_IMPL_62(str, ch))
        #define _STRRCHR_IMPL_60(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 60): _STRRCHR_IMPL_61(str, ch))
        #define _STRRCHR_IMPL_59(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 59): _STRRCHR_IMPL_60(str, ch))
        #define _STRRCHR_IMPL_58(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 58): _STRRCHR_IMPL_59(str, ch))
        #define _STRRCHR_IMPL_57(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 57): _STRRCHR_IMPL_58(str, ch))
        #define _STRRCHR_IMPL_56(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 56): _STRRCHR_IMPL_57(str, ch))
        #define _STRRCHR_IMPL_55(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 55): _STRRCHR_IMPL_56(str, ch))
        #define _STRRCHR_IMPL_54(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 54): _STRRCHR_IMPL_55(str, ch))
        #define _STRRCHR_IMPL_53(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 53): _STRRCHR_IMPL_54(str, ch))
        #define _STRRCHR_IMPL_52(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 52): _STRRCHR_IMPL_53(str, ch))
        #define _STRRCHR_IMPL_51(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 51): _STRRCHR_IMPL_52(str, ch))
        #define _STRRCHR_IMPL_50(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 50): _STRRCHR_IMPL_51(str, ch))
        #define _STRRCHR_IMPL_49(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 49): _STRRCHR_IMPL_50(str, ch))
        #define _STRRCHR_IMPL_48(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 48): _STRRCHR_IMPL_49(str, ch))
        #define _STRRCHR_IMPL_47(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 47): _STRRCHR_IMPL_48(str, ch))
        #define _STRRCHR_IMPL_46(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 46): _STRRCHR_IMPL_47(str, ch))
        #define _STRRCHR_IMPL_45(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 45): _STRRCHR_IMPL_46(str, ch))
        #define _STRRCHR_IMPL_44(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 44): _STRRCHR_IMPL_45(str, ch))
        #define _STRRCHR_IMPL_43(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 43): _STRRCHR_IMPL_44(str, ch))
        #define _STRRCHR_IMPL_42(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 42): _STRRCHR_IMPL_43(str, ch))
        #define _STRRCHR_IMPL_41(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 41): _STRRCHR_IMPL_42(str, ch))
        #define _STRRCHR_IMPL_40(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 40): _STRRCHR_IMPL_41(str, ch))
        #define _STRRCHR_IMPL_39(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 39): _STRRCHR_IMPL_40(str, ch))
        #define _STRRCHR_IMPL_38(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 38): _STRRCHR_IMPL_39(str, ch))
        #define _STRRCHR_IMPL_37(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 37): _STRRCHR_IMPL_38(str, ch))
        #define _STRRCHR_IMPL_36(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 36): _STRRCHR_IMPL_37(str, ch))
        #define _STRRCHR_IMPL_35(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 35): _STRRCHR_IMPL_36(str, ch))
        #define _STRRCHR_IMPL_34(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 34): _STRRCHR_IMPL_35(str, ch))
        #define _STRRCHR_IMPL_33(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 33): _STRRCHR_IMPL_34(str, ch))
        #define _STRRCHR_IMPL_32(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 32): _STRRCHR_IMPL_33(str, ch))
        #define _STRRCHR_IMPL_31(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 31): _STRRCHR_IMPL_32(str, ch))
        #define _STRRCHR_IMPL_30(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 30): _STRRCHR_IMPL_31(str, ch))
        #define _STRRCHR_IMPL_29(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 29): _STRRCHR_IMPL_30(str, ch))
        #define _STRRCHR_IMPL_28(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 28): _STRRCHR_IMPL_29(str, ch))
        #define _STRRCHR_IMPL_27(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 27): _STRRCHR_IMPL_28(str, ch))
        #define _STRRCHR_IMPL_26(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 26): _STRRCHR_IMPL_27(str, ch))
        #define _STRRCHR_IMPL_25(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 25): _STRRCHR_IMPL_26(str, ch))
        #define _STRRCHR_IMPL_24(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 24): _STRRCHR_IMPL_25(str, ch))
        #define _STRRCHR_IMPL_23(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 23): _STRRCHR_IMPL_24(str, ch))
        #define _STRRCHR_IMPL_22(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 22): _STRRCHR_IMPL_23(str, ch))
        #define _STRRCHR_IMPL_21(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 21): _STRRCHR_IMPL_22(str, ch))
        #define _STRRCHR_IMPL_20(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 20): _STRRCHR_IMPL_21(str, ch))
        #define _STRRCHR_IMPL_19(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 19): _STRRCHR_IMPL_20(str, ch))
        #define _STRRCHR_IMPL_18(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 18): _STRRCHR_IMPL_19(str, ch))
        #define _STRRCHR_IMPL_17(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 17): _STRRCHR_IMPL_18(str, ch))
        #define _STRRCHR_IMPL_16(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 16): _STRRCHR_IMPL_17(str, ch))
        #define _STRRCHR_IMPL_15(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 15): _STRRCHR_IMPL_16(str, ch))
        #define _STRRCHR_IMPL_14(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 14): _STRRCHR_IMPL_15(str, ch))
        #define _STRRCHR_IMPL_13(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 13): _STRRCHR_IMPL_14(str, ch))
        #define _STRRCHR_IMPL_12(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 12): _STRRCHR_IMPL_13(str, ch))
        #define _STRRCHR_IMPL_11(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 11): _STRRCHR_IMPL_12(str, ch))
        #define _STRRCHR_IMPL_10(str, ch) (_STRRCHR_IMPL_COMMON(str, ch, 10): _STRRCHR_IMPL_11(str, ch))
        #define _STRRCHR_IMPL_9(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 9):  _STRRCHR_IMPL_10(str, ch))
        #define _STRRCHR_IMPL_8(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 8):  _STRRCHR_IMPL_9(str, ch))
        #define _STRRCHR_IMPL_7(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 7):  _STRRCHR_IMPL_8(str, ch))
        #define _STRRCHR_IMPL_6(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 6):  _STRRCHR_IMPL_7(str, ch))
        #define _STRRCHR_IMPL_5(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 5):  _STRRCHR_IMPL_6(str, ch))
        #define _STRRCHR_IMPL_4(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 4):  _STRRCHR_IMPL_5(str, ch))
        #define _STRRCHR_IMPL_3(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 3):  _STRRCHR_IMPL_4(str, ch))
        #define _STRRCHR_IMPL_2(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 2):  _STRRCHR_IMPL_3(str, ch))
        #define _STRRCHR_IMPL_1(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 1):  _STRRCHR_IMPL_2(str, ch))
        #define _STRRCHR_IMPL_0(str, ch)  (_STRRCHR_IMPL_COMMON(str, ch, 0):  _STRRCHR_IMPL_1(str, ch))
        #define _STRRCHR(str, ch) (sizeof((str)) <= 1? (str): _STRRCHR_IMPL_0(str, ch))
    #endif

    #define __FILENAME__ _STRRCHR(__FILE__, '/')

#endif

#ifdef DEBUG_qiyunhu
ALOGE( "[+] FILE %s : %d FUNCTION %s called <=================================\n" , __FILENAME__ , __LINE__ , __func__ ) ;
#endif

#ifdef DEBUG_qiyunhu
pr_err( "[+] FILE %s : %d FUNCTION %s called <________________\n" , __FILENAME__ , __LINE__ , __func__ ) ;
#endif