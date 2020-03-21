#include <iostream>
using namespace std;
int main()
{
	int l[4][4][2] = { {1,2,3,4}, {5,6,7,8},{9,10} };
	int m[4][4][2] = { {1,2,3,4}, {5,6,7,8},{9,10} };
	int n[4][4][2];
	
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++)
		for(int z = 0; z < 2; z++){
			n[x][y][z] = l[x][y][z] + m[x][y][z];
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++)
		for(int z = 0; z < 2; z++){
			cout << n[x][y][z] << " ";
		}
			cout << endl;
	}
	
}
