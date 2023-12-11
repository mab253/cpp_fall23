#include <iostream>
using namespace std;

int main() {

  // PROJECT EULER!
  // PROBLEM 1

  int counter = 1;
  int mySum = 0;

  while (counter < 1000) {
    // checking if my n is a multiple of 3 or 5
    if ((counter % 3 == 0) || (counter % 5 == 0)) {
      mySum += counter;
    }
    counter++;
  }

  cout << mySum << endl;
  // the answer we want is 233168
  return 0;
}
