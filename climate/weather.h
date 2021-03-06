/** $Id: weather.h 1182 2009-11-03 22:08:36Z mhauer $
	Copyright (C) 2009 Battelle Memorial Institute
	@file weather.h
	@addtogroup climate
	@ingroup modules
 @{
 **/

#ifndef CLIMATE_WEATHER_
#define CLIMATE_WEATHER_

#include "gridlabd.h"

class weather {
public:
	static CLASS *oclass;

	weather();
	weather(MODULE *module);
	int create();
	TIMESTAMP sync(TIMESTAMP t0);

	double temperature; // F
	double humidity;
	double solar_dir;
	double solar_diff;
	double solar_global;
	double wind_speed;
	double rainfall;
	double snowdepth;
	int16 month, day, hour, minute, second;
	weather *next;
};

#endif

// EOF
