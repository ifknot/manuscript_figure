/*****************************************************************//**
 * @file   constants.h
 * @brief  typographic units
 * There are 3 confounding factors that result in non-metric font sizes:
 * 1. typography is an old art (much older than the metric system)
 * 2. there exists no well-established practice for denoting a font size
 * 3. the printing and publishing software market is at present dominated by manufacturers (Apple, Adobe, Microsoft, Quark, etc.) located in the United States
 * printing equipment manufacturers all over the world have established a bewildering variety units to measure length, 
 * many of which continue to be used today:
 * + 1 point (Truchet) = 0.188 mm (obsolete today)
 * + 1 point (Didot) = 0.376 mm = 1/72 of a French royal inch (27.07 mm)
 * + 1 point (ATA) = 0.3514598 mm = 0.013837 inch
 * + 1 point (TeX) = 0.3514598035 mm = 1/72.27 inch
 * + 1 point (Postscript) = 0.3527777778 mm = 1/72 inch
 * + 1 point (l’Imprimerie nationale, IN) = 0.4 mm
 * + 1 pica (ATA) = 4.2175176 mm = 12 points (ATA)
 * + 1 pica (TeX) = 4.217517642 mm = 12 points (TeX)
 * + 1 pica (Postscript) = 4.233333333 mm = 12 points (Postscript) 
 * + 1 cicero = 4.531 mm = 12 points (Didot) * 
 * @author Jeremy Thornton
 * @date   November 2020
 *********************************************************************/

namespace fig {

	/**
	 * permits the global adjustment of f.p. accuracy vs speed
	 */
	using float_t = double;

	/**
	 * whilst the dominant unit of length, the Postscript point, is 1/72 inch
	 * figure defaults to TeX point sizes where there are 72.272 points per inch
	 * @note but the closely related "bigpts" Big Points. 72 bp = 1 in.
	 */
	static const float_t pt_per_inch = 72.272;

	/**
	 * journal formatting instructions are usually presented in inches and cm
	 * resolution, however, is universally expressed as dots per inch (dpi)
	 * internally, therefore, figure uses inches to speed the conversion to screen coordinates
	 */
	static const float_t cm_per_inch = 2.54;

	/**
	 * conversion convenience 
	 */
	static const float_t inch_per_cm = 0.393701;

	/**
	 * Line spacing is commonly measured as a percentage of font size.
	 * Conventional wisdom is that line spacing of 130%-150% is ideal for readability.
	 * In fact, anything from about 120% up to 200% is acceptable but 140% tends to be the most quoted sweet spot.
	 */
	static const double line_height = 1.4;

}