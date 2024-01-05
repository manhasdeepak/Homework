#include<stdio.h>
int main()
{
char ch;
printf("enter the char");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("char is vowel");
}
else
{
printf("char is consonant");
}
printf("\n the ASCII VALUE OF %c is %d\n",ch,(int)ch);
return 0;
}