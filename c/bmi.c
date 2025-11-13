#include <stdio.h>

int main() {
    double weight;
    double height;

    printf("Enter your weight");
    scanf("%lf", &weight);
    printf("Enter your height");
    scanf("%lf", &height);
    
    double bmi = weight / (height * height);

    printf("Your BMI is: %f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You have a normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }
    
}