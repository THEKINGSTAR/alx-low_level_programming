#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void file_write(FILE *fptr, char data_in[]);

int main(void)
{
	FILE *fptr;


	fptr = fopen("text.txt","r");


	char data_in[] = "This is the data to be input into the File!!??\n";

	if (fptr == NULL)
	{
		printf("File not found.\nCreating The File\n");
		fptr = fopen("text.txt", "w");

		// input the dat in the file
		if (strlen(data_in) > 0)
		{
			file_write(fptr,data_in);
		}
	}
	else
	{
		printf("file opend\n");
		fptr = fopen("text.txt", "a");
		file_write(fptr,data_in);
	}

	return (0);
}

void file_write(FILE *fptr, char data_in[])
{

                        fputs(data_in, fptr);
			// ADD NEW LINE TO THE FILE
                        fputs("\n", fptr);
                        fclose(fptr);
                        printf("Data wreten in the file successfully\nFile Closed\n");
}


