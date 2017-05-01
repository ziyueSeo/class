// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
	Cube();
	Cube(float le, float hi, float wi);
	float area();
	float volume();
	~Cube();
};
Cube::Cube()
{
	length = 0.0;
	high = 0.0;
	wide = 0.0;
}
Cube::Cube(float le, float hi, float wi)
{
	length = le;
	high = hi;
	wide = wi;
}
float Cube::area()
{
	float are;
	are = 2 * (length*high + length*wide + high*wide);
	return are;
}
float Cube::volume()
{
	float vol;
	vol = length*high*wide;
	return vol;
}
Cube::~Cube(){}
int _tmain(int argc, _TCHAR* argv[])
{
	Cube cub1(12.0,20.0,25.0);
	Cube cub2=Cube(10,14,20);
	std::cout << "cub1的面积为:" << cub1.area() << endl;
	std::cout << "cub1的体积为:" << cub1.volume() << endl;
	std::cout << "cub2的面积为:" << cub2.area() << endl;
	std::cout << "cub2的体积为:" << cub2.volume() << endl;
	system("pause");
	return 0;

}

