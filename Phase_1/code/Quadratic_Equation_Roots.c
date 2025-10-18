#include <stdio.h>
#include <math.h>

void main(){
    float a,b,c,D,x1,x2;
    printf("ax^2+bx+c - a normal quadratic equations \n");
    
    printf("Enter a -->");
    scanf("%f",&a);

    printf("Enter b -->");
    scanf("%f",&b);

    printf("Enter c -->");
    scanf("%f",&c);

    D=(b*b)-4*a*c;

    x1= (-b+sqrt(D))/(2*a);
    x2= (-b-sqrt(D))/(2*a);

    if (D>0){
        printf("Roots are real and distinct\n ");
    }else if(D == 0){
        printf("Roots are real and equal \n");
    }else if(D<0){
        printf("roots are imaginary\n");
    }else{
        printf("try again values are invalid");
    }

    if(D>=0){
        printf("The values of roots given equatin [(%fx^2)+(%fx)+(%f)] are %f and %f",a,b,c,x1,x2);
    }else{
        printf("The roots are imagnery so roots does not exist");
    }
}
