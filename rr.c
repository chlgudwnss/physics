#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
    double x1, y1;

    printf("x1값을 입력하시오: ");
    scanf_s("%lf", &x1);
    printf("y1값을 입력하시오: ");
    scanf_s("%lf", &y1);

    double r = sqrt(x1 * x1 + y1 * y1);
    double theta = atan2(y1, x1);

    double theta_degrees = theta * 180 / PI;
    printf("극좌표 (r, θ): (%.6lf, %.6lf 라디안)\n", r, theta);
    printf("극좌표 (r, θ): (%.6lf, %.6lf 도)\n", r, theta_degrees);

    double r2, theta2;
    double x2, y2;

    printf("r값을 입력하시오: ");
    scanf_s("%lf", &r2);
    printf("θ 값을 입력하시오 (도 단위): ");
    scanf_s("%lf", &theta2);

    double theta_rad = theta2 * PI / 180.0;

    x2 = r2 * cos(theta_rad);
    y2 = r2 * sin(theta_rad);

    printf("직교좌표 (x, y): (%.6lf, %.6lf)\n", x2, y2);

    return 0;
}