#include<iostream>
#include"Sample.h"

void Sample::Input1() {
	x = 10;
}

void Sample::Input2() {
	int x;
	x = 20;	//�����ł����g���Ȃ�
}

void Sample::Disp() {
	std::cout << x;
}