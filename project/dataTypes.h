
typedef struct{
	int studentId;
	char classroomId[10];
	char name[25];
	char email[30];
	char phoneNumber[15];
	
}Student;

typedef struct{
	int teacherId;
	char classroomId[10];
	char name[25];
	char email[30];
	char phoneNumber[15];
}Teacher;

typedef struct{
	int classroomId;
	char teacherId[10];
	char name[25];
}Classroom;