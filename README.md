# manuscript_figure
A display item figure for academic manuscripts.

Intended to be cross-platform and windowing service flexible it is, however, currently implemented using wxWidgets. The _windowing service flexible_ notion allows `manuscript_figure` to be a component within the underlying windowing service as well as a standalone figure. As such, the current `wx_manuscript_figure` is a concrete implementation of `manuscript_figure` that is a compatible widget with wxWidgets.

A figure may be a chart, a graph, a photograph, a drawing, or any other illustration or nontextual depiction. Any type of illustration or image other than a table is referred to as a figure.

## Figure Components:
+ Number: The figure number(e.g. Figure 1) appears above the figure in bold
+ Title: The figure title appears one double-spaced line below the figure number in italic title case.
+ Image: The image portion of the figure is the chart, graph, photograph, drawing, or other illustration itself
+ Legend: A figure legend, or key, if present, should be positioned within the borders of the figure and explains any symbols used in the figure image
+ Note: A note can appear below the figure to describe contents of the figure that cannot be understood from the figure title, image, and/or legend alone (e.g. definitions of abbreviations, copyright attribution). Notes are double-spaced and flush left. Not all figures include notes.

## Figure Definition File:
Each journal will have specific formatting instructions relating to figures and tables, which can be found in the ‘Instructions to Authors’ section. These may be very detailed, such as those provided by the [Journal of Clinical Investigation](https://www.jci.org/kiosk/publish/figures) or [Cambridge Journal of Materials Research ](https://www.cambridge.org/core/journals/journal-of-materials-research/information/instructions-contributors/instructions-figures).

The manuscript_figure expects a `metrics.h` file that defines the journal specific constraints for display items.

## Example metrics.h
The [PLOS ONE journal](https://journals.plos.org/plosone/s/figures#loc-captions) formatting constraints expressed as a `metrics.h` file:
```cpp

#pragma once

#include <vector>

#include "types.h"

namespace fig {

	/**  
	 * PLOS_ONE defaults
	 * @url https://journals.plos.org/plosone/s/figures#loc-captions
	 */
	struct metrics_t {

		metrics_t(dpi_t dpi, rect_t bounding_box) : 
			dpi(dpi),
			bounding_box(bounding_box)
		{}

		dpi_t		dpi;	// pixels per inch of the paper - 12-pt font is 1/6 inch in height
		rect_t 		bounding_box;

		string_t	title{ "" };	// The figure title
		string_t	subtitle{ "" }; // Optional subtitle
		string_t	note{ "" };	// Optional A note can appear below the figure to describe contents of the figure that cannot be understood 
						// from the figure title, image, and/or legend alone (e.g. definitions of abbreviations, copyright attribution)
		string_t	tag{ "" };	// The figure number (e.g. Figure 1)

		// calculate screen metrics
		float_t		pixels_per_cm = dpi / cm_per_inch;
		float_t		pixels_per_pt = dpi / pt_per_inch;
		float_t		font_scale = dpi / pt_per_inch;

		//PLOS_ONE defaults
		colour_mode_t 	colour_mode{ colour_mode_t::RGB };
		unit_t		white_space_border{ 2, units::pt };
		unit_t		column_width{ 5.2, units::inch };
		unit_t		minimum_width{ 2.63, units::inch };
		unit_t		maximum_width{ 7.5, units::inch };
		unit_t		minimum_height{ 2.63, units::inch };
		unit_t		maximum_height{ 8.75, units::inch };

		unit_t		minimum_pt{ 8, units::pt };
		unit_t		maximum_pt{ 12, units::pt };
		font_list_t	valid_fonts{ "Ariel", "Times", "Symbol" };

	};

	/**
	 * PLOS_ONE defaults
	 * @url https://journals.plos.org/plosone/s/figures#loc-captions
	 */
	struct caption_t {

		caption_t(dpi_t dpi, rect_t bounding_box) :
			dpi(dpi),
			bounding_box(bounding_box) 
		{}

		dpi_t		dpi;	// pixels per inch of the paper - 12-pt font is 1/6 inch in height
		// the available drawing space bounding box
		// this will shrink if items are added e.g. margin, title, axes, legend
		// before finally displaying the plot itself
		rect_t		bounding_box;

		//PLOS_ONE defaults
		colour_mode_t colour_mode{ colour_mode_t::RGB };
		unit_t		white_space_border{ 2, units::pt };
		string_t	figure_label{ "" };
		string_t	figure_title{ "" };
		string_t	legend{ "" };
									//	cm	inches
		unit_t		column_width{ 13.2, units::cm };	// 	13.2 	5.2 
		unit_t		minimum_width{ 6.68, units::cm };	// 	6.68	2.63
		unit_t		maximum_width{ 19.05, units::cm };	// 	19.05	7.5
		unit_t		minimum_height{ 13.2, units::cm };	// 	13.2	5.2 
		unit_t		maximum_height{ 22.23, units::cm }; 	// 	22.23	8.75

		unit_t		minimum_pt{ 8, units::pt };
		unit_t		maximum_pt{ 12, units::pt };
		font_list_t	valid_fonts{ "Ariel", "Times", "Symbol" };
		
	};

}
```

## [Tips on effective use of tables and figures in research papers.](https://www.editage.com/insights/tips-on-effective-use-of-tables-and-figures-in-research-papers)
(Velany Rodrigues Nov 04, 2013)
