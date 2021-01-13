#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 100; i++){
		if (i%3==0 && i%5 ==0){
			cout<<"upin ipin"<< endl;
		}else if (i%3==0){ cout<<"upin"<<endl;
		}else if (i%5==0){ cout<<"ipin"<<endl;
	} else {
		cout<<i<<endl;
	}
	}
		return 0;
}
