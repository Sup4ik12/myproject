#include "TXLib.h"

void drawSky()
{
    txSetColor(RGB(81,183,232));
    txSetFillColor(RGB(81,183,232));
    txRectangle(0,0,800,600);
    txSetColor(RGB(238,217,117));
    txSetFillColor(RGB(238,217,117));
    txRectangle(0,420,800,600);
}

void drawSpace()
    {
    txSetColor(RGB(19,3,112));
    txSetFillColor(RGB(19,3,112));
    txRectangle(0,0,800,600);
    }

void drawRocket(int x,int y,int d)
{
    //корпус ракеты
    txSetColor(TX_BLACK,3);
    txSetFillColor(RGB(114, 158, 145));
    POINT raketa[5] = {{x+610-610,y},{x+610-610,y+165-460},{x+40,y+100-460},{x+80,y+165-460},{x+80,y+460-460}};
    txPolygon (raketa,5);

    //двигатели ракеты
    POINT dvigat1[3] = {{x+610-610,y+0+d},{x+565-610,y+0+d},{x+610-610,y+280-460+d}};
    txPolygon (dvigat1,3);
    POINT dvigat2[3] = {{x+20,y+0+d},{x+60,y+0+d},{x+40,y+280-460+d}};
    txPolygon (dvigat2,3);
    POINT dvigat3[3] = {{x+80,y+0+d},{x+120,y+0+d},{x+80,y+280-460+d}};
    txPolygon (dvigat3,3);

}

void drawWindow(int x,int y)
{
    //иллюминатор
    txSetColor(TX_BLACK,3);
    txSetFillColor(RGB(107, 199, 172));
    txCircle(x+650-610,y+225-460,30);
}

void drawAstronaft(int aa)
{
    //человечек
    txSetColor(TX_WHITE,13);
    txSetFillColor(RGB(235, 206, 134));
    txCircle(495,aa+322-350,20); //голова
    txSetColor(TX_WHITE,8);
    txSetFillColor(TX_WHITE);
    txEllipse(470,aa,520,aa+452-350); //тело
    txLine(505,aa+100,517,aa+508-350); //п нога
    txLine(487,aa+444-350,466,aa+514-350); //л нога
    txLine(515,aa+375-350,536,aa+424-350); //п рука

    //лицо
    txSetColor(TX_BLACK,3);
    txSetFillColor(TX_BLACK);
    txCircle(490,aa+319-350,1);
    txCircle(501,aa+319-350,1);
    txArc (488, aa+319-350, 504, aa+331-350, 180, 180); //рот
}

void mahat(int a,int aa)
{
    txSetColor(TX_WHITE,8);
    txSetFillColor(TX_WHITE);
    txLine(470,aa+360-350,452,a); //л рука
}

void drawElevator(int aa)
{
    //лифт
    txSetColor(TX_BLACK,3);
    txSetFillColor(RGB(52, 105, 24));
    txLine(448,aa+515-350,553,aa+515-350);
    POINT liftik[6] = {{544,591},{547,286},{620,243},{639,260},{570,301},{571,591}};
    txPolygon (liftik,6);
}

void drawBox(int color,int b)
{
    txSetColor(color);
    txSetFillColor(color);
    txRectangle(b,190,b+545-475,260);
}

void drawfire(int d)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire[11] = {{585,d},{570,d+515-465},{590,d+540-465},{610,d+515-465},{630,d+555-465},{650,d+530-465},{670,d+550-465},{700,d+530-465},{725,d+540-465},{740,d+505-465},{715,d+465-465}};
        txPolygon (fire,11);
    }

void drawEarth()
    {
        txSetColor(RGB(13,24,255));
        txSetFillColor(RGB(22,0,181));
        txCircle(400,1100,750);
    }

