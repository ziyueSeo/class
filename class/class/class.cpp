// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Cube
{
private:
	float length = 1.0;
	float high = 1.0;
	float wide = 1.0;
public:
	float area(float le, float hi, float wi)
	{
		float are;
		length = le;
		high = hi;
		wide = wi;
		are = 2 * (length*high + length*wide + high*wide);
		return are;
	};
	float volume(float le, float hi, float wi)
	{
		float vol;
		length = le;
		high = hi;
		wide = wi;
		vol = length*high*wide;
		return vol;
	};
};
int _tmain(int argc, _TCHAR* argv[])
{
	Cube cub1;
	Cube cub2;
	std::cout << "cub1�����Ϊ:" << cub1.area(12.0, 20.0, 25.0) << endl;
	std::cout << "cub1�����Ϊ:" << cub1.volume(12.0, 20.0, 25.0) << endl;
	std::cout << "cub2�����Ϊ:" << cub2.area(10, 14, 20) << endl;
	std::cout << "cub2�����Ϊ:" << cub2.volume(10, 14, 20) << endl;
	system("pause");
	return 0;

}

