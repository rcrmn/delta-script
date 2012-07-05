#include "abstractSyntaxTree.h"
#include "astNode.h"
#include "astNodeBlock.h"
#include <iostream>

using namespace delta;

using namespace delta::parser;

using namespace std;


AstNode* AbstractSyntaxTree::addBlock(AstNode* block)
{
	AstNodeBlock* nblock;

	nblock = dynamic_cast<AstNodeBlock*>(block);

	if(!nblock)
	{
		cout << "Trying to treat non-block node as Block." << endl;
		return block;
	}

	addExpression(block);

	m_blockStack.push_back(nblock);

	return block;
}


AstNode* AbstractSyntaxTree::exitBlock()
{
	AstNode* node = m_blockStack.back();

	m_blockStack.pop_back();

	return node;
}


AstNode* AbstractSyntaxTree::addExpression(AstNode* expr)
{
	if(m_blockStack.size() == 0)
	{
		// We are at the outermost scope.
		m_expressions.push_back(expr);
	}
	else
	{
		m_blockStack.back()->addExpression(expr);
	}

	return expr;
}


void AbstractSyntaxTree::test()
{
	std::vector<AstNode*>::iterator it;

	cout << "Testing AST:" << endl;
	cout << m_expressions.size() << " expressions." << endl;

	for (it = m_expressions.begin(); it != m_expressions.end(); ++it)
	{
		cout << "-- Exp:" << endl;
		cout << (*it)->getType();
		(*it)->test();
		cout << endl;
	}
}

