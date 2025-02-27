#include<iostream>
using namespace std;

int main(){
string name;
cout<<"Enter your name ?";
cin>>name;
int age ;
cout<<"Enter your age ?";
cin>>age;
if (age>18 ){
	cout<<name<<"you are  eligible for the admission"<<endl;
	
}

else if (age>50){
	cout<<name<<"you are not eligible"<<endl;
	
}
else {
	cout <<"access denied !!";
	
}
return 0;
}

