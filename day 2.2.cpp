#include<iostream>

using namespace std ;

void sum (int a , int b){
	
	cout<<"sum => "<<a+b ;
	
}

void sub (int a , int b){
	
	cout<<"sum => "<<a-b ;
	
}

void multi (int a , int b){
	
	cout<<"sum => "<<a*b ;
	
}

void div (int a , int b){
	
	cout<<"sum => "<<a/b ;
	
}


int main (){
	
	int a , b ,n ;
	
	x:
	cout<<"Enter First value : " ;
	cin>>a ;
	
	cout<<"Enter second value : " ;
	cin>>b ;
	
	cout<<endl<<"Press 1 for '+' , press 2 for '-' , Press 3 for '*' , press 2 for '/' "<<endl ;
	
	cout<<"Enter Selection : " ;
	cin>>n ;
	
	switch(n){
		
		case 1 :
			
			sum(a,b);
			cout<<endl<<endl ;
			goto x ;
			
		case 2 :
			
			sum(a,b);
			cout<<endl<<endl ;
			goto x ;
			
		case 3 :
			
			sum(a,b);
			cout<<endl<<endl ;
			goto x ;
			
		case 4 :
			
			sum(a,b);
			cout<<endl<<endl ;
			goto x ;		
			
		default :
			
			cout<<"Enter valid Input!!!"<<endl<<endl ;
			goto x ;	
		
	}
		
	return 0 ;
}
