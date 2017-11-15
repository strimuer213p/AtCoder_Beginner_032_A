/*
問題文
青木君は整数 a で割り切れる数が好きです。 高橋君は整数 b で割り切れる数が好きです。
n 以上の整数で、青木君と高橋君の両方が好きな最小の数を答えてください。
*/

#include<iostream>
int gcd(int x, int y);
int lcm(int x, int y);

int main() {
	int aoki, takahashi,num,output=0;
	std::cin >> aoki >> takahashi>>num;
	
	while (num>output) {
		output += lcm(aoki, takahashi);
	}

	std::cout << output << std::endl;

	return 0;
}

int gcd(int x, int y) { //最大公約数
	int z;
	while (y) {
		z = x%y;
		x = y;
		y = z;
	}

	return x;
}

int lcm(int x, int y) { //最小公倍数
	return x*y / gcd(x, y);
}