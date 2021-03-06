// Boost.Range library
//
//  Copyright Thorsten Ottosen 2003-2004. Use, modification and
//  distribution is subject to the Boost Software License, Version
//  1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.lslboost.org/LICENSE_1_0.txt)
//
// For more information, see http://www.lslboost.org/libs/range/
//

#ifndef BOOST_RANGE_DIFFERENCE_TYPE_HPP
#define BOOST_RANGE_DIFFERENCE_TYPE_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

#include <lslboost/range/config.hpp>
#include <lslboost/range/iterator.hpp>
#include <lslboost/iterator/iterator_traits.hpp>

namespace lslboost
{
    template< class T >
    struct range_difference : iterator_difference< typename range_iterator<T>::type >
    { };
}

#endif
