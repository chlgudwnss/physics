#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
	double y = 0.0;
	double g = -9.8;
	double V0 = 0.0;
	printf("�ʱ�ӵ��� �Է��ϼ���.");
	scanf_s("%lf", &V0);
	double y0 = 0.0;
	printf("���̸� �Է��ϼ���.");
	scanf_s("%lf", &y0);
	double angle_degree = 0.0;
	printf("������ �Է��ϼ���.");
	scanf_s("%lf", &angle_degree);
	double rad = angle_degree * PI / 180;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);
	printf("V0x�� %.2f \n", V0x);
	printf("V0y�� %.2f \n", V0y);

	//1. ����ü�� ���鿡 �ִ� �� P�� �浹�� ������ �ɸ��ð��� ���϶�.
	double a = 0.5 * g;
	double b = V0y;
	double c = y0;
	double t = b * b - 4 * a * c;
	if (t >= 0) {
		double t1 = (-b + sqrt(t)) / (2 * a);
		double t2 = (-b - sqrt(t)) / (2 * a);

		if (t1 > 0) {
			printf("�ɸ��ð��� %.2f���Դϴ�. \n", t1);
		}
		else if (t2 > 0) {
			printf("�ɸ��ð��� %.2f���Դϴ�. \n", t2);
		}
		else {
			printf("�ð��� �����ϴ�.");
		}
	}
	//2. �����Ʒ��κ��� ����Ÿ� X�� ���Ͽ���.
	double x = V0x * t;
	printf("����Ÿ� X�� %.2f \n", x);

	//3. ����ü�� ��P�� �ε�ġ�� ������ �ӵ��� ���򼺺а� ���������� ���Ͽ���.
	double Vx = V0x;
	double Vy = V0y - g * t;
	printf("�ӵ��� ���򼺺� %.2f m/s�Դϴ�. \n", Vx);
	printf("�ӵ��� �������� %.2f m/s�Դϴ�. \n", Vy);

	//4. �ӵ��� ũ�⸦ ���Ͽ���.
	double s = sqrt(Vx * Vx + Vy * Vy);
	printf("�ӵ��� ũ��� %.2f m/s�Դϴ�. \n", s);

	//5. �ӵ����Ͱ� ������ �̷�� ���� ���Ͽ���.
	double theta = atan2(Vy, Vx);
	theta = theta * 180 / PI;
	printf("�ӵ����Ͱ� ������ �̷�� ���� %.2f���Դϴ�. \n", theta);

	return 0;

}