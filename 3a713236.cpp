#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int plus,i,sum;   	
 printf("請輸入一個整數:");
 scanf("%d",&plus);
 sum=(plus*(plus+1)/2);
 printf("答案");
  for(i =1; i<=plus; i++)
  {
    if(i!=plus)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
    

}



