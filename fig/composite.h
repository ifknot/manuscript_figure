/*****************************************************************//**
 * @file   composite.h
 * @brief  The canonical composite patter
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include <vector>
#include <memory>

#include "component.h"

namespace fig {

	template<typename T>
	class composite : public component<T> {

		using component_containter_t = std::vector<std::unique_ptr<component>>;

	public:

		using component<T>::component;

		inline void add(component* p) {
			components.emplace_back(p);
		}

		inline void render(T& gdc) override {
			for (auto& c : components) {
				c->render(gdc);
			}
		}

	protected:

		component_containter_t components;

	};

}
