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

				inline const std::pair<AstNode*, AstNode*>& getPair(int i) { return m_contents[i]; }

			private:

				std::vector< std::pair< AstNode *, AstNode * > > m_contents;
		};

	} // namespace delta
} // namespace parser

#endif



