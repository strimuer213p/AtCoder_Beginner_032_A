/*
��蕶
�،N�͐��� a �Ŋ���؂�鐔���D���ł��B �����N�͐��� b �Ŋ���؂�鐔���D���ł��B
n �ȏ�̐����ŁA�،N�ƍ����N�̗������D���ȍŏ��̐��𓚂��Ă��������B
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

int gcd(int x, int y) { //�ő����
	int z;
	while (y) {
		z = x%y;
		x = y;
		y = z;
	}

	return x;
}

int lcm(int x, int y) { //�ŏ����{��
	return x*y / gcd(x, y);
}