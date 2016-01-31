#ifndef __NEURON.HPP__
#define __NEURON.HPP__

#include "Synapse.hpp"

namespace Dagal
{
	class Neuron
	{
		// Constructeurs
		Neuron();

		// Destructeur
		~Neuron();

		// On a besoin d'une liste de synapses en entrée
		std::list<Synapse*> mEntree;

		// Une sortie est nécessaire
		double mValeur;

		// Il faut également calculer la somme des produits des entrées et des poids
		double calculate();

		// Je préfère la moyenne en fonction des poids
		double moyenne();

		// Ensuite on détermine une fonction d'activation
		bool isActivated(); // Pour moi un neurone est toujours actif
		// Ce sont les synapses qui ont tendance à disparaître,
		// et pourquoi pas se multiplier.



		// Propagation des poids modifiés
		void propagation();

		// Mise à jour
		void update();
	};
}

#endif	//__NEURON.HPP__