int main()
{

txCreateWindow(800,600);

    int yarm = 426;
    int yarm1 = 375;
    int ychel = 350;
    int Box = RGB(81,183,232);
    int xBox = 475;
    int yFire = 380;
    int drozh = 610;
    int vzlet = 460;
    int toplivo = vzlet-455;


    //1 сцена

    //pука вверх
    while(yarm>330)
    {
        drawSky();
        drawRocket(drozh,vzlet,toplivo);
        drawWindow(drozh,vzlet);
        drawBox(Box,xBox);
        drawAstronaft(ychel);
        drawElevator(ychel);
        mahat(yarm,yarm1);
        yarm = yarm - 5;
        txSleep(15);
    }
    //рука вниз
    while(yarm<426)
    {
        txBegin();
        drawSky();
        drawRocket(drozh,vzlet,toplivo);
        drawWindow(drozh,vzlet);
        drawBox(Box,xBox);
        drawAstronaft(ychel);
        drawElevator(ychel);
        mahat(yarm,yarm1);
        yarm = yarm + 5;
        txEnd();
        txSleep(15);
    }

    txSleep(150);
           //лифт вверх
    while(ychel>120)
    {
        txBegin();
        drawSky();
        drawRocket(drozh,vzlet,toplivo);
        drawWindow(drozh,vzlet);
        drawBox(Box,xBox);
        drawAstronaft(ychel);
        mahat(yarm,yarm1);
        drawElevator(ychel);
        ychel = ychel -2;
        yarm = yarm -2;
        yarm1 = yarm1 -2;
        txEnd();
        txSleep(15);
    }
   //превращение винкс
     if(ychel == 120)
     {
         txSleep(1000);
         while(ychel>-1000)
        {
            txBegin();
            drawSky();
            drawRocket(drozh,vzlet,toplivo);
            drawWindow(drozh,vzlet);
            drawBox(Box,xBox);
            drawAstronaft(ychel);
            mahat(yarm,yarm1);
            drawElevator(ychel);
            ychel = ychel -500;
            yarm = yarm -500;
            yarm1 = yarm1 -500;
            Box = RGB(62, 66, 62);
            txEnd();
            txSleep(1);
        }
      }
      txSleep(150);
      //упаковка чебурка
      while(xBox<600)
          {
            txBegin();
            drawSky();
            drawRocket(drozh,vzlet,toplivo);
            drawWindow(drozh,vzlet);
            drawElevator(ychel);
            drawBox(Box,xBox);
            drawAstronaft(ychel);
            mahat(yarm,yarm1);
            xBox = xBox + 2;
            txEnd();
            txSleep(15);
          }
          txSleep(250);

       //полетел
       while(yFire<455)
           {
                txBegin();
                drawSky();
                drawfire(yFire);
                drawRocket(drozh,vzlet,toplivo);
                drawWindow(drozh,vzlet);
                drawAstronaft(ychel);
                mahat(yarm,yarm1);
                yFire = yFire + 2;
                txEnd();
                txSleep(15);
           }
        while(vzlet>-250)
            {
                txBegin();
                drawSky();
                drawfire(yFire);
                drawRocket(drozh,vzlet,toplivo);
                drawWindow(drozh,vzlet);
                drawAstronaft(ychel);
                mahat(yarm,yarm1);
                yFire = yFire -5;
                vzlet = vzlet -5;
                txEnd();
                txSleep(15);
            }
    //2 сцена
    drozh = 400;
    vzlet = 1000;
    toplivo = vzlet-455;
     while(toplivo>400)
        {
            txBegin();
            drawSpace();
            drawEarth();
            drawfire(yFire);
            drawRocket(drozh,vzlet,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -10;
            yFire = yFire - 10;
            toplivo = toplivo - 10;
            txEnd();
            txSleep(15);
        }
    while(vzlet>-200)
        {
            txBegin();
            drawSpace();
            drawEarth();
            drawfire(yFire);
            drawRocket(drozh,vzlet,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -10;
            yFire = yFire - 10;
            toplivo = toplivo + 10;
            txEnd();
            txSleep(15);

        }





txTextCursor (false);
return 0;
}
