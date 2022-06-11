/*Program to describe the status of given file.*/

#include<stdio.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
  int a;
  struct stat *sfile;
  char path[100];
  sfile=(struct stat*)malloc(sizeof(struct stat));
  printf("Enter the path: ");
  scanf("%s",path);
  a=stat(path,sfile);
  int size=sfile->st_size;
  int id=sfile->st_uid;
  int mode=sfile->st_mode;
  if(a==-1)
  {
    printf("File not found");
  }
  else
  {
    printf("Size of file is %d\n",size);
    printf("UserID of file is %d\n",id);
    printf("Mode of file is %d\n",mode);
  }
  return 0;
}

    
