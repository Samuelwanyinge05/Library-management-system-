/*-----------------------------------
 Project:  Library Management System
 Author:   Samuel wanyinge
 Date:     July, 2021
 Compiler: C99
 License:  MIT
-----------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

// Data structures

struct user {
    int id;
    char name[100];
    char tel[13];
    int is_staff;
};

// function prototypes
void execute_action(int action);
void close();
int menu();
void add_user();
void view_users();

int main()
{
    int action;
    printf("\tCounty Library Management System!\n");
    printf("Welcome mr,Samuel\n");
