#include<stdio.h>
#include<stdlib.h>
#include "student.h"

int main() {
    for (int i = 0; i < 4; i++) {
        struct student stu = gen_student();
        printf("Randomly generated student info:\n\t");
        print_student(stu);
        int default_osis = 999999999;
        char* default_name = "defaultname";
        mod_student(&stu, default_osis, default_name);
        printf("Manually changed student info expected to be:\n\tOSIS: %d; Name: %s\n", default_osis, default_name);
        printf("Manually changed student info is returned as:\n\t");
        print_student(stu);
    }
    
}