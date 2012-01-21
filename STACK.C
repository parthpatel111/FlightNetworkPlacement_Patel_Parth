#include<stdio.h>
# include<conio.h>
# define MAX 15
int top=0,temp;

void push (int []);
int pop (int []);
void series_check(int []);

void main()
{
int stack[MAX];
int check[MAX];
int ch,n;
int chk;
while(ch!=4)
{
clrscr();
printf("1.push \n 2.pop \n 3.list \n 4.exit \n\n");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
 {
 case 1:push(stack);
 break;
 case 2:n=pop(stack);
 if(n!=-1)
 {
 printf("\n deleted: %d",n);
 }
 break;
 case 3:
 printf("enter series");
 for(chk=0;chk!=8;chk++)
 {
 scanf("%d",&check[chk]);
 }

 series_check(check);
 break;



 }
 getch();
}
}

void push(int s[])
{
int n;
if(top>15)
{
printf("\n \n stack overflow");
}
else
{
printf("enter no[%d]:",top);
scanf("%d",&n);
 if(top==0 || n==(temp+1) )
 {
 s[top++]=n;
 temp=n;
 }
 else
 {
 printf("number not valid");
 }
}
}

int pop(int s[])
{
int n;
if(top<1)
{
printf("\n stack underflow");
return -1;
}
else
{
n=s[--top];
printf("%d",n);
return-1;
}
}

void series_check(int s[])
{
int chk;
//int temp1[8],temp2[7],temp3[6],temp4[5];
 //for(chk=0;chk!=8;chk++)
//{
//temp[chk]=s[chk];
//}
printf("Any series can be achieved by PUSH-POP operation of single number also\n so ur entered series :");
 for(chk=0;chk!=8;chk++)
{
printf(" %d",s[chk]);
}
printf("is valid");

}