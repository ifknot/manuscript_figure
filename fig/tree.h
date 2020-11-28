/*****************************************************************//**
 * @file   tree.h
 * @brief  hierarchical tree structure built using composite pattern 
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "leaf.h"
#include "composite.h"

namespace fig {

	using tree = composite<leaf>;

}
