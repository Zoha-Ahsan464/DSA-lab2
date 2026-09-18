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
//testing duplicate values
void testDuplicatevalues() {
    int arr[] = {4,4,1,5,2};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//testing single element
void testSingleElement() {
    int arr[] = {1};
    bool result = isSorted(arr, 1);
    assert(result == true);
}
//testing descending array
void testDescendingArray() {
    int arr[] = {5,4,3,2,1};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//testing negative values
void testNegativevalues() {
    int arr[] = {4,-1,2,7,-9};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//testing empty array
void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true);
}
//testing two values
void testTwoValues() {
    int arr[] = {4,-1};
    bool result = isSorted(arr, 2);
    assert(result == false);
}
int main(){
    testSortedArray();
    testUnSortedArray();
    testDuplicatevalues();
    testSingleElement();
    testDescendingArray();
    testNegativevalues();
    testEmptyArray();
    testTwoValues();
    cout << "All tests passed!" << endl;
    return 0;
}