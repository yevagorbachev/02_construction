struct student {int osis; char* name;};
struct student gen_student();
int print_student(struct student subject);
int mod_student(struct student* subject, int new_osis, char* new_name);