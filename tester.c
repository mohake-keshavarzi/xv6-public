#include "types.h"
#include "stat.h"
#include "user.h"

void tr(void){
    printf(1,"I AM ALIVE");
}
void tr2(void){
    printf(1,"I AM ALIVE");
}
void tr3(void){
    printf(1,"I AM ALIVE");
}
void tr4(void){
    int a=getpid();
    printf(1,"AM ALIVE %d",a);
}
void tr5(void){
    printf(1,"I AM ALIVE");
}


int
main(int argc, char *argv[])
{
  // int i=0;
  getpid();
  printf(1,"Inside tester\n");
  printf(1,"the func:%d\n",(uint)tr);
  printf(1,"the func:%d\n",(uint)tr2);
  printf(1,"the func:%d\n",(uint)tr3);
  printf(1,"the func:%d\n",(uint)tr4);
  printf(1,"the func:%d\n",(uint)tr5);

  void * stack = malloc(4096);
  int tid=thread_create(tr4,stack);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  printf(1,"I have a thread %d\n",tid);
  

  exit();
}
