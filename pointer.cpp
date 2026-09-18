#include <iostream>
using namespace std;
void analyze_pointer(int* ptr){
    //printing memory location pointed by pointer
    cout << "Memory location pointed by pointer: " << ptr << endl;
    //printing value of integer at the memory location
    cout << "Value of integer at the memory location pointed by pointer: " << *ptr << endl;
}
int main(){
    //int on stack
    int iValue = 10;
    int *i = &iValue;
    //calling function
    cout << "Stack int: \n";
    analyze_pointer(i);

    //int on heap
    int* iHeap = new int();
    *iHeap = 5;
    //calling function
    cout << "\nHeap int: \n";
    analyze_pointer(iHeap);
}