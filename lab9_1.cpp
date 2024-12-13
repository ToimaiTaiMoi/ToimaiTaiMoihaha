#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    double loan , rate , pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 1;
    while(loan != 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << int(i); 
	cout << setw(13) << left << loan;
	double rate_p;
	rate_p = loan * rate / 100;
	cout << setw(13) << left << rate_p;
	double loan_rate;
	loan_rate = loan + rate_p;
	cout << setw(13) << left << loan_rate;
	double ans;
	if(loan_rate < pay){
	    pay = loan_rate;
	}
	cout << setw(13) << left << pay;
	ans = loan_rate - pay;
	cout << setw(13) << left << ans;
	cout << "\n";	
	loan = ans;
	i++;
    }
}
