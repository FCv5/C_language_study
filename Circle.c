# include<stdio.h>

int main(){
	float h;float r, pi, circle_area, circumference;
	float ball_surface_area, ball_volume,cylinder_colume;
	pi = 3.14;
	printf("Please input r & h: ");
	scanf("%f, %f", &r, &h);
	
	circle_area = pi * r * r;
	circumference = 2 * pi * r;
	ball_surface_area = 4 * pi * r * r;
	ball_volume = (4 * pi * r * r * r) / 3;
	cylinder_colume = pi * r * r * h;
	
	printf("circumference = %6.2f\n", circumference);
	printf("circle_area = %6.2f\n", circle_area);
	printf("ball_surface_area = %6.2f\n", ball_surface_area);
	printf("ball_volume = %6.2f\n", ball_volume);
	printf("cylinder_colume = %6.2f\n", cylinder_colume);
	return 0;
}