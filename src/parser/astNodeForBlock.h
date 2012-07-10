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
				
				AstNodeForBlock() : m_it(0), m_block(0) {};

				virtual AstNodeType getType() const { return ForBlock; };


				inline void addInVar(AstNode* var) { m_inVars.push_back(var); }

				inline size_t getInVarsCount() const { return m_inVars.size(); }

				inline AstNode* getInVar(int i) const { return m_inVars[getInVarsCount() - i - 1]; }


				inline void setIterator(AstNode* it) { m_it = it; }

				inline AstNode* getIterator() const { return m_it; }
				

				inline void setBlock(AstNode* block) { m_block = block; } 

				inline AstNode* getBlock() const { return m_block; }

				virtual void test() const
				{
					std::vector<AstNode*>::const_iterator it;
					std::cout << " FOR ( (";
					for(it = m_inVars.begin(); it != m_inVars.end(); ++it)
					{
						(*it)->test();
						std::cout << " && ";
					}
					std::cout << " )  IN  ( ";
					m_it->test();
					std::cout << " ) )  { " << std::endl;
					m_block->test();
					std::cout << std::endl << " } " << std::endl;
				}
			private:

				std::vector<AstNode*> m_inVars;

				AstNode* m_it;

				AstNode* m_block;
		};

	} // namespace delta
} // namespace parser

#endif






