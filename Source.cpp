//do while loop that adds the sum of five numbers

#include<iostream>
using namespace std;

int main()
{

	//variables set to 0 

	int counter = 0;
	int sum = 0;
	int inputNum;

	do
	{
		cout << "Enter a number:  ";
		cin >> inputNum;

		sum += inputNum;
		counter++;
	} 
	while (counter < 5);

	cout << "The sum of the value is:  " << sum << endl;

}