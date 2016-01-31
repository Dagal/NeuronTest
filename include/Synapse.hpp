#ifndef __SYNAPSE_HPP__
#define __SYNAPSE_HPP__

//#include "Neuron.hpp"

namespace Dagal
{
	class Neuron;

	class Synapse
	{
		Synapse();
		~Synapse();

		Neuron* mSource;
		Neuron* mDestination;
		double mPoid;

		Neuron* getSource();
		Neuron* getDestination();

		double valxpoid();
	};
}

#endif //__SYNAPSE_HPP__

