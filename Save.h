#include "TXLib.h"
#include "Button.h"
#include <iostream>
#include "LoadSaveImage.h"
#include <string>



{

   txCreateWindow ( 800, 600);
   HDC save = txCreateCompatibleDC (800, 600);


   LoadSaveImage f1;

   f1.GetFileName(1);
   f1.Load(save) ;





   }
