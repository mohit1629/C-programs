#include<stdio.h>
#include<stdlib.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

double cal(double acc,retire_info st)
{
  return (acc*st.rate_of_return + st.contribution +acc);
}

int main(void)
{
  printf("hello");
  
}
