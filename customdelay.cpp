
#include "customdelay.h"
#include  <Arduino.h>



void customdelay(unsigned long delaytime, task t[],int task_count)
{
  unsigned long startime = millis();
  while(millis() - startime < delaytime)
  {
    for(int i = 0; i<task_count;i++)    // call functions one-by-one using for loop
    { 
      if(t[i].func != nullptr)
      {
      t[i].func(t[i].inum);
      }
    }
  }
}