/*****************************************************************//**
 * @file   leaf.h
 * @brief  a node that is not a composite inode
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#define USE_WX_WIDGETS

#include "metrics.h"
#include "component.h"

#ifdef USE_WX_WIDGETS

#include "wx_component.h"

namespace fig {

	using leaf = wx_component;

}

#elif defined(USE_QT)

#include "qt_component.h"

namespace fig {

	using leaf = qt_component;

}

#else 

#error *** no concrete gui implentation defined ***

#endif 
