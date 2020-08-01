#include<iostream>
using namespace std;
int main()
{
	int counts;
	cin >> counts;
	int *array = new int[counts];
	int *result = new int[counts];
	for (int i = 0; i < counts; i++)
		cin >> array[i];

	int work1 = 0;
	for (int i = 0; i < counts; i++)
		for (int j = 0; j < counts - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				work1 = array[j];
				array[j] = array[j + 1];
				array[j + 1] = work1;
			}
		}

	int work2 = array[0];
	int work3 = 1;
	result[0] = array[0];
	for (int i = 1; i < counts; i++)
	{
		if (array[i] == work2)
		{
			continue;
		}
		else
		{
			result[work3] = array[i];
			work2 = array[i];
			work3++;
		}
	}

	cout << work3 << endl;
	for (int i = 0; i < work3; i++)
		cout << result[i]<<" ";
}