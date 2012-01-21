# include<stdio.h>
# include<conio.h>

void main()
{
int a[9],i,j,k,m,n,o,no;
clrscr();
o=9;
m=0;
for(i=0;i<9;i++)
 {
 a[i]=i+1;
 }
while(o>1)
{
 printf("enter no to delete: ");
 scanf("%d",&n);
 no=n-1;
 m=(m+no)%o;

 for(i=m;i<=o;i++)
 {
 a[i]=a[i+1];
 }
 o--;
 //m--;

 for(i=0;i<o;i++)
 {
 printf("new array is %d \n",a[i]);
 }
}
printf("\n \n \n ----HUURAY----\n winner is %d",a[0]);

getch();

}





description::



program1:



there are three functions push,pop & series_check which have integer array as an argument.

stack & check are two integer arrays which have the size MAX

using switch case the 4 operations are fulfilled..

the valid outputs can be achieved using C language..