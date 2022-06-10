#include <bits/stdc++.h>
using namespace std;



int main(){
	int arr[4] = {33,2,3,4};

int counter =1;
while(counter < 4){
	for(int i =0 ;i<4-counter;i++){
		if(arr[i] > arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	counter++;
}

cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;


	return 0;
}
