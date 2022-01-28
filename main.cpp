#include <iostream>
#include "Vector.h"
//#define SEVE_V 10000


int main()
{
	Vector <Vector <int>> v90;

	for (int i = 0; i < 10; i++)
	{
		Vector <int> v130;
		for (int j = 0; j < 10; j++)
		{
			v130.push_back(i);
		}
		v90.push_back(v130);

	}
	v90.print1();
	v90.size_();



	std::cout << std::endl;
	std::cout << std::endl;

	Vector <Vector <char>> v5;
	Vector<char> v10;
	v10.push_back('I');
	v10.push_back('M');
	v10.push_back('V');

	v5.push_back(v10);
	v5.push_back(v10);
	v5.push_back(v10);

	v5.print1();
	v5.size_();

	std::cout << std::endl;
	std::cout << std::endl;









	Vector <int> v;
	v.push_back(72);
	v.push_back(71);
	try
	{
		v.insert(1, 9);
		v.insert(1, 9);

	}
	catch (std::out_of_range error)
	{
		std::cerr << "Error" << error.what() << '\n';
	}
	try
	{
		v.erese(2);
	}
	catch (std::out_of_range error)
	{
		std::cerr << "Error" << error.what() << '\n';
	}
	try
	{
		v.at(1);
	}
	catch (std::out_of_range error) {
		std::cerr << "Error" << error.what() << '\n';
	}
	v.print();
	v.size_();

	std::cout << std::endl;
	std::cout << std::endl;

	Vector <float> v1;
	v1.push_back(7.33);
	v1.push_back(72.32);
	v1.push_back(711.3);
	try
	{
		v1.insert(1, 9.32);
		v1.insert(2, 9.4);

	}
	catch (std::out_of_range error)
	{
		std::cerr << "Error" << error.what() << '\n';
	}
	try
	{
		v1.erese(2);
	}
	catch (std::out_of_range error)
	{
		std::cerr << "Error" << error.what() << '\n';
	}
	try
	{
		v1.at(2);
	}
	catch (std::out_of_range error) {
		std::cerr << "Error" << error.what() << '\n';
	}
	v1.print();
	v1.size_();


	std::cout << std::endl;
	std::cout << std::endl;


	int i;
	int array[10] = { 112, 12, 12 ,12, 12, 12, 12, 12, 2, 3 };
	Vector <int> v2(10, array[0]);
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(array[i]);
	}
	v2.push_back(2);
	v2.print();
	v2.size_();

	std::cout << std::endl;
	std::cout << std::endl;


	Point p1 = { 1,2,3 };
	Point p2 = { 3,2,1 };
	Point p3 = { 5,6,7 };
	Vector<Point> v3;
	v3.push_back(p1);
	v3.push_back(p2);
	v3.push_back(p3);
	for (i = 0; i < 3; i++) {
		v3[i];
	}
	v3.print();
	v3.size_();
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}
