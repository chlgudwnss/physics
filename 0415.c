#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
	double y = 0.0;
	double g = -9.8;
	double V0 = 0.0;
	printf("초기속도를 입력하세요.");
	scanf_s("%lf", &V0);
	double y0 = 0.0;
	printf("높이를 입력하세요.");
	scanf_s("%lf", &y0);
	double angle_degree = 0.0;
	printf("각도를 입력하세요.");
	scanf_s("%lf", &angle_degree);
	double rad = angle_degree * PI / 180;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);
	printf("V0x는 %.2f \n", V0x);
	printf("V0y는 %.2f \n", V0y);

	//1. 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린시간을 구하라.
	double a = 0.5 * g;
	double b = V0y;
	double c = y0;
	double t = b * b - 4 * a * c;
	if (t >= 0) {
		double t1 = (-b + sqrt(t)) / (2 * a);
		double t2 = (-b - sqrt(t)) / (2 * a);

		if (t1 > 0) {
			printf("걸린시간은 %.2f초입니다. \n", t1);
		}
		else if (t2 > 0) {
			printf("걸린시간은 %.2f초입니다. \n", t2);
		}
		else {
			printf("시간이 없습니다.");
		}
	}
	//2. 절벽아래로부터 수평거리 X를 구하여라.
	double x = V0x * t;
	printf("수평거리 X는 %.2f \n", x);

	//3. 포사체가 점P에 부딪치기 직적의 속도의 수평성분과 수직성분을 구하여라.
	double Vx = V0x;
	double Vy = V0y - g * t;
	printf("속도의 수평성분 %.2f m/s입니다. \n", Vx);
	printf("속도의 수직성분 %.2f m/s입니다. \n", Vy);

	//4. 속도의 크기를 수하여라.
	double s = sqrt(Vx * Vx + Vy * Vy);
	printf("속도의 크기는 %.2f m/s입니다. \n", s);

	//5. 속도벡터가 수평면과 이루는 각을 구하여라.
	double theta = atan2(Vy, Vx);
	theta = theta * 180 / PI;
	printf("속도벡터가 수평면과 이루는 각은 %.2f도입니다. \n", theta);

	return 0;

}