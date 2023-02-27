#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {

	// declare a FILE pointer and int variable
	FILE *f_ptr;
	int i;

	// try to open a file that does not exist
	f_ptr = fopen("nosuch.file", "r");

	// display confirmation message or error message
	if(f_ptr != NULL){
		printf("File opened\n");
	}
	else {
		perror("Error");
	}

	// // output error message associated to each errno error code
	for (size_t i = 0; i < 44; i++)
	{
		printf("Error %zu: %s\n", i, strerror(i));
	}
	

	return 0;
}

/*

DISPLAYED OUTPUT:

Error: No such file or directory
Error 0: Undefined error: 0
Error 1: Operation not permitted
Error 2: No such file or directory
Error 3: No such process
Error 4: Interrupted system call
Error 5: Input/output error
Error 6: Device not configured
Error 7: Argument list too long
Error 8: Exec format error
Error 9: Bad file descriptor
Error 10: No child processes
Error 11: Resource deadlock avoided
Error 12: Cannot allocate memory
Error 13: Permission denied
Error 14: Bad address
Error 15: Block device required
Error 16: Resource busy
Error 17: File exists
Error 18: Cross-device link
Error 19: Operation not supported by device
Error 20: Not a directory
Error 21: Is a directory
Error 22: Invalid argument
Error 23: Too many open files in system
Error 24: Too many open files
Error 25: Inappropriate ioctl for device
Error 26: Text file busy
Error 27: File too large
Error 28: No space left on device
Error 29: Illegal seek
Error 30: Read-only file system
Error 31: Too many links
Error 32: Broken pipe
Error 33: Numerical argument out of domain
Error 34: Result too large
Error 35: Resource temporarily unavailable
Error 36: Operation now in progress
Error 37: Operation already in progress
Error 38: Socket operation on non-socket
Error 39: Destination address required
Error 40: Message too long
Error 41: Protocol wrong type for socket
Error 42: Protocol not available
Error 43: Protocol not supported

*/