#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"
#include "myrand.h"

struct student gen_student() {
    struct student example;
    // set the OSIS randomly in [200000000, 230000000)
    example.osis = rand_range(200000000, 230000000);
    // set the name with a random length in [5, 15)
    //     each character of the name is a random integer in the range of lower/uppercase (as relevant) characters
    int namelen = rand_range(5, 16);
    int i = 0;
    char name[15];
    name[i++] = rand_char(0);
    for (i; i < namelen; i++) {
        name[i] = rand_char(1);
    }
    name[i] = '\0';
    example.name = name;
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