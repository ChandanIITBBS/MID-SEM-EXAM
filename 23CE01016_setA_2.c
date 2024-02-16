#include<stdio.h>

int main(){
    long int num, temp, sum=0;
    int rem;

    printf("Enter a number: ");
    scanf("%ld",&num);
    temp = num;
    while (temp>0){
        long int fact=1;
        rem = temp%10;
        int i=1;
        while (i<=rem){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        temp/=10;
    }
if (sum==num){
    printf("%ld is a strong number.",num);
}
else{
    printf("%ld is not a strong number.",num);
}
    
    return 0;
}