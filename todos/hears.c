        /****              ****
    ****/#include      <math.h>//****
  #include <stdio.h> //A Heart For XJJ
 int main(){char r[20][40];int i,j,k;\
double x,y,t;for(i=0;i<20;i++){for(j=0;
j<39;j++)r[i][j]=' ';r[i][39]=0;}for( \
t=-520;t<=520;t+=1){x=20*pow(sin(t),3.\
);y=9*cos(t)-3.3*cos(t*2)-1.3*cos(t*3)\
-0.7*cos(t*4);r[8-(int)y][(int)x+19]= \
  42;}for(i=0;i<39;i++){for(j=0;j<20\
   &&r[j][i]!='*';j++);for(k=20;--k\
     >j&&r[k][i]!='*';);while(j++\
       <k)r[j][i]='*';}for(i=0;\
         i<20;i++)printf("%s\
           \n",r[i]);return
             //I Love Xjj~
               20160520;
                 /****
                  **/
                   }
