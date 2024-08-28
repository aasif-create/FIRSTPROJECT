#include<stdio.h>
#include<string.h>
void main()
{
  char str1[20],str2[20];
  printf("ENTER FIRST STRING :");
  scanf("%s",str1);
  printf("ENTER SECOND STRING :");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("THE FINAL STRING IS :%s",str1);
}
