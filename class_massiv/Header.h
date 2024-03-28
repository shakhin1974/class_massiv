#pragma once
#include<string>
using namespace std;
class massiv
{
public:
	massiv(int size,  int* mass)
	{
		this-> size = size;
		this->mass = mass;
	}
	~massiv()
	{
		for (int i = 0; i < size; i++)
		{
			cout << mass[i] << " ";

		}  
		cout << endl;
	}
 
	int Sort()
	{
		int temp;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (mass[j] > mass[j + 1]) {
					temp = mass[j];
					mass[j] = mass[j + 1];
					mass[j + 1] = temp;
					
				}
			} 
		}
		cout << endl;
		return *mass;
		cout << endl;
	}
	int dubl() {
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (mass[i] == mass[j])
				{
					cout << mass[i] << " ";
				}
			}
		}
		cout << endl;
		return *mass;
		cout << endl;
	}
private:
	int size;
	int* mass;
};