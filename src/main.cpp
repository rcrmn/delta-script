//
//  main.cpp
//  DeltaPL
//

#include <iostream>
#include <cstdio>
#include <sstream>
#include "parserContext.h"

#define INPUT_FILE "test.dt"

using namespace std;


int Parser_parse(delta::parser::Parser_Context* context);

int main (int argc, const char * argv[])
{

	cout << "Hello, World!\n";

	istringstream iss("\"hola mon\"");

	delta::parser::Parser_Context context(&iss);

	if(!Parser_parse(&context))
	{
		cout << context.result + 1 << endl;
	}
	
	
    return 0;
}

