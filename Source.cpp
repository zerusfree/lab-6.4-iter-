#include<iostream>
#include<iomanip>

using namespace std;

void Create(float* a, const int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() / static_cast<float>((10000)) - 1;
}

void Print(float* a, const int size)
{
	cout << "a [ ";
	for (int i = 0; i < size; ++i)
		cout << a[i] << " ";
	cout << " ]" << endl;
}

int Min(float* a, const int size)
{
	int indexOfMin = 0;
	float min = a[indexOfMin];
	for (int i = 1; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			indexOfMin = i;
		}
	}
	return  indexOfMin;
}
float SumOfTwoNegative(float* a, const int size)
{
	int index1=-1;
	int index2=-1;
	float result = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0 )
		{
			if(index1<0) 
			{
				index1 = i;
			}
			else if (index2 < 0)
			{
				index2 = i;
			}
			
		}
	}

	for (int i = index1; i <= index2; i++)
	{
		result += a[i];
	}

	return  result;
}

void Sort(float* a, const int size)
{
	float* b = new float[size];
	int j = 0; 


	for (int i = 0; i < size; i++)
	{
		if (abs(a[i]) < 1)
		{
			b[j] = a[i];
			j++;
			
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (abs(a[i]) > 1)
		{
			b[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		a[i] = b[i];
	}

}



int main()
{
	srand((unsigned)time(NULL));
	int size = 0;
	cout << "Size of array:"; cin >> size;

	float* array;
	array = new float[size];

	Create(array, size);
	Print(array, size);

	cout << "Min = " << Min(array, size) << endl;
	cout << "Sum = " << SumOfTwoNegative(array, size) << endl;
	Sort(array, size);
	Print(array, size);

	delete[] array;
	return 0;
}

