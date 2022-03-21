#include <stdio.h>
struct class {
	int roll_no;
	char grade;
	float marks;
};
void display(struct class class_record[3])
{
    printf("piyush bora\n");
	int i, len = 3;
	for (i = 0; i < len; i++) {
		printf("Roll number : %d\n",
			class_record[i].roll_no);
		printf("Grade : %c\n",
			class_record[i].grade);
		printf("Average marks : %.2f\n",
			class_record[i].marks);
		printf("\n");
	}
}

int main()
{
	struct class class_record[3]
		= { { 1, 'A', 89.5f },
			{ 2, 'C', 67.5f },
			{ 3, 'B', 70.5f } };
	display(class_record);
	return 0;
}
