#include <iostream>

using namespace std;

class Complexity
{
	private: int j,i,n;
	public: void sum(){
		cout<<"Enter value of n"<<endl;
		cin>>n;
		for(i=1;i<=n;i++){
			
			for(j=1;j<=n;j++){
		
				cout<<i<<"\t*"<<endl;
			}
			cout<<"_"<<endl;	
		}
	}


};
int main()
{
	Complexity co;
	co.sum();
	return 0;
	
}
