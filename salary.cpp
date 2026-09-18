#include <iostream>
using namespace std;

int main() {
    //for dynamic array size is not constant
    int size;
    //taking size as an input
    cout<< "Enter the size of array: ";
    cin >> size;
    //dynamic array
    int* salArray = new int[size];

 // Input salaries
 for (int i = 0; i < size; i++) {
 cout << "Enter Salary for employee " << (i + 1) << ": ";
 cin >> salArray[i];
 }

 // Apply increment formula
 for (int i = 0; i < size; i++) {
   salArray[i] = salArray[i] + salArray[i] / (i + 1);
 }

 // Display updated salaries
 cout << "\nUpdated Salaries: ";
 for (int i = 0; i < size; i++) {
 cout << salArray[i] << " ";
 }

 cout << endl;
 //free dynamically allocated memory
 delete[] salArray;

 return 0;
}