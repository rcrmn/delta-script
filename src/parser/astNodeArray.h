/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_ARRAY_H__
#define __PARSER_AST_NODE_ARRAY_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <vector>

namespace delta {
	namespace parser {

		class AstNodeArray : public AstNode
		{
			public:
				
				AstNodeArray() {};

				AstNodeType getType() const { return Array; };

				inline void addValue(AstNode* value) { m_contents.push_back(value); }

				inline AstNode* getValue(int i) const { return m_contents[m_contents.size() - i - 1]; }

				inline size_t getValuesCount() const { return m_contents.size(); }

				virtual void test() const 
				{ 
					std::cout << "Array[ "; 
					int c = getValuesCount();
					for(int i = 0; i<c; ++i)
					{
						getValue(i)->test();
					}
					std::cout << " ]"; 
				}

			private:

				std::vector<AstNode *> m_contents;

		};

	} // namespace delta
} // namespace parser

#endif



