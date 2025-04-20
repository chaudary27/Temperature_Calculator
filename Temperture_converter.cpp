// Write a temperature-conversion program that gives the user the option of converting
// Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
//floating-point numbers. Interaction with the program might look like this:
// Type 1 to convert Fahrenheit to Celsius,
// 2 to convert Celsius to Fahrenheit: 1
// Enter temperature in Fahrenheit: 70
// In Celsius that’s 21.111111

#include<iostream>
using namespace std;
int main(){
	char again;
	int choice;
	int number;
	double celcius=0;
	double fahrenhiet=0;
do{

	cout<<"welcome to temperature convertion"<<endl;
	cout<<"Type 1 to convert Fahrenheit to Celsius, 2 to convert Celsius to Fahrenheit "<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		
	if(choice==1){
		cout<<"Enter the number you want to convert to celcius"<<endl;
		cin>>number;
		celcius=(5.0/9 * (number - 32));
		cout<<number<< " in  celcius is "<<celcius;
	}
	else if(choice==2){
		cout<<"Enter the number you want to convert to fahrenhiet"<<endl;
		cin>>number;
		fahrenhiet=((9.0/5 * number) + 32);
		cout<<number <<" in fahrenhiet is "<<fahrenhiet;
	}
	else{
		cout<<"invalid choice";
	}
	cout<<"do you want to convert again(y for yes)"<<endl;
	cin>>again;
}while(again=='y');
	return 0;
}