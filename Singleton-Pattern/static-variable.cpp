#include <bits/stdc++.h>
using namespace std;


class Name{
	public:
	static int count;
	Name(){
		cout<<"count is "<<count<<endl;
		count++;
	}
	
};

int Name::count=0;

int main() { 
    Name x;
    Name y;
    Name z;
}
