#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "student.h"

struct student gen_student() {
    struct student example;
    // set the OSIS randomly in [200000000, 230000000]
    // set the name with a random length in [5, 15]
    //     each character of the name is a random integer in the range of lower/uppercase (as relevant) characters
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

