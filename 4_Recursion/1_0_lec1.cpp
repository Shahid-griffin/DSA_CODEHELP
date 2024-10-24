#include <iostream>
using namespace std;

int factorial(int n) {

	//base case
	if(n == 1)
		return 1;

	int chotiProblemAns = factorial(n-1);
	int badiProblemAns = n * chotiProblemAns;

	return badiProblemAns;
}

int fib(int n) {
	//base case
	if(n == 1) {
		//first term 
		return 0;
	}
	if(n == 2) {
		//second term
		return 1;
	}

	//RR -> f(n) = f(n-1) + f(n-2)
	int ans = fib(n-1) + fib(n-2);
	return ans;
}


void printCounting(int n) {
	//base case
	if(n == 0) {
		return;
	}

	//processing
	cout << n << " ";
	

	//re4ciursive relation
	printCounting(n-1);	
}

int main() {

	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;

	printCounting(n);
	cout << endl;


    // sample  for fbo 
	int ans = fib(n);
	cout << n <<"th term is: " << ans << endl; 

	return 0;

    // sample 2

    int t;
	cout << "Enter the value of n  " << endl;
	cin >> t;

	int ans  = factorial(t);

	cout << "Answer is: " << ans << endl;

	return 0;
}