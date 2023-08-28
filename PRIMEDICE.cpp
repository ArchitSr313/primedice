#include <iostream>
using namespace std;

bool prime(int a){
	    for (int i = 2; i < a; i++)
	    if(a%i==0)
	        return false;
	    
	return true;
}
int main() {
	// your code goes here
	
	int t,a,b;
	std::cin >> t;
	while(t--){
	    std::cin >> a>>b;
	    prime(a+b)? cout << "alice"<<endl : cout<<"bob"<<endl;
	}
	return 0;
}
