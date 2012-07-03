/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_H__
#define __PARSER_AST_NODE_H__

namespace delta {
	namespace parser {

		enum AstNodeType {
			Number,
			String,
			Symbol,
			Boolean,
			Range,
			Array,
			Map,

			Name,
			FunctionCall,
			Block,
			IfBlock,
			WhileBlock,
			ForBlock,
			FunctionBlock,
			ProtoBlock,
		};

		class ParserAstNode
		{
			public:
				virtual AstNodeType getType() const = 0;
		};

	} // namespace delta
} // namespace parser

#endif


