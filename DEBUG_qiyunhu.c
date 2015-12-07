

#define DEBUG_qiyunhu 1
#define __SFILE__  (strrchr(__FILE__,'/')?strrchr(__FILE__,'/')+1:__FILE__)

#ifdef DEBUG_qiyunhu
ALOGE( "[+] FILE %s : %d FUNCTION %s called <=================================\n" , __SFILE__ , __LINE__ , __func__ ) ;
#endif

#ifdef DEBUG_qiyunhu
pr_err( "[+] FILE %s : %d FUNCTION %s called <________________\n" , __FILE__ , __LINE__ , __func__ ) ;
#endif