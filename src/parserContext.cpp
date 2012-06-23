#include "parserContext.h"
#include <iostream>

using namespace std;

namespace delta
{
namespace parser
{





/* public */
Parser_Context::Parser_Context (std::istream* is)
{
	init_scanner();
	this->m_is = is;
	this->m_is->unsetf(ios::skipws); // And fucking stay like this forever!
}







/* public virtual */
Parser_Context::~Parser_Context	(void)
{
	destroy_scanner();

	clear_strings();
}






/* public */
char*	Parser_Context::addString (const char* or_str, bool stripQuotes)
{

	str_container_t cont;
	const char*		read_str;
	long int		length;

	if(or_str != NULL)
	{
		if(stripQuotes)
		{
			length = strlen(or_str)-2;
			read_str = or_str+1;
		}
		else
		{
			length = strlen(or_str);
			read_str = or_str;
		}
    
		if(length < 40)
		{
			cont.len = 40;
		}
		else
		{
			cont.len = length + 10;
		}
	}
	else
	{
		cont.len = 40;
	}

	cont.str = new char[cont.len];


	if(or_str != NULL)
	{
		strncpy(cont.str, read_str, length);
		cont.str[length] = 0;
	}
	else
	{
		cont.str[0] = 0;
	}
	
	m_strings.push_back(cont);
	
	return cont.str;

} // addString





/* public */
char*	Parser_Context::appendToString(const char* ap_str)
{
	if(ap_str == NULL)
	{
		return m_strings.back().str;
	}

	str_container_t* cont = &(m_strings.back());

	long int newlen = strlen(cont->str) + strlen(ap_str);
	
	if(cont->len <= newlen)
	{
		char* previous;

		if(cont->len*2 > newlen)
		{
			cont->len *= 2;
		}
		else
		{
			cont->len = newlen + 10;
		}

		previous = cont->str;
		cont->str = new char[cont->len];
		
		strcpy(cont->str, previous);

		delete[] previous;
	}

	strcat(cont->str, ap_str);

	return cont->str;

} // appendToString





/* protected */
void	Parser_Context::clear_strings (void)
{
	cout << "Clearing strings." << endl;
	for(std::vector<str_container_t>::iterator it = m_strings.begin(); it != m_strings.end(); ++it)
	{
		cout << (*it).len << "  "<< (*it).str << endl;
		delete[] (*it).str;
	}

	m_strings.clear();

} // clear_strings




} // namespace parser
} // namespace delta
