#include <stdio.h>




int main (void) {

    int A[30] = {1,2,2,2,4,5,7,13,14,345,345,0}; // 0 is used to indicate the end of valid data
    int l = 0;
    int r = 0;
    int mid = 0;
    int k = 345;
    int found = -1;
    while (A[r] != 0) {
        r++;
    }
    r--; // Adjust r to point to the last valid index

    while (l <= r){
        mid = (l+r)/2;
        //printf("mid: %d\n",mid);
        if (A[mid] == k) {
            r = mid-1;
            found = mid;
        } else if (A[mid] > k) {
            r = mid-1;
        } else {
             l = mid+1;
        }

    }
    printf("Found at index %d\n",found);



}