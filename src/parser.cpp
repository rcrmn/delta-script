#include "parser.h"

#include "parserContext.h"

#include "parser/abstractSyntaxTree.h"


#include <iostream>



int Parser_parse(delta::parser::Parser_Context* context);



using namespace delta;

using namespace delta::parser;

using namespace std;


Parser::Parser		() 
	: m_engineContext(0)
{

}



void Parser::parse(istream* file)
{
	m_engineContext = new Parser_Context(file);

	m_syntaxTree = new AbstractSyntaxTree();

	m_engineContext->ast = m_syntaxTree;

	Parser_parse(m_engineContext);

		// TODO: Remove
	m_syntaxTree->test();
}



