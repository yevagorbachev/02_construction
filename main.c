#include<stdio.h>
#include<stdlib.h>
#include<student.h>

int main() {
    struct student arr_stu[4];
    struct student* arr_pstu[4]; 
    for (int i = 0; i < 4; i++) {
        arr_stu[i] = gen_student();
        arr_pstu[i] = &arr_stu[i];
        printf("Values for student %d:\n", i);
        print_student(arr_stu[i]);
    }
    
}