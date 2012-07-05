/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_FOR_BLOCK_H__
#define __PARSER_AST_NODE_FOR_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeBlock.h"
#include "astNodeSlot.h"

namespace delta {
	namespace parser {

		class AstNodeForBlock : public AstNodeBlock
		{
			public:
				
				AstNodeForBlock() : m_it(0) {};

				virtual AstNodeType getType() const { return ForBlock; };


				inline void addInVar(AstNodeSlot* var) { m_inVars.push_back(var); }

				inline size_t getInVarsCount() { return m_inVars.size(); }

				inline AstNodeSlot* getInVar(int i) { return m_inVars[i]; }


				inline void setIterator(AstNode* it) { m_it = it; }

				inline AstNode* getIterator() { return m_it; }
				
			private:

				std::vector<AstNodeSlot*> m_inVars;

				AstNode* m_it;

		};

	} // namespace delta
} // namespace parser

#endif






