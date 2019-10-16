#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"
#include "myrand.h"

struct student gen_student() {
    struct student example;
    example.osis = rand_range(200000000, 230000000); // set the OSIS randomly in [200000000, 230000000)

    int namelen = rand_range(5, 16); // name is 5-15 characters long
    int i = 0;
    char name[16];
    name[i++] = rand_char(0); // first letter is random capital
    for (i; i < namelen; i++) { // fill in rest of name with random lowercase letters
        name[i] = rand_char(1);
    }
    name[i] = '\0'; // terminate
    example.name = name; // assign

    return example;
}

int print_student(struct student subject) {
    printf("OSIS: %d; Name: %s\n", subject.osis, subject.name);
    return 0;
}

int mod_student(struct student* psubject, int new_osis, char* new_name) {
    psubject->osis = new_osis;
    psubject->name = new_name;
}