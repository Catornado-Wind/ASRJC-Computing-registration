#include <bits/stdc++.h>
#include "complex functions.h"
using namespace std;


void calculator(){
	
	int operation;
	pair<pair<float, float>, pair<float, float>> num;
	pair<pair<float, float>, int> num2;
	pair<float, float> answer;
	
	cout<<"Choose an operation(type the number):\n(1)addition\n(2)subtracion\n(3)multiplication\n(4)division\n(5)n-th power\n(6)n-th root\n\n";
	cin>>operation;
	
	switch(operation){
		case 1:
		num = input_2_complex();
		answer = add(num.first,num.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break;
		
		case 2:
		num = input_2_complex();
		answer = subtract(num.first, num.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break;
		
		case 3:
		num = input_2_complex();
		answer = multiply(num.first, num.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break;
			
		case 4:
		num = input_2_complex();
		answer = divide(num.first, num.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break;
		
		case 5:
		num2 = input_complex_and_integer();
		answer = power(num2.first, num2.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break;
		
		case 6:
		num2 = input_complex_and_integer();
		answer = root(num2.first, num2.second);
		cout<<"\nAnswer = ";
		print_complex(answer);
		break; 
		
		default:
		cout<<"\n'"<<operation<<"'"<<" is not a valid input, please try again.\n\n";
		calculator();
	}
		
	cout<<"\n\n";
	system("pause");
}


int main(){
	calculator();
}