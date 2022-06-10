#include<bits/stdc++.h>
using namespace std;

int addBinary(int a, int b){
	int ans =;
	int prevCarry = 0;
	
	while(a>0 && b>0){
		if(a%2==0 && b%2==0){
			ans = ans*10 + prevCarry;
			prevCarry =0;
		}
		
		if((a%2==1 && b %2==1) || (a%2==1 && b%2 ==0)){
			if(prevCarry==0){
				ans = ans*10 + 0;
				prevCarry =1;
				
			}else{
				ans =ans*10 +1;
				prevCarry=0;
			}
		}
		else{
			ans = ans *10 + prevCarry;
			prevCarry =1;
			
		}
		
		a/=10;
		b/=10;
		
		while(a>0){
			if(prevCarry==1){
					if(a%2==0){
				
				ans = ans*10 + 0;
				prevCarry =1;
			}else{
				ans = ans*10 + 1;
				prevCarry =0;
			}
			}
			else{
				ans = ans *10 + a%2;
				
			}
			a/=1;
		
		}
		
		
				while(b>0){
			if(prevCarry==1){
					if(b%2==0){
				
				ans = ans*10 + 0;
				prevCarry =1;
			}else{
				ans = ans*10 + 1;
				prevCarry =0;
			}
			}
			else{
				ans = ans *10 + a%2;
				
			}
			b/=1;
		
		}
		
		
		
	}
}
int main(){
	
	
	return 0;
	
}
