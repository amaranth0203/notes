

#define DEBUG_qiyunhu 1

#ifdef DEBUG_qiyunhu
#ifndef NULL
#define NULL 0
#endif
char *strrchr_(register const  char *s, int c)
{
    register const char *p; 
    p = NULL;
    do {
        if (*s == (char) c) {
            p = s;
        }
    } while (*s++); 
    return (char *) p;          /* silence the warning */
}
#define __filename__ (strrchr_(__FILE__, '/') ? strrchr_(__FILE__, '/') + 1 : __FILE__)
#endif 

#ifdef DEBUG_qiyunhu
ALOGE( "[+] FILE %s : %d FUNCTION %s called |||||||||||||||||" , __LINE__ , __filename__ , __func__ ) ;
#endif

#ifdef DEBUG_qiyunhu
pr_err( "[+] FILE %s : %d FUNCTION %s called ________________" , __filename__ , __LINE__ , __func__ ) ;
#endif