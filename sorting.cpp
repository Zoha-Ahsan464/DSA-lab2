#include <iostream>
#include <cassert>
using namespace std;
//sorting function
bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}
//checking sorted array
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
//checkig unsorted arrya
void testUnSortedArray() {
    int arr[] = {4,3,1,5,2};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
int main(){
    testSortedArray();
    testUnSortedArray();
    cout << "All tests passed!" << endl;
    return 0;
}