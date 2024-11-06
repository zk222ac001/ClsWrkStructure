#include <stdio.h>
#include <string.h>

// function protype
void PrintingValues(struct Books book);

// struct --> reserved keyword
// Books --> structure name 
// step no 1 : define structure
struct Books
{	// Data members
	char title[50]; // string beholde characters 50
	char author[20]; // string
	double price; // double
	int pages; // int
	char level;
};

int main() {
	// step no 2 : Initialize structure instances
	// initialize Book instances
	/*struct Books CLanguage = { "Learn C language 1234&!#", "Dennis Lilly", 300.30, 400, 'A' };;
	struct Books Javascript = { "Learn 1234&!# Javascript" , "Dennis Lilly" , 300.30 , 400 , 'B' };
	struct Books CSharp = { "Learn v CSharp" , "Dennis Lilly" , 300.30 , 400 , 'C' };
	struct Books Java = { "Learn 1234&!# Java" , "Dennis Lilly" , 300.30 , 400 , 'D' };
	struct Books Python;*/

	struct Books CLanguage = { NULL };
	struct Books Javascript = { NULL };
	struct Books CSharp = { NULL };
	struct Books Java = { NULL };
	struct Books Python = { NULL };

	// step no 3: Assign values
	// Assign values to structure variables

	// 1st mechanism of assigning values
	CLanguage = { "Learn C language 1234&!#" , "Dennis Lilly" , 300.30 , 400 , 'A'};
	Javascript = { "Learn 1234&!# Javascript" , "Dennis Lilly" , 300.30 , 400 , 'B' };
	CSharp = { "Learn v CSharp" , "Dennis Lilly" , 300.30 , 400 , 'C' };
	Java = { "Learn 1234&!# Java" , "Dennis Lilly" , 300.30 , 400 , 'D' };

	// 2nd mechinism of assiging values
	strcpy(Python.author, "Simon");
	strcpy(Python.title, "Learn Python");
	Python.price = 46.99;
	Python.pages = 465;
	Python.level = 'C';

	// step no : 4 : Printing values
	PrintingValues(CLanguage);
	PrintingValues(Javascript);
	PrintingValues(CSharp);
	PrintingValues(Java);
	PrintingValues(Python);
	
}

// function declaration or function header
void PrintingValues(Books book)
{
	printf(" Author: %s \n", book.author);
	printf(" Title:  %s \n", book.title);
	printf(" Price: %lf \n", book.price);
	printf(" Pages: %d \n",  book.pages);
	printf(" Level: %c \n",  book.level);
	printf("\n");

}
