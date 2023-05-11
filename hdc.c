#include "hdc.h"

/*
*  Calculates Hamming-Distance (Single-Threaded)
*/
int h_dist_s_thread(char s1[], char s2[]) {
    int counter = 0;
    for(int i = 0; i < strlen(s1); ++i) {
        if(s1[i] != s2[i]) {
            ++counter; 
        }
    }
    return counter;
}

/*
*  Checks if both strings have same length
*/
int check_len_of_str(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2)) {
        return 1;
    }
    return 0;
}

int main(void) {

    return 0;
}