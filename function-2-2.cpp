#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits){
    int track=1;
    if (binary_digits[0]==0){
        return 0;
    }
    for (int i=0;i<(number_of_digits-1);i++){
        track=track*2+binary_digits[i+1];
    }
    return track;
}