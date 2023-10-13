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
void drawRocket(int x,int y)
    {
        //корпус ракеты
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa[5] = {{x+610-610,y},{x+610-610,y+165-460},{x+40,y+100-460},{x+80,y+165-460},{x+80,y}};
        txPolygon (raketa,5);
    }
void drawRocket2(int x,int y)
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        POINT raketa2[5] = {{x,y},{x+50,y-35},{x+170,y-35},{x+170,y+40},{x+50,y+40}};
        txPolygon (raketa2,5);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+100,y,30);

    }
void ogrizok(int x,int y)
    {
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(114, 158, 145));
        txRectangle(x+170,y-35,x+235,y+40);
    }
void drawDvigatel(int x,int y)
    {
        //двигатели ракеты
        POINT dvigat1[3] = {{x+610-610,y+0},{x+565-610,y+0},{x+610-610,y+280-460}};
        txPolygon (dvigat1,3);
        POINT dvigat2[3] = {{x+20,y+0},{x+60,y+0},{x+40,y+280-460}};
        txPolygon (dvigat2,3);
        POINT dvigat3[3] = {{x+80,y+0},{x+120,y+0},{x+80,y+280-460}};
        txPolygon (dvigat3,3);
    }
void drawWindow(int x,int y)
    {
        //иллюминатор
        txSetColor(TX_BLACK,3);
        txSetFillColor(RGB(107, 199, 172));
        txCircle(x+650-610,y+225-460,30);
    }
void drawAstronaft(int x,int aa,int color)
    {
        //человечек
        txSetColor(TX_WHITE,13);
        txSetFillColor(RGB(235, 206, 134));
        txCircle(x+25,aa-28,20); //голова
        txSetColor(color,8);
        txSetFillColor(color);
        txEllipse(x,aa,x+50,aa+102); //тело
        txLine(x+35,aa+100,x+45,aa+158); //п нога
        txLine(x+15,aa+94,x-5,aa+164); //л нога
        txLine(x+45,aa+25,x+66,aa+74); //п рука

        //лицо
        txSetColor(TX_BLACK,3);
        txSetFillColor(TX_BLACK);
        txCircle(x+20,aa-31,1);
        txCircle(x+31,aa+-31,1);
        txArc (x+17, aa-31, x+35, aa-19, 180, 180); //рот
    }
void mahat(int a,int aa,int x,int color)
    {
        txSetColor(color,8);
        txSetFillColor(color);
        txLine(x,aa+10,x-18,a); //л рука
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
void drawBox(int b)
    {
        txSetColor(RGB(125,125,125));
        txSetFillColor(RGB(125,125,125));
        txRectangle(b,190,b+545-475,260);
    }
void drawfire(int d,int r)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire[11] = {{r,d},{r+570-585,d+515-465},{r+590-585,d+540-465},{r+610-585,d+515-465},{r+630-585,d+555-465},{r+650-585,d+530-465},{r+670-585,d+550-465},{r+700-585,d+530-465},{r+725-585,d+540-465},{r+740-585,d+505-465},{r+715-585,d+465-465}};
        txPolygon (fire,11);
    }
void drawfire2(int y,int x)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire2[9] = {{x,y},{x+610-620,y+530-465},{x+5,y+515-465},{x+20,y+100},{x+30,y+530-465},{x+666-620,y+560-465},{x+60,y+530-465},{x+80,y+555-465},{x+70,y}};
        txPolygon (fire2,9);
    }
void drawfire3(int x,int y)
    {
        txSetColor(RGB(222, 108, 27));
        txSetFillColor(RGB(222, 108, 27));
        POINT fire3[10] = {{x,y},{x+50,y-20},{x+100,y-5},{x+50,y+5},{x+100,y+20},{x+45,y+30},{x+90,y+40},{x+50,y+50},{x+80,y+90},{x,y+55}};
        txPolygon (fire3,10);
    }



