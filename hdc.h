#include <string.h>
#include <pthread.h>
#define ST_F_THREAD -1
#define ST_F_LENGTH 1
#define ST_F_UNDEFINED -2
#define ST_S 0

/*
* METHOD:  h_dist_s_thread(char s1[], char s2[])
* RETURNS: STATUS_REASON
*          |
*          |__> STATUS_FAILURE_LENGTH:    strings don't have same length
*          |__> STATUS_FAILURE_UNDEFINED: undefined error
*          |__> STATUS_SUCCESS:           h_dist was calculated correctly
*
* EXPLANATION: Method calculates the hamming distance of two strings 
*/
int h_dist_s_thread(int* h_dist, char s1[], char s2[]) {
    int dist = -1;
    h_dist = &dist;
    if(check_len_of_str(s1,s2) != 0) {
        return ST_F_LENGTH;
    }
    for(int i = 0; i < strlen(s1); ++i) {
        if(s1[i] != s2[i]) {
            ++dist; 
        }
    }
    return ST_S;
}

/*
* METHOD:  int h_dist_m_thread(char s1[], char s2[])
* RETURNS: STATUS_REASON
*          |
*          |__> STATUS_FAILURE_THREAD:    problem with thread arised
*          |__> STATUS_FAILURE_LENGTH:    strings don't have same length
*          |__> STATUS_FAILURE_UNDEFINED: undefined error
*          |__> STATUS_SUCCESS:           h_dist was calculated correctly
*
* EXPLANATION: Method creates two threads that calculates the hamming distance of two strings 
*/
int h_dist_m_thread(int* h_dist, char s1[], char s2[]) {
    int dist = -1;
    h_dist = &dist;
    int length = strlen(s1);
    if(check_len_of_str(s1,s2) != 0) {
        return ST_F_LENGTH;
    }
    pthread_t thr1, thr2;

    //pthread_create(&thr1, NULL, h_dist, );

    return ST_S;
}

int h_dist() {
    int dist = -1;
    return dist;
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