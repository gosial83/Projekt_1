//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DBAccess.hpp"
#include "IBC.hpp"
#include "MemDS.hpp"
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TIBCConnection *IBCConnection1;
	TIBCQuery *IBCQuery1;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TStringField *IBCQuery1KOD;
	TStringField *IBCQuery1SYMBOL;
	TStringField *IBCQuery1OPIS;
	TEdit *Edit1;
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label3;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label2;
	TButton *Button2;
	TButton *Button3;
	TIntegerField *IBCQuery1ID;
	TSmallintField *IBCQuery1SYSTEMOWY;
	TIntegerField *IBCQuery1UZT_ID;
	TButton *Button4;
	TButton *Button5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
