//Enigma Code-Encode
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

void encode(string msg,int m1,int m2,int m3){
	m1=rand() % 26;
	//srand(time(NULL));
	m2=rand() % 26;
	//srand(time(NULL));
	m3=rand() % 26;
	//srand(time(NULL));
	cout<<m1<<" "<<m2<<" "<<m3<<" ";
	for(int i=0;i<msg.length();i++){
		msg[i]=msg[i]+(m1+m2+m3)/26;
		m1++;
		m2=m2+m1/4;
		m3=m3+m2/4;
	}
	cout<<"Encoded msg :- "<<msg<<endl;
}

int main(){
	cout<<"Enter which motor you want to use from 5 motors"<<endl;
	int m1,m2,m3;
	cin>>m1>>m2>>m3;
	string msg;
	cin>>msg;
	encode(msg,m1,m2,m3);
	return 0;
}