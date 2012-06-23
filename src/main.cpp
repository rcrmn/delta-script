//
//  main.cpp
//  DeltaPL
//

#include <iostream>
#include <cstdio>
#include <fstream>
#include "parserContext.h"

#define INPUT_FILE "test.dt"

using namespace std;


int Parser_parse(delta::parser::Parser_Context* context);

int main (int argc, const char * argv[])
{

	cout << "Hello, World!\n";

	ifstream fs("test.dt");

	delta::parser::Parser_Context context(&fs);

	if(!Parser_parse(&context))
	{
		cout << context.result + 1 << endl;
	}
	
	
    return 0;
}

