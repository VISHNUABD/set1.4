#include <stdio.h>

int main()
{
 char alp;
 printf("enter the value to check whether it is an alphabet or not");
 scanf("%c",&alp);
 if( alp =='a' && 'z' || alp =='A' && 'Z')
 printf("the entered char is an alphabet");
 else
 printf("not an alphabet");
return 0;
}
