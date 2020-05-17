#ifndef IRIFITNESSFUNCTION_H_
#define IRIFITNESSFUNCTION_H_

/******************************************************************************/
/******************************************************************************/

#include <math.h>
#include <vector>
#include <list>
#include "general.h"
using namespace std;

class CIriFitnessFunction;

#include "fitnessfunction.h"
#include "simulator.h"
#include "sensor.h"
#include "batterysensor.h"
#include "bluebatterysensor.h"
#include "redbatterysensor.h"
#include "groundsensor.h"
#include "groundmemorysensor.h"
#include "lightsensor.h"
#include "bluelightsensor.h"
#include "redlightsensor.h"
#include "contactsensor.h"

/******************************************************************************/
/******************************************************************************/

class CIriFitnessFunction : public CFitnessFunction
{
public:
    CIriFitnessFunction(const char* pch_name, CSimulator* pc_simulator,
                                    unsigned int un_collisions_allowed_per_epuck);
		~CIriFitnessFunction();
    virtual double GetFitness();
		virtual void SimulationStep(unsigned int n_simulation_step, double f_time, double f_step_interval);

protected:
		unsigned int m_unNumberOfSteps;
		double 	m_fComputedFitness;
		CEpuck* m_pcEpuck;
		CRedBatterySensor* m_seRedBattery;
		CBatterySensor* m_seBattery;
		CLightSensor* m_seLight;
		CContactSensor* m_seContact;
		CGroundSensor* m_seGround;
		CGroundMemorySensor* m_seGroundMemory;   
		CBlueLightSensor* m_seBlueLight;
		unsigned int m_unBlueLightFlag;
		unsigned int m_unRedLightFlag;
   		unsigned int m_unVirtualCounter;
		
   		
};

/******************************************************************************/
/******************************************************************************/

#endif
