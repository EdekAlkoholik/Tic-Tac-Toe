//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
        char pl1,pl2,pl3,pl4,pl5,pl6,pl7,pl8,pl9;
        char kto;
        void sprawdz(){
                if((pl1==pl2 && pl2==pl3 && pl1!='n') ||
                  (pl4==pl5 && pl5==pl6 && pl4!='n') ||
                  (pl7==pl8 && pl8==pl9 && pl7!='n') ||
                  (pl1==pl4 && pl4==pl7 && pl7!='n') ||
                  (pl2==pl5 && pl5==pl8 && pl8!='n') ||
                  (pl3==pl6 && pl6==pl9 && pl9!='n') ||
                  (pl1==pl5 && pl5==pl9 && pl1!='n') ||
                  (pl3==pl5 && pl5==pl7 && pl3!='n')) {
                        char* w;
                        if(kto=='x') w="wygrywa kó³ko!";
                        else w="wygrywa krzy¿yk!";
                        Application->MessageBoxA(w,"Koniec Gry!",MB_OK);

                  }
        }
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        p1->Picture->LoadFromFile("img/nic.bmp");
        p2->Picture->LoadFromFile("img/nic.bmp");
        p3->Picture->LoadFromFile("img/nic.bmp");
        p4->Picture->LoadFromFile("img/nic.bmp");
        p5->Picture->LoadFromFile("img/nic.bmp");
        p6->Picture->LoadFromFile("img/nic.bmp");
        p7->Picture->LoadFromFile("img/nic.bmp");
        p8->Picture->LoadFromFile("img/nic.bmp");
        p9->Picture->LoadFromFile("img/nic.bmp");
        tura->Picture->LoadFromFile("img/mo.bmp");
        
        pl1='n'; pl2='n'; pl3='n';
        pl4='n'; pl5='n'; pl6='n';
        pl7='n'; pl8='n'; pl9='n';
        kto='o';

        p1->Enabled=true;
        p2->Enabled=true;
        p3->Enabled=true;
        p4->Enabled=true;
        p5->Enabled=true;
        p6->Enabled=true;
        p7->Enabled=true;
        p8->Enabled=true;
        p9->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p1Click(TObject *Sender)
{
        if(pl1=='n'){
         if(kto=='o'){
             p1->Picture->LoadFromFile("img/o.bmp");
             pl1='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p1->Picture->LoadFromFile("img/z.bmp");
             pl1='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p1->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p2Click(TObject *Sender)
{
           if(pl2=='n'){
         if(kto=='o'){
             p2->Picture->LoadFromFile("img/o.bmp");
             pl2='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p2->Picture->LoadFromFile("img/z.bmp");
             pl2='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p2->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p3Click(TObject *Sender)
{
if(pl3=='n'){
         if(kto=='o'){
             p3->Picture->LoadFromFile("img/o.bmp");
             pl3='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p3->Picture->LoadFromFile("img/z.bmp");
             pl3='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p3->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p4Click(TObject *Sender)
{
if(pl4=='n'){
         if(kto=='o'){
             p4->Picture->LoadFromFile("img/o.bmp");
             pl4='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p4->Picture->LoadFromFile("img/z.bmp");
             pl4='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p4->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p5Click(TObject *Sender)
{
if(pl5=='n'){
         if(kto=='o'){
             p5->Picture->LoadFromFile("img/o.bmp");
             pl5='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p5->Picture->LoadFromFile("img/z.bmp");
             pl5='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p5->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p6Click(TObject *Sender)
{
if(pl6=='n'){
         if(kto=='o'){
             p6->Picture->LoadFromFile("img/o.bmp");
             pl6='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p6->Picture->LoadFromFile("img/z.bmp");
             pl6='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p6->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p7Click(TObject *Sender)
{
if(pl7=='n'){
         if(kto=='o'){
             p7->Picture->LoadFromFile("img/o.bmp");
             pl7='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p7->Picture->LoadFromFile("img/z.bmp");
             pl7='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p7->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p8Click(TObject *Sender)
{
if(pl8=='n'){
         if(kto=='o'){
             p8->Picture->LoadFromFile("img/o.bmp");
             pl8='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p8->Picture->LoadFromFile("img/z.bmp");
             pl8='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p8->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p9Click(TObject *Sender)
{
if(pl9=='n'){
         if(kto=='o'){
             p9->Picture->LoadFromFile("img/o.bmp");
             pl9='o';
             kto='x';
             tura->Picture->LoadFromFile("img/mz.bmp");
         }
         else{
             p9->Picture->LoadFromFile("img/z.bmp");
             pl9='x';
             kto='o';
             tura->Picture->LoadFromFile("img/mo.bmp");
         }
        }
        p9->Enabled=false;
        sprawdz();
}
//---------------------------------------------------------------------------
