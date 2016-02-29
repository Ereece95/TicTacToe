#pragma once

ref class Cell {
private:
	System::String^ blank_picture = "blank_pic.png"; // gets a blank pic image
	System::String^ x_picture = "x_pic.png"; // gets x picture
	System::String^ o_picture = "o_pic.png"; // y picture
	System::Drawing::Bitmap^ image;
	System::Char imgChar = '-';
	int x, y; // coordinates
	//Cell();
public:
	Cell(int, int, System::Char); // for drawing cell
	void setX(int);
	void setY(int);
	int getX();
	int getY(); // coordinates retrieval
	void setImage(System::Char); // sets x, blank, or o
	System::Char getImageChar();
	void display(System::Drawing::Graphics^); // for drawing 
};