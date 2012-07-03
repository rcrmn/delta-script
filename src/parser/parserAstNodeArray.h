/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_ARRAY_H__
#define __PARSER_AST_NODE_ARRAY_H__

#include "deltaConfig.h"
#include "parserAstNode.h"
#include <vector>

namespace delta {
	namespace parser {

		class ParserAstNodeArray : public ParserAstNode
		{
			public:
				
				ParserAstNodeArray() {};

				AstNodeType getType() const { return Array; };

			private:


		};

	} // namespace delta
} // namespace parser

#endif



