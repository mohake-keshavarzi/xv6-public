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
void tr4(void* c){
    int sleep_time = *(int*)c; // Cast the void* to an int* and then dereference
    *(int *)c= *(int *)c+50;
    sleep(sleep_time);
    
    // printf(1,"AM ALIVE");
    // return;
    // sleep(600000);
    return ;

}
void tr5(void){
    printf(1,"I AM ALIVE");
}


int
main(int argc, char *argv[])
{
  // int i=0;
  printf(1,"Inside tester\n");
  printf(1,"the func:%d\n",(uint)tr);
  printf(1,"the func:%d\n",(uint)tr2);
  printf(1,"the func:%d\n",(uint)tr3);
  printf(1,"the func:%d\n",(uint)tr4);
  printf(1,"the func:%d\n",(uint)tr5);

  int a=256;
  int tid=thread_create(tr4,&a);
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
  printf(1,"I have a thread %d\n",a);
  

  exit();
}
