// ---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

using namespace std;
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
// ---------------------------------------------------------------------------

double a = 0;
int n = 0;
char char_operator;
bool FormSize_b = true, char_operator_check = false;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "1";
	}

	else {
		Edit1->Text += "1";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "2";
	}

	else {
		Edit1->Text += "2";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "3";
	}

	else {
		Edit1->Text += "3";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "4";
	}

	else {
		Edit1->Text += "4";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "5";
	}

	else {
		Edit1->Text += "5";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "6";
	}

	else {
		Edit1->Text += "6";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "7";
	}

	else {
		Edit1->Text += "7";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "8";
	}

	else {
		Edit1->Text += "8";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender) {
	if (Edit1->Text.Length() == 1 && Edit1->Text.ToDouble() == 0) {
		Edit1->Text = "9";
	}

	else {
		Edit1->Text += "9";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender) {
	Edit1->Text += "0";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender) {
	Edit1->Text += ",";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender) {
	if (char_operator_check == false) {
		a = Edit1->Text.ToDouble();
		Edit1 -> Text = "0";
		this->ListBox1->Items->Add(a);
		this->ListBox1->Items->Add("+");
		char_operator = '+';
		char_operator_check = true;
	}

	else{
		char_operator = '+';
		ListBox1 -> Items -> Delete(ListBox1 -> Items -> Count - 1);
        this->ListBox1->Items->Add("+");
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender) {
	if (char_operator_check == false) {
		a = Edit1->Text.ToDouble();
		Edit1->Text = "0";

		this->ListBox1->Items->Add(a);
		this->ListBox1->Items->Add("-");
		char_operator = '-';

		char_operator_check = true;
	}

	else{
		char_operator = '-';
		ListBox1 -> Items -> Delete(ListBox1 -> Items -> Count - 1);
		this->ListBox1->Items->Add("-");
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender) {
	if (char_operator_check == false) {
		a = Edit1->Text.ToDouble();
		Edit1->Text = "0";

		this->ListBox1->Items->Add(a);
		this->ListBox1->Items->Add("*");
		char_operator = '*';

		char_operator_check = true;
	}

	else{
		char_operator = '*';
		ListBox1 -> Items -> Delete(ListBox1 -> Items -> Count - 1);
		this->ListBox1->Items->Add("*");
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender) {
	if (char_operator_check == false) {
		a = Edit1->Text.ToDouble();
		Edit1->Text = "0";

		this->ListBox1->Items->Add(a);
		this->ListBox1->Items->Add("/");
		char_operator = '/';

		char_operator_check = true;
	}

	else{
		char_operator = '/';
		ListBox1 -> Items -> Delete(ListBox1 -> Items -> Count - 1);
		this->ListBox1->Items->Add("/");
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender) {
	switch (char_operator) {
	case '+':
		this->ListBox1->Items->Add(Edit1->Text.ToDouble());
		Edit1->Text = a + Edit1->Text.ToDouble();
		this->ListBox1->Items->Add("=");
		this->ListBox1->Items->Add(Edit1->Text);
		this->ListBox1->Items->Add("---------------------------------");
		break;
	case '-':
		this->ListBox1->Items->Add(Edit1->Text.ToDouble());
		Edit1->Text = a - Edit1->Text.ToDouble();
		this->ListBox1->Items->Add("=");
		this->ListBox1->Items->Add(Edit1->Text);
		this->ListBox1->Items->Add("---------------------------------");
		break;
	case '*':
		this->ListBox1->Items->Add(Edit1->Text.ToDouble());
		Edit1->Text = a * Edit1->Text.ToDouble();
		this->ListBox1->Items->Add("=");
		this->ListBox1->Items->Add(Edit1->Text);
		this->ListBox1->Items->Add("---------------------------------");
		break;
	case '/':
		this->ListBox1->Items->Add(Edit1->Text.ToDouble());
		Edit1->Text = a / Edit1->Text.ToDouble();
		this->ListBox1->Items->Add("=");
		this->ListBox1->Items->Add(Edit1->Text);
		this->ListBox1->Items->Add("---------------------------------");
		break;
	}

    char_operator_check = false;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject *Sender) {
	a = 0;
	char_operator = ' ';
	Edit1->Text = "0";

	this->ListBox1->Clear();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
	TShiftState Shift) {
	// ShowMessage(Key);

	if (Key == 48) {
		this->Button15Click(Sender);
	}

	else if (Key == 49) {
		this->Button1Click(Sender);
	}

	else if (Key == 50) {
		this->Button2Click(Sender);
	}

	else if (Key == 51) {
		this->Button3Click(Sender);
	}

	else if (Key == 52) {
		this->Button4Click(Sender);
	}

	else if (Key == 53) {
		this->Button5Click(Sender);
	}

	else if (Key == 54) {
		this->Button6Click(Sender);
	}

	else if (Key == 55) {
		this->Button7Click(Sender);
	}

	else if (Key == 56) {
		this->Button8Click(Sender);
	}

	else if (Key == 57) {
		this->Button9Click(Sender);
	}

	else if (Key == 111) {
		this->Button14Click(Sender);
	}

	else if (Key == 109) {
		this->Button12Click(Sender);
	}

	else if (Key == 107) {
		this->Button11Click(Sender);
	}

	else if (Key == 106) {
		this->Button13Click(Sender);
	}

	else if (Key == 69) {
		this->Button10Click(Sender);
	}

	else if (Key == 106) {
		this->Button13Click(Sender);
	}

	else if (Key == 67) {
		this->Button17Click(Sender);
	}

	else if (Key == 188 || Key == 190 || Key == 191) {
		bool check = true;
		AnsiString str = Edit1->Text;
		char* str_c = str.c_str();

		for (int i = 0; i < str.Length(); i++) {
			if (str_c[i] == ',') {
				check = false;
				break;
			}
		}

		if (check == true) {
			this->Button16Click(Sender);
		}
		else
			ShowMessage("В числе уже есть запятая");
	}

	else if (Key == 73) {
		this->Button18Click(Sender);
	}

	else if (Key == 33) {
		this->Button19Click(Sender);
	}

	else if (Key == 34) {
		this->Button20Click(Sender);
	}

	else if (Key == 8) {
		this->Button21Click(Sender);
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender) {
	Edit1->ReadOnly = true;

	this->Constraints->MaxWidth = 535;
	this->Constraints->MinHeight = 400;
	this-> Constraints-> MinWidth = 700;
	this-> Constraints-> MaxHeight = 400;

	this->Memo1->Text = "При нажатии от 1-9 и 0 будет писаться выбранное число";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button18Click(TObject *Sender) {
	if (FormSize_b == true) {
		this-> Constraints-> MaxWidth = 700;
		this-> Constraints-> MinHeight = 400;

		this-> Constraints-> MinWidth = 700;
		this-> Constraints-> MaxHeight = 400;
	}

	else {
		this-> Constraints-> MaxWidth = 535;
		this-> Constraints-> MinHeight = 400;

		this-> Constraints-> MinWidth = 535;
		this-> Constraints-> MaxHeight = 400;
	}
	FormSize_b = !FormSize_b;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button19Click(TObject *Sender) {
	if (n == 0) {
		this->Memo1->Text =
			"При нажатии от 1-9 и 0 будет писаться выбранное число";
		n++;
	}

	else if (n == 1) {
		this->Memo1->Text =
			"При нажатии на знаки операций / * - + они будут вводиться также как и цифры";
		n++;
	}

	else if (n == 2) {
		this->Memo1->Text =
			"При нажатии на букву E(У на RU раскладке) будет выводится результат операции";
		n++;
	}

	else if (n == 3) {
		this->Memo1->Text =
			"При нажатии на букву С будут отчищенны все переменные и история";
		n++;
	}

	else if (n == 4) {
		this->Memo1->Text =
			"При нажатии на I будет показыватся подсказка(инструкция)";
		n++;
	}

	else if (n == 5) {
		this->Memo1->Text =
			"При нажатии на PG UP или PG DN будут листатся страницы подсказки(инструкции) вперёд или назад";
		n++;
	}

	else if (n == 6) {
		this->Memo1->Text =
			"При нажатии на BackSpace будет стёрта послденяя цифра";
		n = 0;
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button20Click(TObject *Sender) {
	if (n == 0) {
		this->Memo1->Text =
			"При нажатии от 1-9 и 0 будет писаться выбранное число";
		n = 5;
	}

	else if (n == 1) {
		this->Memo1->Text =
			"При нажатии на знаки операций / * - + они будут вводиться также как и цифры";
		n--;
	}

	else if (n == 2) {
		this->Memo1->Text =
			"При нажатии на букву E(У на RU раскладке) будет выводится результат операции";
		n--;
	}

	else if (n == 3) {
		this->Memo1->Text =
			"При нажатии на букву С будут отчищенны все переменные и история";
		n--;
	}

	else if (n == 4) {
		this->Memo1->Text =
			"При нажатии на I будет показыватся подсказка(инструкция)";
		n--;
	}

	else if (n == 5) {
		this->Memo1->Text =
			"При нажатии на PG UP или PG DN будут листатся страницы подсказки(инструкции) вперёд или назад";
		n--;
	}

	else if (n == 6) {
		this->Memo1->Text =
			"При нажатии на BackSpace будет стёрта послденяя цифра";
		n--;
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button21Click(TObject *Sender) {
	AnsiString str = Edit1->Text;

	if (str.Length() > 0) {
		str.Delete(str.Length(), 1);
		Edit1->Text = str;
	}
}
// ---------------------------------------------------------------------------
