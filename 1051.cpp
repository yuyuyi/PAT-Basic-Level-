#include <stdio.h>
#include <math.h>

int main() {

	double r1, p1, r2, p2;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);

	double ans1 = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
	double ans2 = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);

	if(fabs(ans1)<0.005) {
		ans1 = 0;
	}
	if(fabs(ans2)<0.005) {
		ans2 = 0;
	}

	if(ans2<0) {
		printf("%.2lf%.2lfi\n", ans1, ans2);
	} else {
		printf("%.2lf+%.2lfi\n", ans1, ans2);
	}

	return 0;
}
