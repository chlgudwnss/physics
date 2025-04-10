#include <stdio.h>
#include <math.h>
#define PI  3.141592

int main(void)
{

	//1. x,y������ �ʱ�ӵ��� ���Ͽ���
	double t = 0.0;
	double H = 0.0;
	double s = 0.0;
	int V = 0;
	double V0 = 0.0;
	double theta_degree = 0.0;
	double g = -9.8;
	printf("�ʱ�ӵ��� �Է��ϼ���:");
	scanf_s("%lf", &V0);

	printf("������ �Է��ϼ���:");
	scanf_s("%lf", &theta_degree);

	//������ �������� ��ȯ
	double rad = PI * theta_degree / 180.0;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);

	printf("x������ �ʱ�ӵ� : %.2f \n", V0x);
	printf("y������ �ʱ�ӵ� : %.2f \n", V0y);

	//2. �ְ����� ���̸� ���Ͽ���
	H = (V0y * V0y) / (2 * -g);
	printf("�ְ����� ���� : %.2f \n", H);
	//3. �ְ����� �����ϴ� �ð��� ���Ͽ���
	t = V0y - g * t;
	printf("�ְ����� �����ϴ� �ð��� : %.2f \n", t);
	
	//4. �������� �̵��� �ְ� �Ÿ��� ���Ͽ���
	s = V0x * t;
	printf("�������� �̵��� �ְ� �Ÿ��� : %.2f \n", s);
	//5. ���鿡 �������� Vx, Vy�� ���ϰ� V�� ���� ������ ���Ͽ���.
	double Vx = V * cos(rad);
	double Vy = V * sin(rad);
	double V_final = sqrt(Vx * Vx + Vy * Vy);
	printf("���鿡 �������� Vx = %.2f, Vy = %.2f, V_final = %.2f", Vx, Vy, V_final);

	return 0;
}