#include<stdio.h>
#include<string.h>
int main(){
	struct Students{
		char name[50];
		int age;
		char phone[20];
	};
	struct Students student1;
	strcpy(student1.name,"Pham Thi Tra My");
	student1.age=18;
	strcpy(student1.phone,"0879939577");
	printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phone);
	return 0;
}
