#include "TXLib.h"
class Button // ГЁГ¬Гї ГЄГ«Г Г±Г±Г 
{
    int x,y,w,h;
    string color,text="", pic;
    COLORREF TX_color;
    int picterW, picterH;
    HDC picter;
public:// Г±ГЇГҐГ¶ГЁГґГЁГЄГ ГІГ®Г° Г¤Г®Г±ГІГіГЇГ  public
    int picterVisible=0;

    Button(int BX, int BY, int BW, int BH, COLORREF color ) // ГЄГ®Г­Г±ГІГ°ГіГЄГІГ®Г° ГЄГ«Г Г±Г±Г 
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

   // РѕС‚РѕР±СЂР°Р¶Р°РµС‚ С„РѕРЅ РєРЅРѕРїРєРё
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
 // РІРєР»СЋС‡Р°РµС‚ С„РѕРЅ РєРЅРѕРїРєРё
 int PicterAdd(string Pic, int picW, int picH)
 {
    picter = txLoadImage (Pic.c_str());
    picterVisible=1;
    picterW=picW;
    picterH=picH;

 }
};

