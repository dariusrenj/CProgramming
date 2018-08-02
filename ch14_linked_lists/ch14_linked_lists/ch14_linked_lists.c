/*
Name: Zackery Vering
Title: ch14 Linked Lists
Date: 1 August 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_header.h"

//declare functions
void all_student_data(studentData *head);
void student_and_car(studentData *head, int data_selection);
void specific_student(studentData *head, int student_selection);

//declare number of students variable
int number_of_students = 10;

int main(void)
{

	//declare selection variables
	int selection = 0;
	int student_selection = 0;
	int data_selection = 0;

	//allocate memory
	studentData * stu_01 = (studentData*)malloc(sizeof(studentData)); //head
	studentData * stu_02 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_03 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_04 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_05 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_06 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_07 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_08 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_09 = (studentData*)malloc(sizeof(studentData));
	studentData * stu_10 = (studentData*)malloc(sizeof(studentData)); //tail

																	  //define structure objects
																	  //head
	strcpy(stu_01->name, "Guy Somewhere");
	strcpy(stu_01->initials, "GFS");
	strcpy(stu_01->favorite_musician, "Five Finger Death Punch");
	strcpy(stu_01->dream_car, "Dodge Ram 1500");
	stu_01->student_number = 1;
	stu_01->next_node = stu_02;

	//node 2
	strcpy(stu_02->name, "Reginald Butler");
	strcpy(stu_02->initials, "RTB");
	strcpy(stu_02->favorite_musician, "Otep");
	strcpy(stu_02->dream_car, "Chevrolet Corvette");
	stu_02->student_number = 2;
	stu_02->next_node = stu_03;

	//node 3
	strcpy(stu_03->name, "Sarah Anderson");
	strcpy(stu_03->initials, "SAA");
	strcpy(stu_03->favorite_musician, "Montgomery Gentry");
	strcpy(stu_03->dream_car, "Chevrolet Camaro");
	stu_03->student_number = 3;
	stu_03->next_node = stu_04;

	//node 4
	strcpy(stu_04->name, "Gary Person");
	strcpy(stu_04->initials, "GSP");
	strcpy(stu_04->favorite_musician, "Korn");
	strcpy(stu_04->dream_car, "Plymouth Barracuda");
	stu_04->student_number = 4;
	stu_04->next_node = stu_05;

	//node 5
	strcpy(stu_05->name, "David Andrews");
	strcpy(stu_05->initials, "DRA");
	strcpy(stu_05->favorite_musician, "Eric Church");
	strcpy(stu_05->dream_car, "Jeep Wrangler");
	stu_05->student_number = 5;
	stu_05->next_node = stu_06;

	//node 6
	strcpy(stu_06->name, "Fred Jones");
	strcpy(stu_06->initials, "FTJ");
	strcpy(stu_06->favorite_musician, "Combichrist");
	strcpy(stu_06->dream_car, "Dodge Charger");
	stu_06->student_number = 6;
	stu_06->next_node = stu_07;

	//node 7
	strcpy(stu_07->name, "Some Guy");
	strcpy(stu_07->initials, "SRG");
	strcpy(stu_07->favorite_musician, "AC/DC");
	strcpy(stu_07->dream_car, "Ford Mustang");
	stu_07->student_number = 7;
	stu_07->next_node = stu_08;

	//node 8
	strcpy(stu_08->name, "John Smith");
	strcpy(stu_08->initials, "JPS");
	strcpy(stu_08->favorite_musician, "Amon Amarth");
	strcpy(stu_08->dream_car, "Pontiac GTO");
	stu_08->student_number = 8;
	stu_08->next_node = stu_09;

	//node 9
	strcpy(stu_09->name, "Bob Human");
	strcpy(stu_09->initials, "BTH");
	strcpy(stu_09->favorite_musician, "Johnny Cash");
	strcpy(stu_09->dream_car, "Ford F-150");
	stu_09->student_number = 9;
	stu_09->next_node = stu_10;

	//node 10
	strcpy(stu_10->name, "Zackery Vering");
	strcpy(stu_10->initials, "ZTV");
	strcpy(stu_10->favorite_musician, "Rob Zombie");
	strcpy(stu_10->dream_car, "Ford Bronco");
	stu_10->student_number = 10;
	stu_10->next_node = NULL;

	studentData *head = stu_01;

	printf("Which of the following would you like to do?\n\n1: Print all student data.\n2: Print all students and a specific field.\n3: Print the data for a specific student.\nPlease make your selection:");
	scanf("%d", &selection);


	switch (selection)
	{
	case 1:		//call all_student_data function
	{
		all_student_data(head);
		break;
	}
	case 2:		//call student_and_car function
	{
		printf("Which field would you like to print data for?\n1: Initials\n2: Favorite Musician\n3: Dream Car\nPlease make your selection:");
		scanf("%d", &data_selection);
		student_and_car(head, data_selection);
		break;
	}
	case 3:		//call specific_student function
	{
		printf("Which student (1-%d) would you like to print data for?\nPlease make your selection:", number_of_students);
		scanf("%d", &student_selection);
		specific_student(head, student_selection);
		break;
	}
	default:
		printf("You did not select a valid option.\nGoodbye\n");
		break;
	}

	getchar();
	getchar();
	return 0;
};