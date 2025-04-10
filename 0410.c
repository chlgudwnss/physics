#include <stdio.h>
#include <math.h>
#define PI  3.141592

int main(void)
{

	//1. x,y방향의 초기속도를 구하여라
	double t = 0.0;
	double H = 0.0;
	double s = 0.0;
	int V = 0;
	double V0 = 0.0;
	double theta_degree = 0.0;
	double g = -9.8;
	printf("초기속도를 입력하세요:");
	scanf_s("%lf", &V0);

	printf("각도를 입력하세요:");
	scanf_s("%lf", &theta_degree);

	//각도를 라디안으로 변환
	double rad = PI * theta_degree / 180.0;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);

	printf("x방향의 초기속도 : %.2f \n", V0x);
	printf("y방향의 초기속도 : %.2f \n", V0y);

	//2. 최고점의 높이를 구하여라
	H = (V0y * V0y) / (2 * -g);
	printf("최고점의 높이 : %.2f \n", H);
	//3. 최고점에 도착하는 시간을 구하여라
	t = V0y - g * t;
	printf("최고점에 도달하는 시간은 : %.2f \n", t);
	
	//4. 수평으로 이동한 최고 거리를 구하여라
	s = V0x * t;
	printf("수평으로 이동한 최고 거리는 : %.2f \n", s);
	//5. 지면에 닿을때의 Vx, Vy를 구하고 V를 벡터 성분을 구하여라.
	double Vx = V * cos(rad);
	double Vy = V * sin(rad);
	double V_final = sqrt(Vx * Vx + Vy * Vy);
	printf("지면에 닿을때의 Vx = %.2f, Vy = %.2f, V_final = %.2f", Vx, Vy, V_final);

	return 0;
}