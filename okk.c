#pragma comment( lib, "user32.lib" )
#include <windows.h>
#include <stdio.h>
#include <dirent.h>

void Change_Background(char *frame){
  printf("%s\n",frame);
  SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, frame ,SPIF_UPDATEINIFILE);
  SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, frame,SPIF_SENDWININICHANGE);
}


int main(int argc,char *argv[])
{
    char whole2[2000];
    char f[5];
    while(1){
    for(int x = 0; x<7090; ++x){
      char pa[] = "C:\\Users\\ahmed\\OneDrive\\Desktop\\images\\frame";

      strcpy(whole2, pa);
      itoa(x, f, 10);
      strcat(whole2,f);
      strcat(whole2,".jpg");
      printf("%s\n",whole2);
      Change_Background(whole2);
      Sleep(100);
}
}
    return 0;
}
