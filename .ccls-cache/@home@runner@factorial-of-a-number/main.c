#include<stdio.h>
int fact(int);
int  main()
{
  int n,result;
  printf("enter the number");
  scanf("%d",&n);
result = fact(n);
  }
int fact(intx)
{
  if(x==1)
  {
    return(x);
    else
  {
    return(x*fact(x-1));
    }