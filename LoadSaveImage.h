class LoadSaveImage
{
public:

const char* file ="";


    int GetFileName(int load)
    {
        if (load) file= txInputBox ("ВВедите имя файла ");
    }    ;



    int Load(HDC canvas)
    {

        if (file!="")


            {
              HDC  d1 = txLoadImage (file);
              canvas = txCreateCompatibleDC (800, 600);


                txBitBlt (canvas, 0, 0, 800,600,d1 );

                txTransparentBlt (txDC(), 0, 0, 800, 600, canvas);
               }

    };

}  ;
