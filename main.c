#include<stdio.h>
#include<stdlib.h>
#include "student.h"
#include "myrand.h"

int main() {

    for (int i = 0; i < 4; i++) {
        struct student stu = gen_student();

        printf("Randomly generated student info:\n\t");
        print_student(stu);

        int rand_osis = rand_range(200000000, 230000000);
        char* default_name = "manualname";
        mod_student(&stu, rand_osis, default_name);

        printf("Manually changed student info expected to be:\n\tOSIS: %d; Name: %s\n", rand_osis, default_name);
        printf("Manually changed student info is returned as:\n\t");
        print_student(stu);
    }
    /**/
    
}