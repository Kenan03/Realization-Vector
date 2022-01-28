/*
������� � ����������
�� ���� ������� ��������� ����������� ����������� ����� � �������� ������������. ���� � ������� �� ��������� ����������� �� ������������ ������, �� ���������, ��� ��������� ����������� ������.
�� ���� �������� ����� �������� ����������� ����������� ����������.

� main ������ ���� ������������������, ��� ��������� ����� ��������:
��� ������ ������������ ����
��� struct Point { int x; int y; int z; }

������ ������� �� ������ ����.
1. ������� ���������� vector �� ��������.
vector(size_t size, const T& value)
push_back
size
operator[]
at (������� ����������)
insert(size_t i, const T& value) (������� ����������)
erase(size_t i) (������� ����������)

*/

#include<iostream>
//#define STD_VECTOR_SIZE 32

template <typename T>
class Vector {
private:
    T* array;
    size_t capacity;
    size_t size;
public:
	Vector();
	Vector(size_t size, const T& value);
    Vector(Vector& vec);
	~Vector();
	Vector<T>& operator=(const Vector<T>& vec);
    void size_();
    void print() const;
	void print1() const;
    void push_back(const T& value); 
	T& at(size_t index);
    void insert(size_t index, const T& value);
    void erese(size_t index);
	T& operator[] (const int index);
	const T& operator[] (const int index) const;



};


struct Point {
	int x;
	int y;
	int z;
};
std::ostream& operator<<(std::ostream& os, const Point& p) {
	os << "coordinates: x=" << p.x << " y=" << p.y << " z=" << p.z;
	return os;
}

template <typename T > Vector <T>::Vector()
{
	capacity = 0;
	size = 0;
	array = new T[++capacity];
	
	//array = new T[STD_VECTOR_SIZE];
	//size = 0;
	//capacity = STD_VECTOR_SIZE;
}

template <typename T > Vector<T>::Vector(size_t size, const T& value)
//����������� 
{
	array = new T[size];
	capacity = size;
	array[0] = value;
	
}



template <typename T > Vector<T>::Vector(Vector& vec) // ����������� �����
{
	this->size = vec.size;
	capacity = size;
	array = new T[vec.size];
	for (int i = 0; i < vec.size; i++)
	{
		array[i] = vec.array[i];
	}
}
template <typename T > Vector<T>::~Vector() 
{
	delete[] array;
}

template <typename T > Vector<T>& Vector<T>::operator=(const Vector<T>& vec) // �������� ������������
{
	if (&vec == this)
		return *this;
	delete[] array;
	size = vec.size;
	array = new T[size];
	for (int i = 0; i < vec.size; i++)
	{
		array[i] = vec.array[i];
	}
	return *this;
}


template <typename T > void Vector<T>::print() const //������� �����
{
	std::cout << "Your array: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

}
template <typename T > void Vector<T>::print1() const //������� �����
{
	std::cout << "Your array: ";
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << array[i][j] << " ";

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}

template <typename T > void Vector<T>::size_() // ������� ������ ������� � �������
{
	std::cout << "Size array: " << size;
	std::cout << std::endl;

	std::cout << "Capacity: " << capacity;
	std::cout << std::endl;

}

template <typename T > void Vector<T>::push_back(const T& value) //���������
{
	T* tmp = NULL;
	if (capacity == size)
		capacity *= 2;
	tmp = new T[capacity];
	for (int i = 0; i < size; i++)
		tmp[i] = array[i];
	delete[] array;
	array = tmp;
	array[size] = value;
	size++;
}
template <typename T > T& Vector<T>::at(size_t index)
{
	
		if (index >= size)
		{
			throw std::out_of_range("Index out of range of vector in function at");
		}
		return array[index];
	
}
template <typename T > void Vector<T>::insert(size_t index, const T& value) // ������� ��� ���������� �������� � ����� ������
{
	 
		if (index >= size)
		{
			throw std::out_of_range("Index out of range of vector in function insert");			
		}
		int j = 0;
		T* tmp = NULL;
		if (capacity == size)
			capacity *= 2;
		tmp = new T[capacity];
		for (int i = 0; i < size; i++)
			tmp[i] = array[i];
		delete[] array;
		array = tmp;
		for (j = size; j > index; j--)
			array[j] = array[j - 1];
		array[index] = value;
		size++;

	
}

template <typename T > void Vector<T>::erese(size_t index) // �������� �������� �� �������
{


		if (index >= size) 
		{
			throw std::out_of_range("Index out of range of vector in function erase");
		}
		for (size_t j = index; j < size; j++) {
			array[j] = array[j + 1];
		}
		size--;
	
	
}
template <typename T > T& Vector<T>:: operator[] (const int index) 
{
	return array[index];
}
template <typename T > const T& Vector<T>:: operator[]  (const int index)const 
{
	return array[index];
}


     


