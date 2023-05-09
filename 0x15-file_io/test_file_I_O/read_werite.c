#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{

	char fname[] = "text.txt";
	char txt[] = "Text To Be Inputed Into The File\n";
	int fd;


	fd = open(fname, O_CREAT | O_WRONLY, 0644);
	
	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}

	if (write(fd, txt, sizeof(txt) - 1 ) == -1 )
	{
		perror("Write");
		exit(EXIT_FAILURE);
	}

	if (close(fd) == -1)
	{
		perror("Close");
		exit(EXIT_FAILURE);
	}

	printf("Wrote to [%s] to file [%s]\n", txt, fname);


	return (0);
}


