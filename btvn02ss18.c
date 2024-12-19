#include<stdio.h>
#include<string.h>
int main(){
	struct Students{
		char name[50];
		int age;
		char phone[20];
	};
	struct Students student1;
	printf("moi ban nhap vao ten \n");
	fgets(student1.name,sizeof(student1.name),stdin);
	printf("moi ban nhap vao so tuoi\n");
	scanf("%d",&student1.age);
	printf("moi ban nhap vao so dien thoai\n");
	scanf("%s",student1.phone);
	printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phone);
	return 0;
}
