#ifndef MY_HEADER_
#define MY_HEADER_


//declare and initialize struct for students
typedef struct student {
	char name[30];
	char initials[4];
	char favorite_musician[30];
	char dream_car[30];
	int student_number;
	struct student * next_node;
}studentData;

//declare functions
void all_student_data(studentData *head)
{
	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("Student %d\nName: %s\nInitials: %s\nFavorite Musician: %s\nDream Car: %s\n\n", head->student_number, head->name, head->initials, head->favorite_musician, head->dream_car);
			head = head->next_node;
		}
		return 1;
	}
	else
	{
		return -1;
	}
};

void student_and_car(studentData *head, int data_selection)
{
	if (head != NULL)
	{
		switch (data_selection)
		{
		case 1:
		{
			while (head != NULL)
			{
				printf("%s's initials are %s\n", head->name, head->initials);
				head = head->next_node;
			}
			break;
		}
		case 2:
		{
			while (head != NULL)
			{
				printf("%s's favorite musician is %s\n", head->name, head->favorite_musician);
				head = head->next_node;
			}
			break;
		}
		case 3:
		{
			while (head != NULL)
			{
				printf("%s's dream car is a %s\n", head->name, head->dream_car);
				head = head->next_node;
			}
			break;
		}
		default:
			printf("You did not make a valid selection.\nGoodbye!\n");
			break;
		}

		return 1;
	}
	else
	{
		return -1;
	}
};

void specific_student(studentData *head, int student_selection)
{
	if (head != NULL)
	{
		while (head != NULL)
		{
			if (head->student_number != student_selection)
			{
				head = head->next_node;
			}
			else
			{
				printf("Student %d\nName: %s\nInitials: %s\nFavorite Musician: %s\nDream Car: %s\n\n", head->student_number, head->name, head->initials, head->favorite_musician, head->dream_car);
				return 1;
			}
		}
	}
	else
	{
		return -1;
	}
};
#endif // !MY_HEADER_
