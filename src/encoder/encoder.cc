#include "encoder.h"


#include "../parser/abstractSyntaxTree.h"

using namespace delta;

using namespace delta::encoder;

using namespace std;


Encoder::Encoder()
	: m_syntaxTree(nullptr)
{

}

void Encoder::setAST(parser::AbstractSyntaxTree* ast)
{
	m_syntaxTree = ast;
}


void Encoder::encode()
{

}

