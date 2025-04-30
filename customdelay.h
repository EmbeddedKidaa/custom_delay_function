#ifndef CUSTOMDELAY_H
#define CUSTOMDELAY_H

typedef void (*func_ptr)(int); // creating a function pointer for retun type void and no parameters

struct task          // created a structure for  passing functions with their parameters
{
  func_ptr func;
  int inum;
};
void customdelay(unsigned long delaytime, task t[],int task_count);



#endif