
#include<stdio.h>
#define PI 3.14159265
int main(){
    double radius,height,volume,surfaceArea;
    //prompting the user for radius and height
    printf("Enter the radius of the cylinder");
    scanf("%lf",&radius);
    
    printf("Enter the height of cylinder");
    scanf("%lf",&height);
    //calculating volume and surface area using the given formulas
    volume=PI*radius*radius*height;
    surfaceArea=(2*PI*radius*radius)+(2*PI*radius*height);
    
    //displaying the results
    printf("\nvolume of the cylinder%2lf\n",volume);
    printf("surface Area of the cylinder%2lf\n",surfaceArea);
    
    return 0;//indicates successfull program execution 
    
    }