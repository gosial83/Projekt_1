object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 544
  ClientWidth = 844
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    844
    544)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 27
    Top = 430
    Width = 24
    Height = 16
    Anchors = [akLeft]
    Caption = 'KOD'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 27
    Top = 484
    Width = 28
    Height = 16
    Anchors = [akLeft]
    Caption = 'OPIS'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 27
    Top = 462
    Width = 47
    Height = 16
    Caption = 'SYMBOL'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 24
    Width = 633
    Height = 369
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Edit1: TEdit
    Left = 88
    Top = 429
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 232
    Top = 427
    Width = 75
    Height = 25
    Caption = 'Edytuj'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 88
    Top = 456
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Edit3: TEdit
    Left = 88
    Top = 483
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object Button2: TButton
    Left = 313
    Top = 427
    Width = 75
    Height = 25
    Caption = 'Zapisz'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 232
    Top = 458
    Width = 75
    Height = 25
    Caption = 'Dodaj'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 232
    Top = 489
    Width = 75
    Height = 25
    Caption = 'Usu'#324
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 313
    Top = 458
    Width = 75
    Height = 25
    Caption = '(SQL test)'
    TabOrder = 8
    OnClick = Button5Click
  end
  object IBCConnection1: TIBCConnection
    Database = 
      'C:\Users\Gosia\Documents\RAD Studio\Projects\edit_v3\database.fd' +
      'b'
    ClientLibrary = 'fbclient.dll'
    Port = '3050'
    Username = 'SYSDBA'
    Connected = True
    Left = 768
    Top = 32
    EncryptedPassword = '92FF9EFF8CFF8BFF9AFF8DFF94FF9AFF86FF'
  end
  object IBCQuery1: TIBCQuery
    Connection = IBCConnection1
    SQL.Strings = (
      'select * from jm')
    Active = True
    Left = 768
    Top = 104
    object IBCQuery1ID: TIntegerField
      FieldName = 'ID'
      Required = True
    end
    object IBCQuery1KOD: TStringField
      FieldName = 'KOD'
      Required = True
      Size = 28
    end
    object IBCQuery1SYMBOL: TStringField
      FieldName = 'SYMBOL'
      Required = True
      Size = 28
    end
    object IBCQuery1OPIS: TStringField
      FieldName = 'OPIS'
      Size = 400
    end
    object IBCQuery1SYSTEMOWY: TSmallintField
      FieldName = 'SYSTEMOWY'
      Required = True
    end
    object IBCQuery1UZT_ID: TIntegerField
      FieldName = 'UZT_ID'
      Required = True
    end
  end
  object DataSource1: TDataSource
    DataSet = IBCQuery1
    Left = 768
    Top = 176
  end
end
