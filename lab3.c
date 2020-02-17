#include <limits.h>
#include <stdio.h>
#include <assert.h>

unsigned countOnes(int num, int bin[32]){
    /*Your Code here*/
}

void printBinary(int num){
    /*Your Code here*/
}

/**************** Do not touch anything after this comment *************/

int compareArrays(int arr1[32], int arr2[32]){
    for(int i = 0; i < sizeof(int); i++){
        if(arr1[i] != arr2[i]) return 0;
    }
    return 1;
}
int main(){
    ///////// PART A Tests /////////
    assert(countOnes(2) == 1);
    assert(countOnes(255) == 8);
    assert(countOnes(-1) == 32);
    assert(countOnes(INT_MAX) == 31);
    assert(countOnes(INT_MIN) == 1);

    ///////// PART B TESTS /////////
    int binary[32];

    int testvalue = 1;
    int test1[32] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    printBinary(testvalue, binary);
    assert(compareArrays(test, binary);
    printf("\t...Test Passed!");

    int testvalue = 255;
    int test1[32] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 1,1,1,1, 1,1,1,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    printBinary(testvalue, binary);
    assert(compareArrays(test, binary);
    printf("\t...Test Passed!");

    int testvalue = 1431655765;
    int test1[32] = {0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    printBinary(testvalue, binary);
    assert(compareArrays(test, binary);
    printf("\t...Test Passed!");

    int testvalue = -1;
    int test1[32] = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    printBinary(testvalue, binary);
    assert(compareArrays(test, binary);

    printf("\tAll Tests Passed! Make sure to push to Github and submit your hash on MyCourses!");
}
