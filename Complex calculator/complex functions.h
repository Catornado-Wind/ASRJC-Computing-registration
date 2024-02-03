#include <bits/stdc++.h>
using namespace std;

pair<float, float> add(pair<float, float> a, pair<float, float> b){
	return pair<float, float>(a.first+b.first, a.second+b.second);
}

pair<float, float> subtract(pair<float, float> a, pair<float, float> b){
	return pair<float, float>(a.first-b.first, a.second-b.second);
}

pair<float, float> multiply(pair<float, float> a, pair<float, float> b){
	float r = (a.first*b.first)-(a.second*b.second);
	float i = (a.first*b.second)+(a.second*b.first);
	return pair<float, float>(r, i);
}

pair<float, float> divide(pair<float, float> a, pair<float, float> b){
	float r = ((a.first*b.first)+(a.second*b.second))/(pow(b.first, 2)+pow(b.second, 2));
	float i = ((a.second*b.first)-(a.first*b.second))/(pow(b.first, 2)+pow(b.second, 2));
	return pair<float, float>(r, i);
}

pair<float, float> power(pair<float, float> a, int n){
	if(n==1){
		return a;
	}
	else if(n%2==0){
		pair<float, float> p = power(a, n/2);
		return multiply(p, p);
	}
	else{
		pair<float, float> p = power(a, (n-1)/2);
		return multiply(multiply(p, p), a);
	}
}

pair<float, float> root(pair<float, float> a, int n){
	float radius = hypot(a.first, a.second);
	float cosine = cos(360+(acos((a.first)/radius))/n);
	float sine = sin(360+(asin((a.second)/radius))/n);
	radius = pow(radius, 1/n);
	
	return pair<float, float>(radius*cosine, radius*sine);
}

void print_complex(pair<float, float> z){
	if(z.first!=0){
		cout<<z.first;
	}
	if(z.second>0){
		cout<<"+"<<z.second<<"i";
	}
	else if(z.second<0){
		cout<<z.second<<"i";
	}
	if(z.first==0 and z.second==0){
		cout<<0;
	}
}

pair<pair<float, float>, pair<float, float>> input_2_complex(){
	float a,b;
	
	cout<<"\nfirst complex number, a+bi:";
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	pair<float, float> n1 = pair<float, float>(a, b);
			
	cout<<"\nsecond complex number, c+di:";
	cout<<"\nc = ";
	cin>>a;
	cout<<"d = ";
	cin>>b;
	pair<float, float> n2 = pair<float, float>(a, b);
	
	return pair<pair<float, float>,pair<float, float>>(n1, n2);
}

pair<pair<float, float>, int> input_complex_and_integer(){
	float a,b;
	
	cout<<"\ncomplex number, a+bi:";
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	pair<float, float> n1 = pair<float, float>(a, b);
	
	int n2;	
	cout<<"\ninteger, c:";
	cout<<"\nc = ";
	cin>>n2;
	
	return pair<pair<float, float>,int>(n1, n2);
}


