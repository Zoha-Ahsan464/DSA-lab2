void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testUnSortedArray() {
    int arr[] = {4,3,1,5,2};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testDuplicatevalues() {
    int arr[] = {4,4,1,5,2};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testSingleElement() {
    int arr[] = {1};
    bool result = isSorted(arr, 1);
    assert(result == true);
}
void testDescendingArray() {
    int arr[] = {5,4,3,2,1};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testNegativevalues() {
    int arr[] = {4,-1,2,7,-9};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true);
}
void testTwoValues() {
    int arr[] = {4,-1};
    bool result = isSorted(arr, 2);
    assert(result == true);
}