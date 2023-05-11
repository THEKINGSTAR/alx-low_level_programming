
#include <sys/types.h>
#include <sys/stat.h>

__attribute__((constructor)) void checker_constructor(void)
{
	umask(0);
}
