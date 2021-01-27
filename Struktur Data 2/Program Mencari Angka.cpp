#include<iostream>
using namespace std;

int main()
{
	int A[10],index[10], i, j, k, n;
	cout<<"Masukan Jumlah Pengulangan Data:";
	cin>>n;
	cout<<"\n";
	
	for (i=1;i<=n;i++)
	{
		cout<<"Data Ke-"<<i<<":";
		cin>>A[i];
	}
	cout<<"Masukan Data Yang Akan anda Cari:";
	cin>>k;
	
	j=0;
	for(i=0;i<10;i++)
	{
		if(A[i]==k)
		{
			index[j]=i;
			j++;
		}
	}
	if(j>0)
	{
		cout<<"\n";
		cout<<"Data"<<k<<"yang dicari ada"<<j<<"buah\n";
		cout<<"Data tersebut terdapat dalam index ke";
		
		for(i=0;i<j;i++)
		{
			cout<<index[i]<<" ";
		}
			cout<<"\n";
		}
		else
		{	
			cout<<"\n";
			cout<<"Data tidak ditemukan dalam array\n";
		}
		cout<<"\n";
		return 0;
}
	
