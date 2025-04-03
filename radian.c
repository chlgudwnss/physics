#include <math.h>
#include <stdio.h>
#define M_PI 3.141592

void main()
{
    double angle_radian, cosine, sine, tangent;
    double degree;

    printf("각도를 입력하세요: ");
    scanf_s("%lf", &degree);

    angle_radian = degree * M_PI / 180;
    cosine = cos(angle_radian);
    sine = sin(angle_radian);
    tangent = tan(angle_radian);

    printf("angle_radian: %f\n", angle_radian);
    printf("cos: %f\n", cosine);
    printf("sin: %f\n", sine);
    printf("tan: %f\n", tangent);

}
