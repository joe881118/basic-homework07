#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int plus,i,sum;   	
 printf("�п�J�@�Ӿ��:");
 scanf("%d",&plus);
 sum=(plus*(plus+1)/2);
 printf("����");
  for(i =1; i<=plus; i++)
  {
    if(i!=plus)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
    

}



