#include<iostream>
using namespace std;

int printO(int a, int b){
    if(a <= 0 or b <= 0){
        cout << "Invalid input";
    }
    for(int i = 0; i < a; i++){
        for(int ii = 0; ii < b; ii++){
            cout << "O";
    }
    cout << "\n";
}
return 0;
}

//Write the function printO() here

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

