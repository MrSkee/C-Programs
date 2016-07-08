/*Sean Kee*/
/*Student Structure*/
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int age;
	int score[5];
	float avg;
	char status[5];
} student;

student average(student st) {
	float avg = 0;
	for (int j = 0; j < 5; j++) {
		avg += st.score[j];
	}
	avg /= 5;
	st.avg = avg;
	
	return st;
}
student status(student st) {
	if (st.avg >= 65)
		strcpy(st.status, "PASS");
	else
		strcpy(st.status, "FAIL");
	
	return st;
}

int main() {
	int grade;
	int i;
	int j;
	student st[5];
	printf("STUDENT AVERAGE DATA STRUCTURE\n");
	printf("******************************\n\n");
	for (i = 0; i < 5; i++) {
		printf("Student %d Name #: ", i + 1);
		fgets(st[i].name, sizeof(st[i].name), stdin);
		st[i].name[strlen(st[i].name)-1] = '\0';
		printf("%s's Age #: ", st[i].name);
		scanf("%d", &st[i].age);
		getchar();
		printf("\n");
	}
	for (i = 0; i < 5; i++) {
		printf("\n");
		for (j = 0; j < 5; j++) {
			printf("Input score %d for %s #: ", j + 1, st[i].name);
			scanf("%d", &st[i].score[j]);
		}
		st[i] = average(st[i]);
		st[i] = status(st[i]);
	}
	printf("\n      NAME    AGE    AVERAGE    STATUS\n\n\n");
	for (i = 0; i < 5; i++) {		
		printf("%10s %6d %11.02f %8s\n\n", st[i].name, st[i].age, st[i].avg, st[i].status);
	}

	return 0;
}
