/* lab09-01.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose:
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_PASSW_LEN 7
#define MAX_PASSW_LEN 50

/* -------------------------------------------------------
 * @brief Computes the Hash.  You do not need to modify this function
 * @param str the string to hash
 * @param length the length of the string
 */
unsigned int ELFHash(const char* str, unsigned int length) {
    unsigned int hash = 0;
    unsigned int x    = 0;
    unsigned int i    = 0;

    for (i = 0; i < length; ++str, ++i) {
        hash = (hash << 4) + (*str);

        if ((x = hash & 0xF0000000L) != 0) {
            hash ^= (x >> 24);
        }

        hash &= ~x;
    }

    return hash;
}


int main(void) {

    // TODO String Variables
    char newPass[] = "";
    char repeatPass[] = "";
    int newPassLen = 0;


    // Get New Password Candidate from the User
    printf("enter a new password NO SPACES ");
    printf("(%d to %d chars long): ", MIN_PASSW_LEN, MAX_PASSW_LEN);
    // TODO scanf


    // Check the Length of the New Password Candidate
    // TODO Get String Length

    if(newPassLen < MIN_PASSW_LEN){
        printf("new password is too short - terminating\n");
        exit(1);
    }

    // TODO Check to See if Password is Too Long


    // Get the Password a Second Time
    printf("enter it again: ");
    // TODO Get the Password Again


    // Check to See if the Entries Match
    // TODO Compare String 
    //    printf("new password accepted\n");
    //    printf("it will be stored as: %0x32u\n", ELFHash(newPass, newPassLen));
    //} 
    //else {
    //    printf("passwords do not match - terminating\n");
    //    exit(1);  
    //}

    return 0;
}

