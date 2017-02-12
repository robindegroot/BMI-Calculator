#include <stdio.h>
float calculate(float weight, float height);

int main()
{
    float weight;
    float height;
    char age[3];
    char name[32];
    float bmi;

    printf("please enter your name\n");
    scanf("%s", &name);
    printf("you entered %s\n", name);
    printf("please enter your age\n");
    scanf("%s", &age);
    printf("you entered %s\n", age);
    printf( "Please enter your weight: \n" );
    scanf( "%f", &weight );
    printf( "You entered %f\n", weight );
    printf( "Please enter your height: \n" );
    scanf( "%f", &height );
    bmi = calculate(weight,height);
    printf("bmi is %2f ", bmi);
    if(bmi > 25){
        printf("you're overweight");
    }
    if(bmi < 18.5){
        printf("you're underweight");
    }
    getchar();
    return 0;
}

float calculate(float weight, float height)
{
    return weight / (height * height);

    printf("%f %f", weight,height);

}




