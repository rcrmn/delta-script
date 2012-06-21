/*
 * Roc Ramon
 */


#pragma once
#if !defined(__PARSER_H__)
#define __PARSER_H__

#include <iostream>

namespace delta {
	namespace parser {

		class Parser_Context {

			public:
				void*				m_scanner;
				std::istream*		m_is;

			public:
				Parser_Context			(std::istream* is)
				{
					init_scanner();
					this->m_is = is;
				}

				virtual ~Parser_Context	(void)
				{
					destroy_scanner();
				}

			protected:
				void		init_scanner (void);
				void		destroy_scanner (void);
		};

	};
};


/*union YYSTYPE 
{
	double val;
	symrec *tptr;
};
typedef union YYSTYPE YYSTYPE;*/



#endif
