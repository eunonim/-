#include "TXLib.h"
#include "Button.h"
#include <iostream>
#include "LoadSaveImage.h"
#include <string>
#include "TXLib.h"
/*
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
 */

/*
 {

  txCreateWindow ( 800, 600);

 HDC  d[3],d1;
 Button B1(50, 50, 50, 50, TX_RED ) ;
  Button B2(120, 50, 50, 50, TX_GREEN ) ;

  d[0] = txLoadImage ("doma1.bmp");
  d[1] = txLoadImage ("minihaus.bmp");
  d[2] = txLoadImage ("doma3.bmp");






 //B1.PicterAdd("minihaus.bmp",60, 100);




 while(1)
 {
 d1=d[non] ;
txBitBlt (txDC(), 400, 0, 300-10, 300-10, d1, 0, 0);



 };


}
 */

 int Doroga(HDC background_CopiedFromHelp, int w)
 {
 int xn=txMouseX();
             int yn=txMouseY();
             txBitBlt (txDC(), txMouseX(), txMouseY(),w, w, background_CopiedFromHelp);

                 while (txMouseButtons()==1)
                 {
                  // вправо
                     if  (txMouseX()>xn+w-5)
                         {
                         xn=txMouseX();
                         txBitBlt (txDC(), txMouseX(), txMouseY(),w, w, background_CopiedFromHelp);
                         }


                   // влево

                         if  (txMouseX()<xn-w+5)
                             {
                             xn=txMouseX();
                             txBitBlt (txDC(), txMouseX(), txMouseY(),w, w, background_CopiedFromHelp);
                             }

                   // верх


                        if  (txMouseY()>yn+w-5)
                             {
                             yn=txMouseY();
                             txBitBlt (txDC(), txMouseX(), txMouseY(),w, w, background_CopiedFromHelp);
                             }

                  // вниз

                         if  (txMouseY()<yn-w+5)
                             {
                             yn=txMouseY();
                             txBitBlt (txDC(), txMouseX(), txMouseY(),w, w, background_CopiedFromHelp);
                             }

                }

     };
int main()

 {
 txCreateWindow ( 800, 600);

 txRectangle (0, 0, 800, 600);

HDC  background_CopiedFromHelp = txLoadImage ("rashadoroga.bmp");

while (1)
    {
         if (txMouseButtons()==1)
         {
         Doroga(background_CopiedFromHelp, 15)  ;

          }

     }

 }







 /*
 {

   txCreateWindow ( 800, 600);
   HDC save = txCreateCompatibleDC (800, 600);


   LoadSaveImage f1;

   f1.GetFileName(1);
   f1.Load(save) ;





   }
 *//*
 {

  txCreateWindow ( 800, 600);

        txDrawMan (50, 110, 100, 100, TX_YELLOW, 0.3, -0.5, -0.4, 0, 0.8, 1, -1, 0.5, 1, 1);
        txSetFillColor(TX_GREEN);
        txRectangle(100,100,400,300);

       // HDC dc = txCreateCompatibleDC (100, 110);
       ///   txBitBlt (dc, 0, 0, 100, 110, txDC());

        SaveFile(txDC());


         // txDeleteDC (dc);





 }
 */


