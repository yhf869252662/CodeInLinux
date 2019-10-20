#include <iostream>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

int main()
{

	int fd = open("./testf.c", O_WRONLY|O_CREAT);
	dup2(fd, 1);
	cout << "hello world" << endl;
	return 0;
}
