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

namespace fig {

	template<typename Component_Policy>
	class composite : public Component_Policy {

		using component_containter_t = std::vector<std::unique_ptr<Component_Policy>>;

	public:

		using Component_Policy::component;

		inline void add(Component_Policy* p) {
			components.emplace_back(p);
		}

		inline void render(Component_Policy::GDC_type& gdc) override {
			for (auto& c : components) {
				c->render(gdc);
			}
		}

	protected:

		component_containter_t components;

	};

}
