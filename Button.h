#include "TXLib.h"
class Button // èìÿ êëàññà
{
    int x,y,w,h;
    string color,text="", pic;
    COLORREF TX_color;
    int picterVisible=0;
    int picterW, picterH;
    HDC picter;
public: // ñïåöèôèêàòîð äîñòóïà public
    Button(int BX, int BY, int BW, int BH, COLORREF color ) // êîíñòðóêòîð êëàññà
    {
        x=BX;
        y=BY;
        w=BW;
        h=BH;
        TX_color=color;

    }

    int textAdd(string txt)
    {
    text=txt;
    }

     int Draw()
     {


        txSetFillColour(TX_color);
        txRectangle(x,y,x+w,y+h);

   // отображает фон кнопки
  if (picterVisible)
    {
    
    txBitBlt (txDC(), x, y, picterW,picterH, picter); }




    if (text!="")
    {  txDrawText   (x, y, x+w, y+h, text.c_str() );
        }




    }

int BClick(int xClick,int yClick)
    {
      if (xClick>x&&yClick>y&&xClick<x+w&&yClick<y+h)
            return 1;
            return 0;

    }
 // включает фон кнопки
 int PicterAdd(string Pic, int picW, int picH)
 {
    picter = txLoadImage (Pic.c_str());
    picterVisible=1;
    picterW=picW;
    picterH=picH;

 }
};
