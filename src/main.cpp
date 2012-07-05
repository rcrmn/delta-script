//
//  main.cpp
//  DeltaPL
//

#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

#include "parser.h"



//#include "parserContext.h"

#define INPUT_FILE "test2.dt"



/*
int Parser_parse(delta::parser::Parser_Context* context);
*/


int main (int argc, const char * argv[])
{
	cout << "Hello, World!\n";
	ifstream fs(INPUT_FILE);

	delta::parser::Parser p;

	p.parse(&fs);

/*
	delta::parser::Parser_Context context(&fs);

	if(!Parser_parse(&context))
	{
		cout << context.result + 1 << endl;
	}
*/	
	
    return 0;
}

