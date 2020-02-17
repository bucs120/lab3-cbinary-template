#include <limits.h>
#include <stdio.h>
#include <assert.h>

unsigned int countOnes(int num){
    //your code here
}

void storeBinary(int n, int bin[32]){
    //your code here
}

/**************** Do not touch anything after this comment *************/

int compareArrays(int arr1[32], int arr2[32]){
    printf("The Solution:[");
    for(int i = 0; i < 32; i++){
        printf("%d", arr1[i]);
    }
    printf("]\nYour Result:[");
    for(int i = 0; i < 32; i++){
        printf("%d", arr2[i]);
    }
    printf("]\n");
    for(int i = 0; i < 32; i++){
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
    printf("\t...Test Passed!\n\n");

    ///////// PART B TESTS /////////
    int binary[32];// = {0};

    int testvalue = 1;
    int test1[32] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    storeBinary(testvalue, binary);
    assert(compareArrays(test1, binary));
    printf("\t...Test Passed!\n\n");

    testvalue = 255;
    int test2[32] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 1,1,1,1, 1,1,1,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    storeBinary(testvalue, binary);
    assert(compareArrays(test2, binary));
    printf("\t...Test Passed!\n\n");

    testvalue = 1431655765;
    int test3[32] = {0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1, 0,1,0,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    storeBinary(testvalue, binary);
    assert(compareArrays(test3, binary));
    printf("\t...Test Passed!\n\n");

    testvalue = -1;
    int test4[32] = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
    printf("Testing Binary for Integer Value: %d\n", testvalue);
    storeBinary(testvalue, binary);
    assert(compareArrays(test4, binary));

    printf("\n\tAll Tests Passed! \nMake sure to push to Github and submit your hash on MyCourses!\n\n");
}
