//
// Copyright (c) 2019 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#pragma once


#include <string>
#include <iostream>


namespace ofx {
namespace Addon {


/// \brief A demo class.
class ClazzTwo
{
public:
    /// \brief Create a default instance.
    ClazzTwo()
    {
        std::cout << "ClazzTwo!" << std::endl;
    }

};


} } // namespace ofx::Addon
