#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i=0,temp,n;
clrscr();
printf("Enter the String");
scanf("%s",a );
n=strlen(a);
while(i<n)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i=i+2;
}
printf("after swaping %s",a);
getch();
}