int main()
{
txCreateWindow(800,600);
    int yarm = 426;
    int yarm1 = 375;
    int ychel = 350;
    int xchel = 470;
    int cChel = TX_WHITE;
    int xBox = 475;
    int yFire = 380;
    int xFire = 585;
    int drozh = 610;
    int vzlet = 460;
    int xdvigatel = 610;
    int toplivo = vzlet+5;
    int xr = 1000;
    int yr = 280;
    int xoguz = 1000;
    int yoguz = 280;
    int xfire3 = 1236;
    int yfire3 = 254;
    HDC phone = txLoadImage ("самолет.bmp");
    HDC Earth = txLoadImage ("космос.bmp");
    HDC Vishe = txLoadImage ("земл€чутьвыше.bmp");
    HDC chik = txLoadImage ("стыковка.bmp");
    HDC hello = txLoadImage ("прилетел.bmp");


    //1 сцена

    //pука вверх
    while(yarm>330)
    {
        drawSky();
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawWindow(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawAstronaft(xchel,ychel,cChel);
        drawElevator(ychel);
        mahat(yarm,yarm1,xchel,cChel);
        yarm = yarm - 5;
        txSleep(15);
    }
    //рука вниз
    while(yarm<426)
    {
        txBegin();
        drawSky();\
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawWindow(drozh,vzlet);
        drawAstronaft(xchel,ychel,cChel);
        drawElevator(ychel);
        mahat(yarm,yarm1,xchel,cChel);
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
        txBitBlt (txDC(), 0, 0, 800, 600, phone);
        drawRocket(drozh,vzlet);
        drawDvigatel(drozh,toplivo);
        drawWindow(drozh,vzlet);
        drawAstronaft(xchel,ychel,cChel);
        mahat(yarm,yarm1,xchel,cChel);
        drawElevator(ychel);
        ychel = ychel -2;
        yarm = yarm -2;
        yarm1 = yarm1 -2;
        txEnd();
        txSleep(15);
    }
      txSleep(150);

      //упаковка чебурка
      while(xBox<600)
          {
            txBegin();
            drawSky();
            txBitBlt (txDC(), 0, 0, 800, 600, phone);
            drawRocket(drozh,vzlet);
            drawDvigatel(drozh,toplivo);
            drawWindow(drozh,vzlet);
            drawElevator(ychel);
            drawBox(xBox);
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
                txBitBlt (txDC(), 0, 0, 800, 600, phone);
                drawfire(yFire,xFire);
                drawRocket(drozh,vzlet);
                drawDvigatel(drozh,toplivo);
                drawWindow(drozh,vzlet);
                yFire = yFire + 2;
                txEnd();
                txSleep(15);
           }
        while(vzlet>-250)
            {
                txBegin();
                drawSky();
                txBitBlt (txDC(), 0, 0, 800, 600, phone);
                drawfire(yFire,xFire);
                drawRocket(drozh,vzlet);
                drawDvigatel(drozh,toplivo);
                drawWindow(drozh,vzlet);
                yFire = yFire -5;
                vzlet = vzlet -5;
                toplivo = toplivo -5;
                txEnd();
                txSleep(15);
            }
    //2 сцена
    drozh = 400;
    vzlet = 1000;
    toplivo = 1010;
    xFire = 375;
    yFire = 1000;
    xdvigatel = 400;
     while(toplivo>500)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, Earth);
            drawfire(yFire,xFire);
            drawRocket(drozh,vzlet);
            drawDvigatel(xdvigatel,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -7;
            toplivo = toplivo -7;
            yFire = yFire - 7;
            toplivo = vzlet;
            txEnd();
            txSleep(15);
        }
        xFire = xFire + 30;
    while(vzlet>-200)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, Earth);
            drawfire2(yFire,xFire);
            drawRocket(drozh,vzlet);
            drawDvigatel(xdvigatel,toplivo);
            drawWindow(drozh,vzlet);
            vzlet = vzlet -9,5;
            yFire = yFire - 9,5;
            toplivo = toplivo + 5;
            xdvigatel = xdvigatel -2;
            txEnd();
            txSleep(15);

        }
    //3 сцена

    while(xoguz>400)
    {
        txBegin();
        drawSpace();
        txBitBlt (txDC(), 0, 0, 800, 600, Vishe);
        ogrizok(xoguz,yoguz);
        drawRocket2(xr,yr);
        drawfire3(xfire3,yfire3);
        xr -= 5;
        xoguz -= 5;
        xfire3 -= 5;
        txEnd;
        txSleep(15);
    }
    xfire3=xfire3-65;
    while(xr>-280)
    {
        txBegin();
        drawSpace();
        txBitBlt (txDC(), 0, 0, 800, 600, Vishe);
        ogrizok(xoguz,yoguz);
        drawRocket2(xr,yr);
        drawfire3(xfire3,yfire3);
        xr -= 8;
        yoguz += 1,5;
        xoguz += 3;
        xfire3 -=8;
        txEnd;
        txSleep(15);
    }

    //4 сцена
    xr=1000;
    while (xr>150)
        {
            txBegin();
            drawSpace();
            txBitBlt (txDC(), 0, 0, 800, 600, chik);
            drawRocket2(xr,yr);
            xr -= 7,5;
            txEnd;
            txSleep(15);
        }
    //5 сцена
    xchel=685;
    ychel=375;
    yarm=ychel;
    yarm1=ychel;

    cChel=RGB(74,97,251);
    txBitBlt (txDC(), 0, 0, 800, 600, hello);
    drawAstronaft(xchel,ychel,cChel);           //—ƒ≈Ћј“№ –ј«ћ≈–
    mahat(yarm,yarm1,xchel,cChel);
    txSleep(3555);


txDeleteDC (phone);
txDeleteDC (Earth);
txDeleteDC (Vishe);
txDeleteDC (chik);
txDeleteDC (hello);
txTextCursor (false);
return 0;
}
