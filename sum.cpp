#include "sum.h" //커런트에 있을 경우에는 쌍따옴표

int sum(int n) {
	int s = 0;
	
	for (int i = 1; i <= n; i++) s += i;
	
	return s;
} 
