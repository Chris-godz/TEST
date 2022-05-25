#include"LoadingBar.h"
#define num_max 101
void LoadingBar()
{
  char arr[num_max];
  memset(arr,'\0',sizeof(arr));
  int i=0;
  const char* lable="|/~\\";
  printf("\n");
  while(i<=100)
  {
    printf("[%-100s] [%% %d][%c]\r",arr,i,lable[i%4]);
    fflush(stdout);
    arr[i]='#';
    i++;
    usleep(30000);
  }
    printf("\n");
}

