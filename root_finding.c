#include <stdio.h>
#include <math.h> /*sqrt函数需要math库*/
int main(){ //最好用int main()
	int a,b,c;
	float x1,x2;
	printf("请输入一元二次方程的各项系数");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a); //还有一根和无根的情形呢？你没有考虑啊
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%f\nx2=%f",x1,x2);  //x1,x2是float型，需要用%f输出
	return 0;
}
