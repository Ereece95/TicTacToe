#pragma once
#include "Cell.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  TopLeft;

	private: System::Windows::Forms::Button^  TopCenter;
	private: System::Windows::Forms::Button^  TopRight;
	private: System::Windows::Forms::Button^  CenterLeft;

	private: System::Windows::Forms::Button^  Center;
	private: System::Windows::Forms::Button^  CenterRight;
	private: System::Windows::Forms::Button^  BotLeft;
	private: System::Windows::Forms::Button^  BotCenter;
	private: System::Windows::Forms::Button^  BotRight;










	private: System::Windows::Forms::Label^  MessageOut;
	private: System::Windows::Forms::Button^  NewGame;
	private: System::Windows::Forms::Button^  ExitGame;



	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TopLeft = (gcnew System::Windows::Forms::Button());
			this->TopCenter = (gcnew System::Windows::Forms::Button());
			this->TopRight = (gcnew System::Windows::Forms::Button());
			this->CenterLeft = (gcnew System::Windows::Forms::Button());
			this->Center = (gcnew System::Windows::Forms::Button());
			this->CenterRight = (gcnew System::Windows::Forms::Button());
			this->BotLeft = (gcnew System::Windows::Forms::Button());
			this->BotCenter = (gcnew System::Windows::Forms::Button());
			this->BotRight = (gcnew System::Windows::Forms::Button());
			this->MessageOut = (gcnew System::Windows::Forms::Label());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->ExitGame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(61, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(297, 304);
			this->panel1->TabIndex = 0;
			// 
			// TopLeft
			// 
			this->TopLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->TopLeft->Enabled = false;
			this->TopLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TopLeft->Location = System::Drawing::Point(119, 335);
			this->TopLeft->Margin = System::Windows::Forms::Padding(2);
			this->TopLeft->Name = L"TopLeft";
			this->TopLeft->Size = System::Drawing::Size(54, 45);
			this->TopLeft->TabIndex = 1;
			this->TopLeft->UseVisualStyleBackColor = false;
			this->TopLeft->Click += gcnew System::EventHandler(this, &MyForm::btnTopLeft_Click);
			// 
			// TopCenter
			// 
			this->TopCenter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->TopCenter->Enabled = false;
			this->TopCenter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TopCenter->Location = System::Drawing::Point(183, 335);
			this->TopCenter->Margin = System::Windows::Forms::Padding(2);
			this->TopCenter->Name = L"TopCenter";
			this->TopCenter->Size = System::Drawing::Size(54, 45);
			this->TopCenter->TabIndex = 2;
			this->TopCenter->UseVisualStyleBackColor = false;
			this->TopCenter->Click += gcnew System::EventHandler(this, &MyForm::btnTopMid_Click);
			// 
			// TopRight
			// 
			this->TopRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->TopRight->Enabled = false;
			this->TopRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TopRight->Location = System::Drawing::Point(246, 335);
			this->TopRight->Margin = System::Windows::Forms::Padding(2);
			this->TopRight->Name = L"TopRight";
			this->TopRight->Size = System::Drawing::Size(54, 45);
			this->TopRight->TabIndex = 3;
			this->TopRight->UseVisualStyleBackColor = false;
			this->TopRight->Click += gcnew System::EventHandler(this, &MyForm::btnTopRight_Click);
			// 
			// CenterLeft
			// 
			this->CenterLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CenterLeft->Enabled = false;
			this->CenterLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CenterLeft->Location = System::Drawing::Point(119, 387);
			this->CenterLeft->Margin = System::Windows::Forms::Padding(2);
			this->CenterLeft->Name = L"CenterLeft";
			this->CenterLeft->Size = System::Drawing::Size(54, 45);
			this->CenterLeft->TabIndex = 6;
			this->CenterLeft->UseVisualStyleBackColor = false;
			this->CenterLeft->Click += gcnew System::EventHandler(this, &MyForm::btnMidLeft_Click);
			// 
			// Center
			// 
			this->Center->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Center->Enabled = false;
			this->Center->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Center->Location = System::Drawing::Point(183, 387);
			this->Center->Margin = System::Windows::Forms::Padding(2);
			this->Center->Name = L"Center";
			this->Center->Size = System::Drawing::Size(54, 45);
			this->Center->TabIndex = 5;
			this->Center->UseVisualStyleBackColor = false;
			this->Center->Click += gcnew System::EventHandler(this, &MyForm::btnMidMid_Click);
			// 
			// CenterRight
			// 
			this->CenterRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CenterRight->Enabled = false;
			this->CenterRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CenterRight->Location = System::Drawing::Point(246, 387);
			this->CenterRight->Margin = System::Windows::Forms::Padding(2);
			this->CenterRight->Name = L"CenterRight";
			this->CenterRight->Size = System::Drawing::Size(54, 45);
			this->CenterRight->TabIndex = 4;
			this->CenterRight->UseVisualStyleBackColor = false;
			this->CenterRight->Click += gcnew System::EventHandler(this, &MyForm::btnMidRight_Click);
			// 
			// BotLeft
			// 
			this->BotLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BotLeft->Enabled = false;
			this->BotLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BotLeft->Location = System::Drawing::Point(119, 439);
			this->BotLeft->Margin = System::Windows::Forms::Padding(2);
			this->BotLeft->Name = L"BotLeft";
			this->BotLeft->Size = System::Drawing::Size(54, 45);
			this->BotLeft->TabIndex = 9;
			this->BotLeft->UseVisualStyleBackColor = false;
			this->BotLeft->Click += gcnew System::EventHandler(this, &MyForm::btnBotLeft_Click);
			// 
			// BotCenter
			// 
			this->BotCenter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BotCenter->Enabled = false;
			this->BotCenter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BotCenter->Location = System::Drawing::Point(183, 439);
			this->BotCenter->Margin = System::Windows::Forms::Padding(2);
			this->BotCenter->Name = L"BotCenter";
			this->BotCenter->Size = System::Drawing::Size(54, 45);
			this->BotCenter->TabIndex = 8;
			this->BotCenter->UseVisualStyleBackColor = false;
			this->BotCenter->Click += gcnew System::EventHandler(this, &MyForm::btnBotMid_Click);
			// 
			// BotRight
			// 
			this->BotRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BotRight->Enabled = false;
			this->BotRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BotRight->Location = System::Drawing::Point(246, 439);
			this->BotRight->Margin = System::Windows::Forms::Padding(2);
			this->BotRight->Name = L"BotRight";
			this->BotRight->Size = System::Drawing::Size(54, 45);
			this->BotRight->TabIndex = 7;
			this->BotRight->UseVisualStyleBackColor = false;
			this->BotRight->Click += gcnew System::EventHandler(this, &MyForm::btnBotRight_Click);
			// 
			// MessageOut
			// 
			this->MessageOut->AutoSize = true;
			this->MessageOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MessageOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageOut->ForeColor = System::Drawing::Color::Black;
			this->MessageOut->Location = System::Drawing::Point(136, 503);
			this->MessageOut->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MessageOut->Name = L"MessageOut";
			this->MessageOut->Size = System::Drawing::Size(0, 25);
			this->MessageOut->TabIndex = 10;
			this->MessageOut->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// NewGame
			// 
			this->NewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->NewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NewGame->Location = System::Drawing::Point(11, 495);
			this->NewGame->Margin = System::Windows::Forms::Padding(2);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(81, 46);
			this->NewGame->TabIndex = 11;
			this->NewGame->Text = L"New Game";
			this->NewGame->UseVisualStyleBackColor = false;
			this->NewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// ExitGame
			// 
			this->ExitGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ExitGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitGame->Location = System::Drawing::Point(328, 495);
			this->ExitGame->Margin = System::Windows::Forms::Padding(2);
			this->ExitGame->Name = L"ExitGame";
			this->ExitGame->Size = System::Drawing::Size(80, 44);
			this->ExitGame->TabIndex = 12;
			this->ExitGame->Text = L"Exit";
			this->ExitGame->UseVisualStyleBackColor = false;
			this->ExitGame->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(419, 550);
			this->Controls->Add(this->ExitGame);
			this->Controls->Add(this->NewGame);
			this->Controls->Add(this->MessageOut);
			this->Controls->Add(this->BotLeft);
			this->Controls->Add(this->BotCenter);
			this->Controls->Add(this->BotRight);
			this->Controls->Add(this->CenterLeft);
			this->Controls->Add(this->Center);
			this->Controls->Add(this->CenterRight);
			this->Controls->Add(this->TopRight);
			this->Controls->Add(this->TopCenter);
			this->Controls->Add(this->TopLeft);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array <Cell^, 2>^ cells;
		Graphics^ g;
		System::Char currentPlayer;
		bool buttonsClickable = false;

	public: System::Void displayCells()
	{
		panel1->Refresh();
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cells[i, j]->display(g);
			}
		}

		return;
	}
	public: System::Void setButtonClickable()
	{
		TopLeft->Enabled = buttonsClickable;
		TopCenter->Enabled = buttonsClickable;
		TopRight->Enabled = buttonsClickable;
		CenterLeft->Enabled = buttonsClickable;
		Center->Enabled = buttonsClickable;
		CenterRight->Enabled = buttonsClickable;
		BotLeft->Enabled = buttonsClickable;
		BotCenter->Enabled = buttonsClickable;
		BotRight->Enabled = buttonsClickable;

		return;
	}

			/***** To determine if there's a winner******/
	public: System::Char checkWin()
	{
		System::Char item1, item2, item3;
		// Checks row 1
		item1 = cells[0, 0]->getImageChar();
		item2 = cells[0, 1]->getImageChar();
		item3 = cells[0, 2]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks row 2
		item1 = cells[1, 0]->getImageChar();
		item2 = cells[1, 1]->getImageChar();
		item3 = cells[1, 2]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks row 3
		item1 = cells[2, 0]->getImageChar();
		item2 = cells[2, 1]->getImageChar();
		item3 = cells[2, 2]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks column 1
		item1 = cells[0, 0]->getImageChar();
		item2 = cells[1, 0]->getImageChar();
		item3 = cells[2, 0]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks column 2
		item1 = cells[0, 1]->getImageChar();
		item2 = cells[1, 1]->getImageChar();
		item3 = cells[2, 1]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks column 3
		item1 = cells[0, 2]->getImageChar();
		item2 = cells[1, 2]->getImageChar();
		item3 = cells[2, 2]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks diagonal top left to bottom right
		item1 = cells[0, 0]->getImageChar();
		item2 = cells[1, 1]->getImageChar();
		item3 = cells[2, 2]->getImageChar();
		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		// Checks diagonal top right to bottom left
		item1 = cells[0, 2]->getImageChar();
		item2 = cells[1, 1]->getImageChar();
		item3 = cells[2, 0]->getImageChar();

		if ((item1 == item2) && (item1 == item3) && (item2 == item3))
		{
			return item1;
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (cells[i, j]->getImageChar() == '-')
				{
					return '-';
				}
			}
		}


		return '0';
	}

	public: System::Void WhenWin(System::Char winner)
	{
		buttonsClickable = false;
		setButtonClickable();

		MessageOut->Text = "Player " + winner + " wins!";
		return;
	}
	public: void changePlayer()
	{
		if (currentPlayer == 'X')
			currentPlayer = 'O';
		else
			currentPlayer = 'X';

		return;
	}

	public: void buttonClicked(int btnClicked, System::Char currPlayer)
	{
		int i, j;
		switch (btnClicked){
		case 0:
			i = 0;
			j = 0;
			break;
		case 1:
			i = 0;
			j = 1;
			break;
		case 2:
			i = 0;
			j = 2;
			break;
		case 3:
			i = 1;
			j = 0;
			break;
		case 4:
			i = 1;
			j = 1;
			break;
		case 5:
			i = 1;
			j = 2;
			break;
		case 6:
			i = 2;
			j = 0;
			break;
		case 7:
			i = 2;
			j = 1;
			break;
		case 8:
			i = 2;
			j = 2;
			break;
		}

		cells[i, j]->setImage(currPlayer);
		System::Char winner = checkWin();

		if (winner == 'X')
		{
			WhenWin('X');
		}
		else if (winner == 'O')
		{
			WhenWin('O');
		}
		else if (winner == '0')
		{
			MessageOut->Text = "The game is a Tie!";
		}
		else
		{
			changePlayer();
			MessageOut->Text = "Player " + currentPlayer + "'s turn!";
		}

		displayCells();
		return;

	}

	public: System::Void ReMakeArray()
	{
		int temp_x, temp_y;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
					temp_y = 0;
				else if (i == 1)
					temp_y = 100;
				else
					temp_y = 200;
				if (j == 0)
					temp_x = 0;
				else if (j == 1)
					temp_x = 100;
				else
					temp_x = 200;
				cells[i, j] = gcnew Cell(temp_x, temp_y, '-');
			}
		}

		return;
	}
	public: System::Void StartNewGame()
	{
		currentPlayer = 'X';
		ReMakeArray();
		displayCells();

		MessageOut->Text = "Player " + currentPlayer + "'s turn!";

		buttonsClickable = true;
		setButtonClickable();

		return;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		
		g = panel1->CreateGraphics();
		cells = gcnew array<Cell^, 2>(3, 3);
		ReMakeArray();
		displayCells();

		setButtonClickable();

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		StartNewGame();
	}
	private: System::Void btnTopLeft_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		TopLeft->Enabled = false;
		buttonClicked(0, currentPlayer);
	}
	private: System::Void btnTopMid_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		TopCenter->Enabled = false;
		buttonClicked(1, currentPlayer);
	}
	private: System::Void btnTopRight_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		TopRight->Enabled = false;
		buttonClicked(2, currentPlayer);
	}
	private: System::Void btnMidLeft_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CenterLeft->Enabled = false;
		buttonClicked(3, currentPlayer);
	}
	private: System::Void btnMidMid_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Center->Enabled = false;
		buttonClicked(4, currentPlayer);
	}
	private: System::Void btnMidRight_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CenterRight->Enabled = false;
		buttonClicked(5, currentPlayer);
	}
	private: System::Void btnBotLeft_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		BotLeft->Enabled = false;
		buttonClicked(6, currentPlayer);
	}
	private: System::Void btnBotMid_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		BotCenter->Enabled = false;
		buttonClicked(7, currentPlayer);
	}
	private: System::Void btnBotRight_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		BotRight->Enabled = false;
		buttonClicked(8, currentPlayer);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) 
{
	
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{

}
};
}

