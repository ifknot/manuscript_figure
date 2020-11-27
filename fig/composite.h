/*****************************************************************//**
 * @file   composite.h
 * @brief  The canonical composite pattern
 * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include <vector>
#include <memory>

#include "metrics.h"

namespace fig {

	template<typename Component_Policy>
	class composite : public Component_Policy {

		using component_containter_t = std::vector<std::unique_ptr<Component_Policy>>;

	public:

		composite(metrics_t& metrics) : Component_Policy(metrics) {}

		composite(const Component_Policy* parent) : Component_Policy(parent) {}

		inline void add(Component_Policy* p) {
			components.emplace_back(p);
		}

		inline void render(typename Component_Policy::GDC_type& gdc) override {
			for (auto& c : components) {
				c->render(gdc);
			}
		}

	protected:

		component_containter_t components;

	};

}
