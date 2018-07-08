//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "IBC"
#pragma link "MemDS"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
int x=0;
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{   //pobranie danych z zaznaczonego wiersza do pól edycyjnych
	Edit1->Text=IBCQuery1->FieldByName("KOD")->AsString;
	Edit2->Text=IBCQuery1->FieldByName("SYMBOL")->AsString;
	Edit3->Text=IBCQuery1->FieldByName("OPIS")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{   //zapisanie zmian wprowadzonych w polach edycyjnych
	IBCQuery1->Edit();
	IBCQuery1->FieldByName("KOD")->AsString=Edit1->Text;
	IBCQuery1->FieldByName("SYMBOL")->AsString=Edit2->Text;
	IBCQuery1->FieldByName("OPIS")->AsString=Edit3->Text;
	IBCQuery1->Post();
	Edit1->Text="";
	Edit2->Text="";
	Edit3->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{   //dodanie zawartoœci pól edycyjnych jako nowy wiersz w bazie danych
	x=IBCQuery1->RecordCount;
	x++;
	IBCQuery1->Insert();
	IBCQuery1->FieldByName("KOD")->AsString=Edit1->Text;
	IBCQuery1->FieldByName("SYMBOL")->AsString=Edit2->Text;
	IBCQuery1->FieldByName("OPIS")->AsString=Edit3->Text;
	IBCQuery1->FieldByName("ID")->AsInteger=x;
	IBCQuery1->FieldByName("SYSTEMOWY")->AsInteger=1;
	IBCQuery1->FieldByName("UZT_ID")->AsInteger=1;
	IBCQuery1->Post();
	IBCQuery1->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	 //usuniêcie zaznaczonego wiersza
	 IBCQuery1->Delete();
	 x--;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{    //próba z zapytaniem SQL

	 //Edit1->Text=IBCQuery1->FieldByName("ID")->Value;

	IBCQuery1->Close();
	IBCQuery1->SQL->Text="SELECT * FROM JM WHERE (KOD=:SZT)";
    // wyœwietla jeden wiesz ale bez danych, a bez znaku : pojawia siê b³¹d sql



	//IBCQuery1->SQL->Text="INSERT INTO jm values(:p1, :p2)";
	//IBCQuery1->ParamByName("p1")->AsString="a";
	//IBCQuery1->ParamByName("p2")->AsString="b";
	//IBCQuery1->SQLUpdate->Add("SELECT KOD FROM JM");
	//IBCQuery1->SQLUpdate->Text="UPDATE JM SET OPIS = 'kg' WHERE ID=2";
	//IBCQuery1->ExecSQL();
	IBCQuery1->Open();
	//Edit1->Text=IBCQuery1->FieldByName("KOD")->AsString;
	//IBCQuery1->Close();
	//IBCQuery1->SQL->Add("SELECT KOD");
	//IBCQuery1->SQL->Add("FROM JM");
	//IBCQuery1->SQL->Add("ID=2");
	//IBCQuery1->Open();
}
//---------------------------------------------------------------------------
