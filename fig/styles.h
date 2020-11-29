/*****************************************************************//**
 * @file   styles.h
 * @brief  structs that specify the style of how figure primitives are rendered.
 * e.g. colour, font, transparency, thickness, etc.
 * heavily inspired by https://ggplot2.tidyverse.org/reference/element.html
 * @note Line spacing is commonly measured as a percentage of font size. 
 * Conventional wisdom is that line spacing of 130%-150% is ideal for readability. 
 * In fact, anything from about 120% up to 200% is acceptable, but 140% tends to be the most quoted sweet spot.
 *
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/
#pragma once

#include "types.h"
#include "colours.h"
#include "unit.h"
#include "rectangle.h"

namespace fig {

	static const colour_t transparent{ 255, 255, 255, 0 };

	enum class linetypes { blank, solid, dashed, dotted, dotdash, longdash, twodash };
	enum class hatchtypes { solid, transparent, cross, horizontal, vertical, diagonal_backwards, diagonal_forwards, diagonal_cross};
	enum class endstyles { round, butt, square };

	// convenient dimensions and positions

	const dimension_t halfsize{ 0.5, 0.5 };
	const dimension_t fullsize{ 1,1 };
					
	const point_t topleft{ 0, 0 };
	const point_t top{ 0.5, 0 };
	const point_t topright{ 1, 0 };
	const point_t left{ 0, 0.5 };
	const point_t right{ 1, 0.5 };
	const point_t bottomleft{ 0, 1 };
	const point_t bottom{ 0.5, 1 };
	const point_t bottomright{ 1, 1 };

	struct font_t {
		float_t				size;
		string_t			family;
	};

	struct style_arrow_t {

		enum class arrow_end_t { last, first, both };
		enum class arrow_type_t { open, closed };
						// defaults
		float_t			angle{ 45 };				// the angle of the arrow head in degrees (smaller numbers produce narrower, pointier arrows).Essentially describes the width of the arrow head.length
		unit_t			length{ 1, units::pt };		// unit specifying the length of the arrow head (from tip to base).
		arrow_end_t		ends{ arrow_end_t::last };	// one of "last", "first", or "both", indicating which ends of the line to draw arrow heads.
		arrow_type_t	type{ arrow_type_t::open };	// one of "open" or "closed" indicating whether the arrow head should be a closed triangle.

	};

	struct style_line_t {
						//defaults
		colour_t		colour{ black };			// line / border colour default black
		float_t			size{ 1 };					// line / border size in mm; text size in pts.
		linetypes		linetype{ linetypes::solid };	// line type blank, solid, dashed, dotted, dotdash, longdash, twodash
		endstyles		lineend{ endstyles::butt };	// line end style round, butt, square
		style_arrow_t	arrow;						// arrow specification

	};

	struct style_rect_t {
						// defaults
		colour_t		fill{ white };				// fill colour 
		colour_t		colour{ black };			// line / border 
		float_t			size{ 1 };					// line / border size in mm; text size in pts.
		linetypes		linetype{ linetypes::solid };	// line type integer 0:8 blank, solid, dashed, dotted, dotdash, longdash, twodash
		hatchtypes		hatchtype{ hatchtypes::solid }; // fill colour hatch style

	};

	struct style_circle_t {
						//defaults
		colour_t		fill{ white };					// fill colour	
		colour_t		colour{ black };				// line / border colour		
		float_t			size{ 1 };						// line / border size in mm; text size in pts.
		linetypes		linetype{ linetypes::solid };	// line type integer 0:8 blank, solid, dashed, dotted, dotdash, longdash, twodash
		hatchtypes		hatchtype{ hatchtypes::solid }; // fill colour hatch style
	
	};

	struct style_text_t {

		enum class face_t { plain, italic, bold, bold_italic };
						// defaults
		string_t		family{ "Ariel" };
		face_t			face{ face_t::plain };
		colour_t		colour{ black };			// line / border colour
		float_t			size{ 1 };					// line / border size in mm; text size in pts.
		float_t			hjust{ 0 };					// horizontal justification (in [0,1])
		float_t			vjust{ 0 };					// vertical justification (in [0,1])
		float_t			angle{ 0 };					// angle (in [0,360])
		float_t			lineheight{ 1.4 };			// line height as factor of font size 
		colour_t		background{ transparent };
		rect_t			margin{ 0, 0, 0, 0, units::inch };	

	};

}
