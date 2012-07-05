/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_H__
#define __PARSER_AST_H__

#include <vector>

#include "astNode.h"
#include "astNodeArray.h"
#include "astNodeBlock.h"
#include "astNodeBoolean.h"
#include "astNodeConstSlot.h"
#include "astNodeForBlock.h"
#include "astNodeFunBlock.h"
#include "astNodeFunCall.h"
#include "astNodeIfBlock.h"
#include "astNodeMap.h"
#include "astNodeNumber.h"
#include "astNodeOperator.h"
#include "astNodeProtoBlock.h"
#include "astNodeRange.h"
#include "astNodeSlot.h"
#include "astNodeSlotDecl.h"
#include "astNodeString.h"
#include "astNodeSymbol.h"
#include "astNodeWhileBlock.h"

namespace delta {
	namespace parser {

		class AstNode;
		class AstNodeBlock;


		class AbstractSyntaxTree
		{
			public:

				AbstractSyntaxTree() {}


				AstNode* addBlock(AstNode* block);

				AstNode* exitBlock();

				AstNode* addExpression(AstNode* expr);
				
				void test();
			private:

				std::vector<AstNodeBlock *> m_blockStack;

				std::vector<AstNode *> m_expressions;

		};

	} // namespace delta
} // namespace parser

#endif



