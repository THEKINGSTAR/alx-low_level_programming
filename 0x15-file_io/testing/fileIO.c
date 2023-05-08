#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//C File handling
//1. Stream-orinded data file - the data is stored in the same mannaer as it appear on the screen
//2. System-oriented data files - the data file are more closely associated with the os
//
//C file operations
//creation of a new file , openning readin writing data in a file closing a file.


/*
 * Steps for Processing a File
 * 1. Decalre a file pointer variable
 * 2. Open a file using fopen()
 * 3. Process the file using th suitable function
 * 4. Close the file using fclose() function
 *
 *
 */

// fopen , fclose ,getc , putc, getw, putw, frpintf , fscanf, fgets, fputs, feof

int main()
{
	//pointer to the file
	//FILE *fp;

	/*
	 * SYNTAX FOR FILE OPINIG IN C
	 *
	 * File *fopen(const char *filePath, const char * mode);
	 *
	 */
	//OPEN THE FILE
	//fp = fopen("Hello", "w");
	//pROCESSING OF THE FILE
	//fprintf(fp,"%s", "Hellow World");
	//fclose(fp);

	FILE *filename; //pointer variable ot the fiel (1 step ) for handling files in c
	filename = fopen("Hello", "r");
	
	char ch[100];
	
	printf("%s", fgets(ch, 50 ,filename));
	//CLOSE THE FILE
	fclose(filename);
	
	return (0);
}


