//Enigma Code -Decode
#include <iostream>
using namespace std;

void decode(string msg,int m1,int m2,int m3){
	for(int i=0;i<msg.length();i++){
		msg[i]=msg[i]-(m1+m2+m3)/26;
		m1++;
		m2=m2+m1/4;
		m3=m3+m2/4;
	}
	cout<<"Decoded message :- "<<msg<<endl;
}

int main(){
	cout<<"Enter the value of m1 m2 m3 'Generated Random Value' \n";
	int m1,m2,m3;
	cin>>m1>>m2>>m3;
	cout<<"Enter Received message\n";
	string msg;
	cin>>msg;

	decode(msg,m1,m2,m3);	
	return 0;
}