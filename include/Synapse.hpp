#ifndef __SYNAPSE_HPP__
#define __SYNAPSE_HPP__

namespace Dagal
{
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
	}
}

#endif //__SYNAPSE_HPP__

