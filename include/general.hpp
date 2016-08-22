#ifndef _GENERAL_HPP_
#define _GENERAL_HPP_

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#include <string>
using std::string;

#include <cstdint>
using std::int64_t;
using std::uint64_t;

// smart ptr
#include <memory>


namespace aisqlpp {

#if 0
#define BOOST_LOG_T(x) BOOST_LOG_TRIVIAL(x)<<::basename(__FILE__)<<":"<<__LINE__<<"[@"<<__func__<<"]"<<" " 
#else
#define BOOST_LOG_T(x) std::cerr<<std::endl<<#x<<::basename(__FILE__)<<":"<<__LINE__<<"[@"<<__func__<<"]"<<" " 
#endif

}



#endif // _GENERAL_HPP_