#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double X1,X2;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c>=0){
	    X1=(-b+sqrt(b*b-4*a*c))/(2*a);
	    X2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }else{
	    printf("For equation %dx^2 -%dx + %d =0,/n two roots are:/n x1=%.1f,x2=%.1f",a,b,c,x1,x2);
    }
}
/*
Enter a b c: 2 -3 1
For equation 2 x^2 -3 x + 1 =0, two roots are
x1 = 1.0
x2 = 0.5
*/

