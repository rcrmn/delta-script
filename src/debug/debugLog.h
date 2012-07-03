/*
 *
 */

#pragma once
#if ! defined __DEBUG_LOG_H__
#define __DEBUG_LOG_H__

#include <string>

namespace delta {

	class DebugLog {

		public:

			static DebugLog*		getInstance			(void);

			void					print				(const char * str);
			void					print				(const std::string& str);



		private:

			DebugLog();


		private:

			DebugLog*				singleton;


	};

}


#endif
