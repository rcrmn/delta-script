/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_MAP_H__
#define __PARSER_AST_NODE_MAP_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <vector>
#include <utility>

namespace delta {
	namespace parser {

		class AstNodeMap : public AstNode
		{
			public:
				
				AstNodeMap() {};

				AstNodeType getType() const { return Map; };

				inline void addValue(AstNode* key, AstNode* value) { m_contents.push_back(std::pair<AstNode*, AstNode*>(key, value)); }

				inline const std::pair<AstNode*, AstNode*>& getPair(int i) const { return m_contents[m_contents.size() - i - 1]; }

				inline size_t getValuesCount() const { return m_contents.size(); }


				virtual void test() const 
				{
					std::cout << "Map{ "; 
					int c = getValuesCount();
					for(int i = 0; i < c; ++i)
					{
						getPair(i).first->test();
						std::cout << " ==> ";
						getPair(i).second->test();
						std::cout << " // ";
					}
					std::cout << " }";
				}
			private:

				std::vector< std::pair< AstNode *, AstNode * > > m_contents;
		};

	} // namespace delta
} // namespace parser

#endif



