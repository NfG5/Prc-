#include <stdio.h>

struct st{
	int rn;
	char n[40];
	float grd;
};

int main(){
	struct st s1 = {4, "jyfj", 4.23};
	struct st *p = &s1;
	struct st s2 = {};
	printf("%d", p -> rn);

s2.rn = 2;

printf("\n%d", s2.rn);




}
