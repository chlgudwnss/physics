#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
    double x1, y1;

    printf("x1���� �Է��Ͻÿ�: ");
    scanf_s("%lf", &x1);
    printf("y1���� �Է��Ͻÿ�: ");
    scanf_s("%lf", &y1);

    double r = sqrt(x1 * x1 + y1 * y1);
    double theta = atan2(y1, x1);

    double theta_degrees = theta * 180 / PI;
    printf("����ǥ (r, ��): (%.6lf, %.6lf ����)\n", r, theta);
    printf("����ǥ (r, ��): (%.6lf, %.6lf ��)\n", r, theta_degrees);

    double r2, theta2;
    double x2, y2;

    printf("r���� �Է��Ͻÿ�: ");
    scanf_s("%lf", &r2);
    printf("�� ���� �Է��Ͻÿ� (�� ����): ");
    scanf_s("%lf", &theta2);

    double theta_rad = theta2 * PI / 180.0;

    x2 = r2 * cos(theta_rad);
    y2 = r2 * sin(theta_rad);

    printf("������ǥ (x, y): (%.6lf, %.6lf)\n", x2, y2);

    return 0;
}