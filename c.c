#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int i=0;
 char ch[100],ch1[110];
 printf("Enter name of the file : ");
 scanf("%s", ch);
 
 strcpy(ch1,"gedit ");
 strcat(ch1,ch);
 i=system(ch1);
if (i!=0)
 printf("\nOperation not successful");
else
 {
  strcpy(ch1,"cc ");
  strcat(ch1,ch);
  system(ch1);
  system("./a.out");
 }
 return 0;
}
