#pragma once

#include "types.h"

namespace fig {

	struct colour_t {

		uint8_t		red		{ 0x00 };
		uint8_t		green	{ 0x00 };
		uint8_t		blue	{ 0x00 };
		uint8_t		alpha	{ 0xFF };

	};

	static const colour_t	Grey{ 84, 84, 84 };
	static const colour_t	Silver{ 192, 192, 192 };
	static const colour_t	grey{ 190, 190, 190 };
	static const colour_t	LightGray{ 211, 211, 211 };
	static const colour_t	LightSlateGrey{ 119, 136, 153 };
	static const colour_t	SlateGray{ 112, 128, 144 };
	static const colour_t	SlateGray1{ 198, 226, 255 };
	static const colour_t	SlateGray2{ 185, 211, 238 };
	static const colour_t	SlateGray3{ 159, 182, 205 };
	static const colour_t	SlateGray4{ 108, 123, 139 };
	static const colour_t	black{ 0, 0, 0 };
	static const colour_t	grey0{ 0, 0, 0 };
	static const colour_t	grey1{ 3, 3, 3 };
	static const colour_t	grey2{ 5, 5, 5 };
	static const colour_t	grey3{ 8, 8, 8 };
	static const colour_t	grey4{ 10, 10, 10 };
	static const colour_t	grey5{ 13, 13, 13 };
	static const colour_t	grey6{ 15, 15, 15 };
	static const colour_t	grey7{ 18, 18, 18 };
	static const colour_t	grey8{ 20, 20, 20 };
	static const colour_t	grey9{ 23, 23, 23 };
	static const colour_t	grey10{ 26, 26, 26 };
	static const colour_t	grey11{ 28, 28, 28 };
	static const colour_t	grey12{ 31, 31, 31 };
	static const colour_t	grey13{ 33, 33, 33 };
	static const colour_t	grey14{ 36, 36, 36 };
	static const colour_t	grey15{ 38, 38, 38 };
	static const colour_t	grey16{ 41, 41, 41 };
	static const colour_t	grey17{ 43, 43, 43 };
	static const colour_t	grey18{ 46, 46, 46 };
	static const colour_t	grey19{ 48, 48, 48 };
	static const colour_t	grey20{ 51, 51, 51 };
	static const colour_t	grey21{ 54, 54, 54 };
	static const colour_t	grey22{ 56, 56, 56 };
	static const colour_t	grey23{ 59, 59, 59 };
	static const colour_t	grey24{ 61, 61, 61 };
	static const colour_t	grey25{ 64, 64, 64 };
	static const colour_t	grey26{ 66, 66, 66 };
	static const colour_t	grey27{ 69, 69, 69 };
	static const colour_t	grey28{ 71, 71, 71 };
	static const colour_t	grey29{ 74, 74, 74 };
	static const colour_t	grey30{ 77, 77, 77 };
	static const colour_t	grey31{ 79, 79, 79 };
	static const colour_t	grey32{ 82, 82, 82 };
	static const colour_t	grey33{ 84, 84, 84 };
	static const colour_t	grey34{ 87, 87, 87 };
	static const colour_t	grey35{ 89, 89, 89 };
	static const colour_t	grey36{ 92, 92, 92 };
	static const colour_t	grey37{ 94, 94, 94 };
	static const colour_t	grey38{ 97, 97, 97 };
	static const colour_t	grey39{ 99, 99, 99 };
	static const colour_t	grey40{ 102, 102, 102 };
	static const colour_t	grey41{ 105, 105, 105 };
	static const colour_t	DimGrey{ 105, 105, 105 };
	static const colour_t	grey42{ 107, 107, 107 };
	static const colour_t	grey43{ 110, 110, 110 };
	static const colour_t	grey44{ 112, 112, 112 };
	static const colour_t	grey45{ 115, 115, 115 };
	static const colour_t	grey46{ 117, 117, 117 };
	static const colour_t	grey47{ 120, 120, 120 };
	static const colour_t	grey48{ 122, 122, 122 };
	static const colour_t	grey49{ 125, 125, 125 };
	static const colour_t	grey50{ 127, 127, 127 };
	static const colour_t	grey51{ 130, 130, 130 };
	static const colour_t	grey52{ 133, 133, 133 };
	static const colour_t	grey53{ 135, 135, 135 };
	static const colour_t	grey54{ 138, 138, 138 };
	static const colour_t	grey55{ 140, 140, 140 };
	static const colour_t	grey56{ 143, 143, 143 };
	static const colour_t	grey57{ 145, 145, 145 };
	static const colour_t	grey58{ 148, 148, 148 };
	static const colour_t	grey59{ 150, 150, 150 };
	static const colour_t	grey60{ 153, 153, 153 };
	static const colour_t	grey61{ 156, 156, 156 };
	static const colour_t	grey62{ 158, 158, 158 };
	static const colour_t	grey63{ 161, 161, 161 };
	static const colour_t	grey64{ 163, 163, 163 };
	static const colour_t	grey65{ 166, 166, 166 };
	static const colour_t	grey66{ 168, 168, 168 };
	static const colour_t	grey67{ 171, 171, 171 };
	static const colour_t	grey68{ 173, 173, 173 };
	static const colour_t	grey69{ 176, 176, 176 };
	static const colour_t	grey70{ 179, 179, 179 };
	static const colour_t	grey71{ 181, 181, 181 };
	static const colour_t	grey72{ 184, 184, 184 };
	static const colour_t	grey73{ 186, 186, 186 };
	static const colour_t	grey74{ 189, 189, 189 };
	static const colour_t	grey75{ 191, 191, 191 };
	static const colour_t	grey76{ 194, 194, 194 };
	static const colour_t	grey77{ 196, 196, 196 };
	static const colour_t	grey78{ 199, 199, 199 };
	static const colour_t	grey79{ 201, 201, 201 };
	static const colour_t	grey80{ 204, 204, 204 };
	static const colour_t	grey81{ 207, 207, 207 };
	static const colour_t	grey82{ 209, 209, 209 };
	static const colour_t	grey83{ 212, 212, 212 };
	static const colour_t	grey84{ 214, 214, 214 };
	static const colour_t	grey85{ 217, 217, 217 };
	static const colour_t	grey86{ 219, 219, 219 };
	static const colour_t	grey87{ 222, 222, 222 };
	static const colour_t	grey88{ 224, 224, 224 };
	static const colour_t	grey89{ 227, 227, 227 };
	static const colour_t	grey90{ 229, 229, 229 };
	static const colour_t	grey91{ 232, 232, 232 };
	static const colour_t	grey92{ 235, 235, 235 };
	static const colour_t	grey93{ 237, 237, 237 };
	static const colour_t	grey94{ 240, 240, 240 };
	static const colour_t	grey95{ 242, 242, 242 };
	static const colour_t	grey96{ 245, 245, 245 };
	static const colour_t	grey97{ 247, 247, 247 };
	static const colour_t	grey98{ 250, 250, 250 };
	static const colour_t	grey99{ 252, 252, 252 };
	static const colour_t	grey100{ 255, 255, 255 };
	static const colour_t	White{ 255, 255, 255 };
	static const colour_t	DarkSlateGrey{ 47, 79, 79 };
	//static const wxColour	DimGrey{ 84, 84, 84 };
	static const colour_t	VeryLightGrey{ 205, 205, 205 };
	static const colour_t	FreeSpeechGrey{ 99, 86, 136 };
	static const colour_t	AliceBlue{ 240, 248, 255 };
	static const colour_t	BlueViolet{ 138, 43, 226 };
	static const colour_t	CadetBlue{ 95, 159, 159 };
	//static const wxColour	CadetBlue{ 95, 158, 160 };
	//static const wxColour	CadetBlue{ 95, 158, 160 };
	static const colour_t	CadetBlue1{ 152, 245, 255 };
	static const colour_t	CadetBlue2{ 142, 229, 238 };
	static const colour_t	CadetBlue3{ 122, 197, 205 };
	static const colour_t	CadetBlue4{ 83, 134, 139 };
	static const colour_t	CornflowerBlue{ 66, 66, 111 };
	//static const wxColour	CornflowerBlue{ 100, 149, 237 };
	static const colour_t	DarkSlateBlue{ 72, 61, 139 };
	static const colour_t	DarkTurquoise{ 0, 206, 209 };
	static const colour_t	DeepSkyBlue{ 0, 191, 255 };
	static const colour_t	DeepSkyBlue1{ 0, 191, 255 };
	static const colour_t	DeepSkyBlue2{ 0, 178, 238 };
	static const colour_t	DeepSkyBlue3{ 0, 154, 205 };
	static const colour_t	DeepSkyBlue4{ 0, 104, 139 };
	static const colour_t	DodgerBlue{ 30, 144, 255 };
	static const colour_t	DodgerBlue1{ 30, 144, 255 };
	static const colour_t	DodgerBlue2{ 28, 134, 238 };
	static const colour_t	DodgerBlue3{ 24, 116, 205 };
	static const colour_t	DodgerBlue4{ 16, 78, 139 };
	static const colour_t	LightBlue{ 173, 216, 230 };
	static const colour_t	LightBlue1{ 191, 239, 255 };
	static const colour_t	LightBlue2{ 178, 223, 238 };
	static const colour_t	LightBlue3{ 154, 192, 205 };
	static const colour_t	LightBlue4{ 104, 131, 139 };
	static const colour_t	LightCyan{ 224, 255, 255 };
	static const colour_t	LightCyan1{ 224, 255, 255 };
	static const colour_t	LightCyan2{ 209, 238, 238 };
	static const colour_t	LightCyan3{ 180, 205, 205 };
	static const colour_t	LightCyan4{ 122, 139, 139 };
	static const colour_t	LightSkyBlue{ 135, 206, 250 };
	static const colour_t	LightSkyBlue1{ 176, 226, 255 };
	static const colour_t	LightSkyBlue2{ 164, 211, 238 };
	static const colour_t	LightSkyBlue3{ 141, 182, 205 };
	static const colour_t	LightSkyBlue4{ 96, 123, 139 };
	static const colour_t	LightSlateBlue{ 132, 112, 255 };
	static const colour_t	LightSteelBlue{ 176, 196, 222 };
	static const colour_t	LightSteelBlue1{ 202, 225, 255 };
	static const colour_t	LightSteelBlue2{ 188, 210, 238 };
	static const colour_t	LightSteelBlue3{ 162, 181, 205 };
	static const colour_t	LightSteelBlue4{ 110, 123, 139 };
	static const colour_t	Aquamarine{ 112, 219, 147 };
	static const colour_t	MediumBlue{ 0, 0, 205 };
	static const colour_t	MediumSlateBlue{ 123, 104, 238 };
	static const colour_t	MediumTurquoise{ 72, 209, 204 };
	static const colour_t	MidnightBlue{ 25, 25, 112 };
	static const colour_t	NavyBlue{ 0, 0, 128 };
	static const colour_t	PaleTurquoise{ 175, 238, 238 };
	static const colour_t	PaleTurquoise1{ 187, 255, 255 };
	static const colour_t	PaleTurquoise2{ 174, 238, 238 };
	static const colour_t	PaleTurquoise3{ 150, 205, 205 };
	static const colour_t	PaleTurquoise4{ 102, 139, 139 };
	static const colour_t	PowderBlue{ 176, 224, 230 };
	static const colour_t	RoyalBlue{ 65, 105, 225 };
	static const colour_t	RoyalBlue1{ 72, 118, 255 };
	static const colour_t	RoyalBlue2{ 67, 110, 238 };
	static const colour_t	RoyalBlue3{ 58, 95, 205 };
	static const colour_t	RoyalBlue4{ 39, 64, 139 };
	static const colour_t	RoyalBlue5{ 0, 34, 102 };
	static const colour_t	SkyBlue{ 135, 206, 235 };
	static const colour_t	SkyBlue1{ 135, 206, 255 };
	static const colour_t	SkyBlue2{ 126, 192, 238 };
	static const colour_t	SkyBlue3{ 108, 166, 205 };
	static const colour_t	SkyBlue4{ 74, 112, 139 };
	static const colour_t	SlateBlue{ 106, 90, 205 };
	static const colour_t	SlateBlue1{ 131, 111, 255 };
	static const colour_t	SlateBlue2{ 122, 103, 238 };
	static const colour_t	SlateBlue3{ 105, 89, 205 };
	static const colour_t	SlateBlue4{ 71, 60, 139 };
	static const colour_t	SteelBlue{ 70, 130, 180 };
	static const colour_t	SteelBlue1{ 99, 184, 255 };
	static const colour_t	SteelBlue2{ 92, 172, 238 };
	static const colour_t	SteelBlue3{ 79, 148, 205 };
	static const colour_t	SteelBlue4{ 54, 100, 139 };
	static const colour_t	aquamarine{ 127, 255, 212 };
	static const colour_t	aquamarine1{ 127, 255, 212 };
	static const colour_t	aquamarine2{ 118, 238, 198 };
	static const colour_t	aquamarine3{ 102, 205, 170 };
	static const colour_t	MediumAquamarine{ 102, 205, 170 };
	static const colour_t	aquamarine4{ 69, 139, 116 };
	static const colour_t	azure{ 240, 255, 255 };
	static const colour_t	azure1{ 240, 255, 255 };
	static const colour_t	azure2{ 224, 238, 238 };
	static const colour_t	azure3{ 193, 205, 205 };
	static const colour_t	azure4{ 131, 139, 139 };
	static const colour_t	blue{ 0, 0, 255 };
	static const colour_t	blue1{ 0, 0, 255 };
	static const colour_t	blue2{ 0, 0, 238 };
	static const colour_t	blue3{ 0, 0, 205 };
	static const colour_t	blue4{ 0, 0, 139 };
	static const colour_t	aqua{ 0, 255, 255 };
	static const colour_t	TrueIrisBlue{ 3, 180, 204 };
	static const colour_t	cyan{ 0, 255, 255 };
	static const colour_t	cyan1{ 0, 255, 255 };
	static const colour_t	cyan2{ 0, 238, 238 };
	static const colour_t	cyan3{ 0, 205, 205 };
	static const colour_t	cyan4{ 0, 139, 139 };
	static const colour_t	navy{ 0, 0, 128 };
	static const colour_t	teal{ 0, 128, 128 };
	static const colour_t	turquoise{ 64, 224, 208 };
	static const colour_t	turquoise1{ 0, 245, 255 };
	static const colour_t	turquoise2{ 0, 229, 238 };
	static const colour_t	turquoise3{ 0, 197, 205 };
	static const colour_t	turquoise4{ 0, 134, 139 };
	static const colour_t	DarkSlateGray{ 47, 79, 79 };
	static const colour_t	DarkSlateGray1{ 151, 255, 255 };
	static const colour_t	DarkSlateGray2{ 141, 238, 238 };
	static const colour_t	DarkSlateGray3{ 121, 205, 205 };
	static const colour_t	DarkSlateGray4{ 82, 139, 139 };
	//static const wxColour	DarkSlateBlue{ 36, 24, 130 };
	//static const wxColour	DarkTurquoise{ 112, 147, 219 };
	//static const wxColour	MediumSlateBlue{ 127, 0, 255 };
	//static const wxColour	MediumTurquoise{ 112, 219, 219 };
	//static const wxColour	MidnightBlue{ 47, 47, 79 };
	//static const wxColour	NavyBlue{ 35, 35, 142 };
	static const colour_t	NeonBlue{ 77, 77, 255 };
	static const colour_t	NewMidnightBlue{ 0, 0, 156 };
	static const colour_t	RichBlue{ 89, 89, 171 };
	//static const wxColour	SkyBlue{ 50, 153, 204 };
	//static const wxColour	SlateBlue{ 0, 127, 255 };
	static const colour_t	SummerSky{ 56, 176, 222 };
	static const colour_t	IrisBlue{ 3, 180, 200 };
	static const colour_t	FreeSpeechBlue{ 65, 86, 197 };
	static const colour_t	RosyBrown{ 188, 143, 143 };
	static const colour_t	RosyBrown1{ 255, 193, 193 };
	static const colour_t	RosyBrown2{ 238, 180, 180 };
	static const colour_t	RosyBrown3{ 205, 155, 155 };
	static const colour_t	RosyBrown4{ 139, 105, 105 };
	static const colour_t	SaddleBrown{ 139, 69, 19 };
	static const colour_t	SandyBrown{ 244, 164, 96 };
	static const colour_t	beige{ 245, 245, 220 };
	static const colour_t	brown{ 165, 42, 42 };
	//static const wxColour	brown{ 166, 42, 42 };
	static const colour_t	brown1{ 255, 64, 64 };
	static const colour_t	brown2{ 238, 59, 59 };
	static const colour_t	brown3{ 205, 51, 51 };
	static const colour_t	brown4{ 139, 35, 35 };
	static const colour_t	darkbrown{ 92, 64, 51 };
	static const colour_t	burlywood{ 222, 184, 135 };
	static const colour_t	burlywood1{ 255, 211, 155 };
	static const colour_t	burlywood2{ 238, 197, 145 };
	static const colour_t	burlywood3{ 205, 170, 125 };
	static const colour_t	burlywood4{ 139, 115, 85 };
	static const colour_t	bakerschocolate{ 92, 51, 23 };
	static const colour_t	chocolate{ 210, 105, 30 };
	static const colour_t	chocolate1{ 255, 127, 36 };
	static const colour_t	chocolate2{ 238, 118, 33 };
	static const colour_t	chocolate3{ 205, 102, 29 };
	static const colour_t	chocolate4{ 139, 69, 19 };
	static const colour_t	peru{ 205, 133, 63 };
	static const colour_t	tan{ 210, 180, 140 };
	static const colour_t	tan1{ 255, 165, 79 };
	static const colour_t	tan2{ 238, 154, 73 };
	static const colour_t	tan3{ 205, 133, 63 };
	static const colour_t	tan4{ 139, 90, 43 };
	static const colour_t	DarkTan{ 151, 105, 79 };
	static const colour_t	DarkWood{ 133, 94, 66 };
	static const colour_t	LightWood{ 133, 99, 99 };
	static const colour_t	MediumWood{ 166, 128, 100 };
	static const colour_t	NewTan{ 235, 199, 158 };
	static const colour_t	SemiSweetChocolate{ 107, 66, 38 };
	static const colour_t	Sienna{ 142, 107, 35 };
	static const colour_t	Tan{ 219, 147, 112 };
	static const colour_t	DarkGreen{ 47, 79, 47 };
	static const colour_t	darkgreencopper{ 74, 118, 110 };
	static const colour_t	DarkKhaki{ 189, 183, 107 };
	static const colour_t	DarkOliveGreen{ 85, 107, 47 };
	static const colour_t	DarkOliveGreen1{ 202, 255, 112 };
	static const colour_t	DarkOliveGreen2{ 188, 238, 104 };
	static const colour_t	DarkOliveGreen3{ 162, 205, 90 };
	static const colour_t	DarkOliveGreen4{ 110, 139, 61 };
	static const colour_t	olive{ 128, 128, 0 };
	static const colour_t	DarkSeaGreen{ 143, 188, 143 };
	static const colour_t	DarkSeaGreen1{ 193, 255, 193 };
	static const colour_t	DarkSeaGreen2{ 180, 238, 180 };
	static const colour_t	DarkSeaGreen3{ 155, 205, 155 };
	static const colour_t	DarkSeaGreen4{ 105, 139, 105 };
	static const colour_t	ForestGreen{ 34, 139, 34 };
	static const colour_t	GreenYellow{ 173, 255, 47 };
	static const colour_t	LawnGreen{ 124, 252, 0 };
	static const colour_t	LightSeaGreen{ 32, 178, 170 };
	static const colour_t	LimeGreen{ 50, 205, 50 };
	static const colour_t	MediumSeaGreen{ 60, 179, 113 };
	static const colour_t	MediumSpringGreen{ 0, 250, 154 };
	static const colour_t	MintCream{ 245, 255, 250 };
	static const colour_t	OliveDrab{ 107, 142, 35 };
	static const colour_t	OliveDrab1{ 192, 255, 62 };
	static const colour_t	OliveDrab2{ 179, 238, 58 };
	static const colour_t	OliveDrab3{ 154, 205, 50 };
	static const colour_t	OliveDrab4{ 105, 139, 34 };
	static const colour_t	PaleGreen{ 152, 251, 152 };
	static const colour_t	PaleGreen1{ 154, 255, 154 };
	static const colour_t	PaleGreen2{ 144, 238, 144 };
	static const colour_t	PaleGreen3{ 124, 205, 124 };
	static const colour_t	PaleGreen4{ 84, 139, 84 };
	static const colour_t	SeaGreen{ 46, 139, 87 };
	static const colour_t	SeaGreen4{ 46, 139, 87 };
	static const colour_t	SeaGreen1{ 84, 255, 159 };
	static const colour_t	SeaGreen2{ 78, 238, 148 };
	static const colour_t	SeaGreen3{ 67, 205, 128 };
	static const colour_t	SpringGreen{ 0, 255, 127 };
	static const colour_t	SpringGreen1{ 0, 255, 127 };
	static const colour_t	SpringGreen2{ 0, 238, 118 };
	static const colour_t	SpringGreen3{ 0, 205, 102 };
	static const colour_t	SpringGreen4{ 0, 139, 69 };
	static const colour_t	YellowGreen{ 154, 205, 50 };
	static const colour_t	chartreuse{ 127, 255, 0 };
	static const colour_t	chartreuse1{ 127, 255, 0 };
	static const colour_t	chartreuse2{ 118, 238, 0 };
	static const colour_t	chartreuse3{ 102, 205, 0 };
	static const colour_t	chartreuse4{ 69, 139, 0 };
	static const colour_t	green{ 0, 255, 0 };
	//static const wxColour	green{ 0, 128, 0 };
	static const colour_t	lime{ 0, 255, 0 };
	static const colour_t	green1{ 0, 255, 0 };
	static const colour_t	green2{ 0, 238, 0 };
	static const colour_t	green3{ 0, 205, 0 };
	static const colour_t	green4{ 0, 139, 0 };
	static const colour_t	khaki{ 240, 230, 140 };
	static const colour_t	khaki1{ 255, 246, 143 };
	static const colour_t	khaki2{ 238, 230, 133 };
	static const colour_t	khaki3{ 205, 198, 115 };
	static const colour_t	khaki4{ 139, 134, 78 };
	//static const wxColour	DarkOliveGreen{ 79, 79, 47 };
	//static const wxColour	GreenYellow{ 209, 146, 117 };
	static const colour_t	HunterGreen{ 142, 35, 35 };
	//static const wxColour	ForestGreen{ 35, 142, 35 };
	static const colour_t	Khaki{ 35, 142, 35 };
	//static const wxColour	MediumAquamarine{ 35, 142, 35 };
	static const colour_t	MediumForestGreen{ 219, 219, 112 };
	//static const wxColour	MediumSeaGreen{ 66, 111, 66 };
	//static const wxColour	MediumSpringGreen{ 127, 255, 0 };
	//static const wxColour	PaleGreen{ 143, 188, 143 };
	//static const wxColour	SeaGreen{ 35, 142, 104 };
	//static const wxColour	SpringGreen{ 0, 255, 127 };
	static const colour_t	FreeSpeechGreen{ 9, 249, 17 };
	static const colour_t	FreeSpeechAquamarine{ 2, 157, 116 };
	static const colour_t	DarkOrange{ 255, 140, 0 };
	static const colour_t	DarkOrange1{ 255, 127, 0 };
	static const colour_t	DarkOrange2{ 238, 118, 0 };
	static const colour_t	DarkOrange3{ 205, 102, 0 };
	static const colour_t	DarkOrange4{ 139, 69, 0 };
	static const colour_t	DarkSalmon{ 233, 150, 122 };
	static const colour_t	LightCoral{ 240, 128, 128 };
	static const colour_t	LightSalmon{ 255, 160, 122 };
	static const colour_t	LightSalmon1{ 255, 160, 122 };
	static const colour_t	LightSalmon2{ 238, 149, 114 };
	static const colour_t	LightSalmon3{ 205, 129, 98 };
	static const colour_t	LightSalmon4{ 139, 87, 66 };
	static const colour_t	PeachPuff{ 255, 218, 185 };
	static const colour_t	PeachPuff1{ 255, 218, 185 };
	static const colour_t	PeachPuff2{ 238, 203, 173 };
	static const colour_t	PeachPuff3{ 205, 175, 149 };
	static const colour_t	PeachPuff4{ 139, 119, 101 };
	static const colour_t	bisque{ 255, 228, 196 };
	static const colour_t	bisque1{ 255, 228, 196 };
	static const colour_t	bisque2{ 238, 213, 183 };
	static const colour_t	bisque3{ 205, 183, 158 };
	static const colour_t	bisque4{ 139, 125, 107 };
	static const colour_t	coral{ 255, 127, 0 };
	//static const wxColour	coral{ 255, 127, 80 };
	static const colour_t	coral1{ 255, 114, 86 };
	static const colour_t	coral2{ 238, 106, 80 };
	static const colour_t	coral3{ 205, 91, 69 };
	static const colour_t	coral4{ 139, 62, 47 };
	static const colour_t	honeydew{ 240, 255, 240 };
	static const colour_t	honeydew1{ 240, 255, 240 };
	static const colour_t	honeydew2{ 224, 238, 224 };
	static const colour_t	honeydew3{ 193, 205, 193 };
	static const colour_t	honeydew4{ 131, 139, 131 };
	static const colour_t	orange{ 255, 165, 0 };
	static const colour_t	orange1{ 255, 165, 0 };
	static const colour_t	orange2{ 238, 154, 0 };
	static const colour_t	orange3{ 205, 133, 0 };
	static const colour_t	orange4{ 139, 90, 0 };
	static const colour_t	salmon{ 250, 128, 114 };
	static const colour_t	salmon1{ 255, 140, 105 };
	static const colour_t	salmon2{ 238, 130, 98 };
	static const colour_t	salmon3{ 205, 112, 84 };
	static const colour_t	salmon4{ 139, 76, 57 };
	static const colour_t	sienna{ 160, 82, 45 };
	static const colour_t	sienna1{ 255, 130, 71 };
	static const colour_t	sienna2{ 238, 121, 66 };
	static const colour_t	sienna3{ 205, 104, 57 };
	static const colour_t	sienna4{ 139, 71, 38 };
	static const colour_t	MandarianOrange{ 142, 35, 35 };
	static const colour_t	Orange{ 255, 127, 0 };
	static const colour_t	OrangeRed{ 255, 36, 0 };
	static const colour_t	DeepPink{ 255, 20, 147 };
	static const colour_t	DeepPink1{ 255, 20, 147 };
	static const colour_t	DeepPink2{ 238, 18, 137 };
	static const colour_t	DeepPink3{ 205, 16, 118 };
	static const colour_t	DeepPink4{ 139, 10, 80 };
	static const colour_t	HotPink{ 255, 105, 180 };
	static const colour_t	HotPink1{ 255, 110, 180 };
	static const colour_t	HotPink2{ 238, 106, 167 };
	static const colour_t	HotPink3{ 205, 96, 144 };
	static const colour_t	HotPink4{ 139, 58, 98 };
	static const colour_t	IndianRed{ 205, 92, 92 };
	static const colour_t	IndianRed1{ 255, 106, 106 };
	static const colour_t	IndianRed2{ 238, 99, 99 };
	static const colour_t	IndianRed3{ 205, 85, 85 };
	static const colour_t	IndianRed4{ 139, 58, 58 };
	static const colour_t	LightPink{ 255, 182, 193 };
	static const colour_t	LightPink1{ 255, 174, 185 };
	static const colour_t	LightPink2{ 238, 162, 173 };
	static const colour_t	LightPink3{ 205, 140, 149 };
	static const colour_t	LightPink4{ 139, 95, 101 };
	static const colour_t	MediumVioletRed{ 199, 21, 133 };
	static const colour_t	MistyRose{ 255, 228, 225 };
	static const colour_t	MistyRose1{ 255, 228, 225 };
	static const colour_t	MistyRose2{ 238, 213, 210 };
	static const colour_t	MistyRose3{ 205, 183, 181 };
	static const colour_t	MistyRose4{ 139, 125, 123 };
	//static const wxColour	OrangeRed{ 255, 69, 0 };
	static const colour_t	OrangeRed1{ 255, 69, 0 };
	static const colour_t	OrangeRed2{ 238, 64, 0 };
	static const colour_t	OrangeRed3{ 205, 55, 0 };
	static const colour_t	OrangeRed4{ 139, 37, 0 };
	static const colour_t	PaleVioletRed{ 219, 112, 147 };
	static const colour_t	PaleVioletRed1{ 255, 130, 171 };
	static const colour_t	PaleVioletRed2{ 238, 121, 159 };
	static const colour_t	PaleVioletRed3{ 205, 104, 137 };
	static const colour_t	PaleVioletRed4{ 139, 71, 93 };
	static const colour_t	VioletRed{ 208, 32, 144 };
	static const colour_t	VioletRed1{ 255, 62, 150 };
	static const colour_t	VioletRed2{ 238, 58, 140 };
	static const colour_t	VioletRed3{ 205, 50, 120 };
	static const colour_t	VioletRed4{ 139, 34, 82 };
	static const colour_t	firebrick{ 178, 34, 34 };
	static const colour_t	firebrick1{ 255, 48, 48 };
	static const colour_t	firebrick2{ 238, 44, 44 };
	static const colour_t	firebrick3{ 205, 38, 38 };
	static const colour_t	firebrick4{ 139, 26, 26 };
	static const colour_t	pink{ 255, 192, 203 };
	static const colour_t	pink1{ 255, 181, 197 };
	static const colour_t	pink2{ 238, 169, 184 };
	static const colour_t	pink3{ 205, 145, 158 };
	static const colour_t	pink4{ 139, 99, 108 };
	static const colour_t	Flesh{ 245, 204, 176 };
	static const colour_t	Feldspar{ 209, 146, 117 };
	static const colour_t	red{ 255, 0, 0 };
	static const colour_t	red1{ 255, 0, 0 };
	static const colour_t	red2{ 238, 0, 0 };
	static const colour_t	red3{ 205, 0, 0 };
	static const colour_t	red4{ 139, 0, 0 };
	static const colour_t	tomato{ 255, 99, 71 };
	static const colour_t	tomato1{ 255, 99, 71 };
	static const colour_t	tomato2{ 238, 92, 66 };
	static const colour_t	tomato3{ 205, 79, 57 };
	static const colour_t	tomato4{ 139, 54, 38 };
	static const colour_t	DustyRose{ 133, 99, 99 };
	static const colour_t	Firebrick{ 142, 35, 35 };
	//static const wxColour	IndianRed{ 245, 204, 176 };
	static const colour_t	Pink{ 188, 143, 143 };
	static const colour_t	Salmon{ 111, 66, 66 };
	static const colour_t	Scarlet{ 140, 23, 23 };
	static const colour_t	SpicyPink{ 255, 28, 174 };
	static const colour_t	FreeSpeechMagenta{ 227, 91, 216 };
	static const colour_t	FreeSpeechRed{ 192, 0, 0 };
	static const colour_t	DarkOrchid{ 153, 50, 204 };
	static const colour_t	DarkOrchid1{ 191, 62, 255 };
	static const colour_t	DarkOrchid2{ 178, 58, 238 };
	static const colour_t	DarkOrchid3{ 154, 50, 205 };
	static const colour_t	DarkOrchid4{ 104, 34, 139 };
	static const colour_t	DarkViolet{ 148, 0, 211 };
	static const colour_t	LavenderBlush{ 255, 240, 245 };
	static const colour_t	LavenderBlush1{ 255, 240, 245 };
	static const colour_t	LavenderBlush2{ 238, 224, 229 };
	static const colour_t	LavenderBlush3{ 205, 193, 197 };
	static const colour_t	LavenderBlush4{ 139, 131, 134 };
	static const colour_t	MediumOrchid{ 186, 85, 211 };
	static const colour_t	MediumOrchid1{ 224, 102, 255 };
	static const colour_t	MediumOrchid2{ 209, 95, 238 };
	static const colour_t	MediumOrchid3{ 180, 82, 205 };
	static const colour_t	MediumOrchid4{ 122, 55, 139 };
	static const colour_t	MediumPurple{ 147, 112, 219 };
	//static const wxColour	MediumOrchid{ 147, 112, 219 };
	static const colour_t	MediumPurple1{ 171, 130, 255 };
	//static const wxColour	DarkOrchid{ 153, 50, 205 };
	static const colour_t	MediumPurple2{ 159, 121, 238 };
	static const colour_t	MediumPurple3{ 137, 104, 205 };
	static const colour_t	MediumPurple4{ 93, 71, 139 };
	static const colour_t	lavender{ 230, 230, 250 };
	static const colour_t	magenta{ 255, 0, 255 };
	static const colour_t	fuchsia{ 255, 0, 255 };
	static const colour_t	magenta1{ 255, 0, 255 };
	static const colour_t	magenta2{ 238, 0, 238 };
	static const colour_t	magenta3{ 205, 0, 205 };
	static const colour_t	magenta4{ 139, 0, 139 };
	static const colour_t	maroon{ 176, 48, 96 };
	static const colour_t	maroon1{ 255, 52, 179 };
	static const colour_t	maroon2{ 238, 48, 167 };
	static const colour_t	maroon3{ 205, 41, 144 };
	static const colour_t	maroon4{ 139, 28, 98 };
	static const colour_t	orchid{ 218, 112, 214 };
	static const colour_t	Orchid{ 219, 112, 219 };
	static const colour_t	orchid1{ 255, 131, 250 };
	static const colour_t	orchid2{ 238, 122, 233 };
	static const colour_t	orchid3{ 205, 105, 201 };
	static const colour_t	orchid4{ 139, 71, 137 };
	static const colour_t	plum{ 221, 160, 221 };
	static const colour_t	plum1{ 255, 187, 255 };
	static const colour_t	plum2{ 238, 174, 238 };
	static const colour_t	plum3{ 205, 150, 205 };
	static const colour_t	plum4{ 139, 102, 139 };
	static const colour_t	purple{ 160, 32, 240 };
	//static const wxColour	purple{ 128, 0, 128 };
	static const colour_t	purple1{ 155, 48, 255 };
	static const colour_t	purple2{ 145, 44, 238 };
	static const colour_t	purple3{ 125, 38, 205 };
	static const colour_t	purple4{ 85, 26, 139 };
	static const colour_t	thistle{ 216, 191, 216 };
	static const colour_t	thistle1{ 255, 225, 255 };
	static const colour_t	thistle2{ 238, 210, 238 };
	static const colour_t	thistle3{ 205, 181, 205 };
	static const colour_t	thistle4{ 139, 123, 139 };
	static const colour_t	violet{ 238, 130, 238 };
	static const colour_t	violetblue{ 159, 95, 159 };
	static const colour_t	DarkPurple{ 135, 31, 120 };
	static const colour_t	Maroon{ 128, 0, 0 };
	//static const wxColour	MediumVioletRed{ 219, 112, 147 };
	static const colour_t	NeonPink{ 255, 110, 199 };
	static const colour_t	Plum{ 234, 173, 234 };
	static const colour_t	Thistle{ 216, 191, 216 };
	static const colour_t	Turquoise{ 173, 234, 234 };
	static const colour_t	Violet{ 79, 47, 79 };
	//static const wxColour	VioletRed{ 204, 50, 153 };
	static const colour_t	AntiqueWhite{ 250, 235, 215 };
	static const colour_t	AntiqueWhite1{ 255, 239, 219 };
	static const colour_t	AntiqueWhite2{ 238, 223, 204 };
	static const colour_t	AntiqueWhite3{ 205, 192, 176 };
	static const colour_t	AntiqueWhite4{ 139, 131, 120 };
	static const colour_t	FloralWhite{ 255, 250, 240 };
	static const colour_t	GhostWhite{ 248, 248, 255 };
	static const colour_t	NavajoWhite{ 255, 222, 173 };
	static const colour_t	NavajoWhite1{ 255, 222, 173 };
	static const colour_t	NavajoWhite2{ 238, 207, 161 };
	static const colour_t	NavajoWhite3{ 205, 179, 139 };
	static const colour_t	NavajoWhite4{ 139, 121, 94 };
	static const colour_t	OldLace{ 253, 245, 230 };
	static const colour_t	WhiteSmoke{ 245, 245, 245 };
	static const colour_t	gainsboro{ 220, 220, 220 };
	static const colour_t	ivory{ 255, 255, 240 };
	static const colour_t	ivory1{ 255, 255, 240 };
	static const colour_t	ivory2{ 238, 238, 224 };
	static const colour_t	ivory3{ 205, 205, 193 };
	static const colour_t	ivory4{ 139, 139, 131 };
	static const colour_t	linen{ 250, 240, 230 };
	static const colour_t	seashell{ 255, 245, 238 };
	static const colour_t	seashell1{ 255, 245, 238 };
	static const colour_t	seashell2{ 238, 229, 222 };
	static const colour_t	seashell3{ 205, 197, 191 };
	static const colour_t	seashell4{ 139, 134, 130 };
	static const colour_t	snow{ 255, 250, 250 };
	static const colour_t	snow1{ 255, 250, 250 };
	static const colour_t	snow2{ 238, 233, 233 };
	static const colour_t	snow3{ 205, 201, 201 };
	static const colour_t	snow4{ 139, 137, 137 };
	static const colour_t	wheat{ 245, 222, 179 };
	static const colour_t	wheat1{ 255, 231, 186 };
	static const colour_t	wheat2{ 238, 216, 174 };
	static const colour_t	wheat3{ 205, 186, 150 };
	static const colour_t	wheat4{ 139, 126, 102 };
	static const colour_t	white{ 255, 255, 255 };
	static const colour_t	Quartz{ 217, 217, 243 };
	static const colour_t	Wheat{ 216, 216, 191 };
	static const colour_t	BlanchedAlmond{ 255, 235, 205 };
	static const colour_t	DarkGoldenrod{ 184, 134, 11 };
	static const colour_t	DarkGoldenrod1{ 255, 185, 15 };
	static const colour_t	DarkGoldenrod2{ 238, 173, 14 };
	static const colour_t	DarkGoldenrod3{ 205, 149, 12 };
	static const colour_t	DarkGoldenrod4{ 139, 101, 8 };
	static const colour_t	LemonChiffon{ 255, 250, 205 };
	static const colour_t	LemonChiffon1{ 255, 250, 205 };
	static const colour_t	LemonChiffon2{ 238, 233, 191 };
	static const colour_t	LemonChiffon3{ 205, 201, 165 };
	static const colour_t	LemonChiffon4{ 139, 137, 112 };
	static const colour_t	LightGoldenrod{ 238, 221, 130 };
	static const colour_t	LightGoldenrod1{ 255, 236, 139 };
	static const colour_t	LightGoldenrod2{ 238, 220, 130 };
	static const colour_t	LightGoldenrod3{ 205, 190, 112 };
	static const colour_t	LightGoldenrod4{ 139, 129, 76 };
	static const colour_t	LightGoldenrodYellow{ 250, 250, 210 };
	static const colour_t	LightYellow{ 255, 255, 224 };
	static const colour_t	LightYellow1{ 255, 255, 224 };
	static const colour_t	LightYellow2{ 238, 238, 209 };
	static const colour_t	LightYellow3{ 205, 205, 180 };
	static const colour_t	LightYellow4{ 139, 139, 122 };
	static const colour_t	PaleGoldenrod{ 238, 232, 170 };
	static const colour_t	PapayaWhip{ 255, 239, 213 };
	static const colour_t	cornsilk{ 255, 248, 220 };
	static const colour_t	cornsilk1{ 255, 248, 220 };
	static const colour_t	cornsilk2{ 238, 232, 205 };
	static const colour_t	cornsilk3{ 205, 200, 177 };
	static const colour_t	cornsilk4{ 139, 136, 120 };
	static const colour_t	goldenrod{ 218, 165, 32 };
	static const colour_t	goldenrod1{ 255, 193, 37 };
	static const colour_t	goldenrod2{ 238, 180, 34 };
	static const colour_t	goldenrod3{ 205, 155, 29 };
	static const colour_t	goldenrod4{ 139, 105, 20 };
	static const colour_t	moccasin{ 255, 228, 181 };
	static const colour_t	yellow{ 255, 255, 0 };
	static const colour_t	yellow1{ 255, 255, 0 };
	static const colour_t	yellow2{ 238, 238, 0 };
	static const colour_t	yellow3{ 205, 205, 0 };
	static const colour_t	yellow4{ 139, 139, 0 };
	static const colour_t	gold{ 255, 215, 0 };
	static const colour_t	gold1{ 255, 215, 0 };
	static const colour_t	gold2{ 238, 201, 0 };
	static const colour_t	gold3{ 205, 173, 0 };
	static const colour_t	gold4{ 139, 117, 0 };
	static const colour_t	Goldenrod{ 219, 219, 112 };
	static const colour_t	MediumGoldenrod{ 234, 234, 174 };
	//static const wxColour	YellowGreen{ 153, 204, 50 };

}
