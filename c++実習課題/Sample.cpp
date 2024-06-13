//ヘッダーをインクルード
#include<iostream>
#include"Sample.h"	//クラスを宣言しているヘッダー

//Input関数でやりたい処理
void Sample::Input() {
	a = 10;	//aに10を代入する
	b = 3;	//bに3を代入する
}

//Plus関数でやりたい処理
void Sample::Plus() {
	c = a + b;	//a + bした結果をcに代入する
}

//Disp関数でやりたい処理
void Sample::Disp() {
	std::cout << "変数Cの値は" << c << "\n";
}