#include <Neuron.hpp>

#include <Synapse.hpp>

namespace Dagal
{
	Synapse::Synapse()
	{
	}

	Synapse::~Synapse()
	{
	}

	Neuron* Synapse::getSource()
	{
		return mSource;
	}

	Neuron* Synapse::getDestination()
	{
		return mDestination;
	}

	double Synapse::valxpoid()
	{
		return getSource()->getValeur() * mPoid;
	}
}
