#include<stdio.h>
#include<math.h>
// To find roots of a quadratic equation.
int main(){
    int a,b,c, D;
    printf("Quadratic equation are in the form of ax^2 + bx +c.\n");
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Your quadratic equation is %dx^2 + %dx +%d.\n",a,b,c);

    D=(b*b)-(4*a*c);
    float x1, x2;
    if (D>0){
        
        x1 = ((-b)+(pow(D, 0.5)))/(2*a);
        x2 = ((-b)-(pow(D, 0.5)))/(2*a);
        printf("The given equation has two unequal and real roots i.e., %.2f and %.2f.",x1,x2);
    }

    else if(D=0){
        x1 = ((-b)+(pow(D, 0.5)))/(2*a);
        x2 = ((-b)-(pow(D, 0.5)))/(2*a);
        printf("The given equation has two equal and real roots i.e., %.2f and %.2f.",x1,x2);
    }

    else{
        printf("The given equation has imaginary roots.");
    }
    
    return 0;
}