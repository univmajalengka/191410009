#include<iostream>
using namespace std;

int a[10] = {2,3,3,2,5,6,9,9,10,10},tmp,jumlah;
int main ()
{
	for(int h=0; h<10; h++)
	{
		for(int i=h+1; i<10; i++)
		{
			if(a[h] > a[i])
			{
				tmp = a[i];
				a[i] = a[h];
				a[h] = tmp;
			}
		}
		cout << a[h] << " ";
	}
	cout << "\nAngka yang duplikat adalah : " ;
	for(int h=0; h<10; h++)
	{
		jumlah = 0;
		for(int i=0; i<10; i++)
			{
				if(a[h] == a[i])
				jumlah++;		
			}
		if(jumlah != 1 && a[h] != a[h-1])
		cout <<a[h]<<" ";
	}
	return 0;
}
