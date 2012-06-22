//
//  main.cpp
//  DeltaPL
//

#include <iostream>
#include <cstdio>
#include "parserContext.h"

#define INPUT_FILE "test.dt"

using namespace std;


int Parser_parse(delta::parser::Parser_Context* context);

int main (int argc, const char * argv[])
{

	cout << "Hello, World!\n";


	delta::parser::Parser_Context context;

	if(!Parser_parse(&context))
	{
		cout << context.result + 1 << endl;
	}
	
	
    return 0;
}

