#include <stdio.h>
int highestCommenFactor(int, int);
int checkPrimeNumber(int);
int main()
{
    int no1, no2, result;
    printf("enter first number");
    scanf("%d",&no1);
    printf("enter first number");
    scanf("%d",&no2);
    result=highestCommenFactor(no1, no2);
    if(result==0){
        printf("1 is not common prime factor");
    }else{
         printf("largest %d",result);
    }  
}
int checkPrimeNumber(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int highestCommenFactor(int num1, int num2){
    int largest=0;
    for(int a=1;a<=(num1>num2? num2 :num1);a++){
        if((num1%a==0) && (num2%a==0)){
          if(checkPrimeNumber(a)==1){
              printf("%d prime factors :\n",a);
            if(largest<a){
             largest=a;
            }
          }
        }
     }
     return largest;
}

