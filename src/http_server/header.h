// Copyright (c) 2003-2010 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HTTP_HEADER_H
#define HTTP_HEADER_H

#include <string>

namespace Http {

struct header
{
    std::string name;
    std::string value;
};

} // namespace Http

#endif // HTTP_HEADER_H
