#include "TXLib.h"
#include "Button.h"
#include <iostream>
#include "LoadSaveImage.h"
#include <string>


int SaveFile(HDC dc )
{
const char* home;
home= txInputBox ("ВВедите имя сохранения ");
       char* b;
       b=(char*)home;
       strcat (b,".bmp");
          txSaveImage (b, dc);
}

struct SizePic
{  int w,h;
   string name[3]={"mini","","big"};


} ;
