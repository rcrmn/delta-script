/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_MAP_H__
#define __PARSER_AST_NODE_MAP_H__

#include "deltaConfig.h"
#include "parserAstNode.h"
#include <map>

namespace delta {
	namespace parser {

		class ParserAstNodeMap : public ParserAstNode
		{
			public:
				
				ParserAstNodeMap() {};

				AstNodeType getType() const { return Map; };

			private:

		};

	} // namespace delta
} // namespace parser

#endif



