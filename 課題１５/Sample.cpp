//�w�b�_�[���C���N���[�h
#include<iostream>
#include"Sample.h"	//�N���X��錾���Ă���w�b�_�[

//Input�֐��ł�肽������
void Sample::Input() {
	a = 10;	//a��10��������
	b = 3;	//b��3��������
}

//Plus�֐��ł�肽������
void Sample::Plus() {
	c = a + b;	//a + b�������ʂ�c�ɑ������
}

//Disp�֐��ł�肽������
void Sample::Disp() {
	std::cout << "�ϐ�C�̒l��" << c << "\n";
}