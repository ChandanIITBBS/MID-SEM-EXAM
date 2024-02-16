#include<stdio.h>

int isPrime(int a);
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);
    int x=0;
    for (int i=1; i<=(num/2); i++){
        int part1=i;
        int part2=(num-i);
        if ( isPrime(part1) && isPrime(part2) ){
            printf("%d and %d\n",part1,part2);
            x++;
        }
        else{
        }
    }
    if (x>0){
        printf("%d can be expressed as a combination of two prime numbers.\n",num);      
    }
    else{
        printf("%d can not be expressed as a combination of two prime numbers.\n",num);

    }


return 0;

}


int isPrime(int a)
{
    int f=0;
    for (int i=1; i<=a; i++){
        if(a%i==0){
            f++;
        }
    }
    if (f==2){
        return 1;
    }
    
    return 0;
}