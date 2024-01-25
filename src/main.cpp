#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  int loopcount=0;
  int maximum=0;
  int minimum=10000000;
  int total=0;
  float average=0;
  int input = 1;
  int remain=0;


  while (true) {
  	cout << "Enter a number that is a multiple of 3 or enter 0 to quit: " << endl;
  	cin >> input;
	if (input == 0) {
		break;
	}
  	else {
  		int input_check=input;
  		remain = input_check % 3;
  		if (remain != 0) {
  			cout << "Invalid Input: Not a number that is not a multiple of 3." << endl;
  			continue;
  		}
  		else {
  			loopcount++;
  			total = input_check + total;
  			if (maximum < input_check) { maximum = input_check; }
  			if (minimum > input_check) { minimum = input_check; }
  		}
  	}
  }
  if (loopcount != 0) {
  	average = total / loopcount;
  	cout << setw(2) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Total" << setw(10) << "Average" << endl;
  	cout << "======================================================" << endl;
  	cout << setw(1) << loopcount << setw(8) << minimum << setw(10) << maximum << setw(12) << total << setw(8) << average << endl;
  }
  else {
  	cout << "No values were entered." << endl;
  }

  return 0;
}
