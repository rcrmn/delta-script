/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_RANGE_H__
#define __PARSER_AST_NODE_RANGE_H__

#include "../deltaConfig.h"
#include "astNode.h"

namespace delta {
	namespace parser {

		class AstNodeRange : public AstNode
		{
			public:
				
				AstNodeRange() : m_start(0), m_end(0), m_step(0) {};

				AstNodeRange(number_t start, number_t end) : m_start(start), m_end(end), m_step(1) {};

				AstNodeRange(number_t start, number_t end, number_t step) : m_start(start), m_end(end), m_step(step) {};


				AstNodeType getType() const { return Range; };

				inline number_t getRangeStart() const { return m_start; };

				inline number_t getRangeEnd() const { return m_end; };

				inline number_t getRangeStep() const { return m_step; };

				inline void setRange(number_t start, number_t end, number_t step) { m_start = start; m_end = end; m_step = step; };
				inline void setRange(number_t start, number_t end) { setRange(start, end, 1); };

			private:

				number_t m_start, m_end, m_step;

		};

	} // namespace delta
} // namespace parser

#endif



