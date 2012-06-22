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

	char* str, read_str;
	long int length;

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

	str = new char[length+1];
	
	strcpy(str, read_str);
	
	m_strings.push_back(str);
	
	return str;

} // addString








/* protected */
void	Parser_Context::clear_strings (void)
{
	for(std::vector<char*>::iterator it = m_strings.begin(); it != m_strings.end(); ++it)
	{
		delete[] (*it);
	}

	m_strings.clear();

} // clear_strings




} // namespace parser
} // namespace delta
