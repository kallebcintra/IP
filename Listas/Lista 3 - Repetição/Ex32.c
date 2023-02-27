// incomplete
#include <stdio.h>

int power(int x,int n){
int sum=1,i;  
if (n == 0)
    return 1;

  for(i=1; i<= n; i++){
    sum *= x;
  }
 return sum;
}

int fact(int n){
    int fact;
    int i;
 if(n == 0)
   return 1;

 for(i=1; i<= n; i++){
   fact *=i;
 }
  return fact;
}


int main()
{
float sum=0.0;
int i,x,n;
printf("Enter the value of x and n terms: ");
scanf("%d %d",&x,&n);
 for(i=0; i<=n; i++){
  sum += (float)power(x,i)/fact(i);
 }
printf("The value of %d^%d is %.3f",x,n,sum);
return 0;
}