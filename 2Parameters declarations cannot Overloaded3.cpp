#include<iostream>
#include<stdio.h>

using namespace std;

int f ( int x, int y) {
	return x+10;
}

int f ( int x, int y = 10) {
	return x+y;
}

int main() {	
getchar();
return 0;
}

