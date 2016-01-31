#include <Neuron.hpp>

using namespace Dagal;

Neuron::Neuron() :
	mValeur(0)
{
	// Donner une valeur aléatoire à la sortie
	// (discutable puisque ce sera calculé)

	// Donner une valeur aléatoire au poids
}

Neuron::~Neuron()
{
	// Il faut effacer tous les synapses en liaison avec ce neurone
}

double Neuron::calculate()
{
	// Normalement on multiplie les entrées par leur poid respectif et
	// on additionne le tout
	double retour = 0.0;
	// On boucle sur tous les synapses
	// On crée une variable locale contenant le produit
	// Ou bien on ajoute une fonction dans le synapse pour renvoyer le produit
	// On ajoute la dernière valeur au retour
	// On renvoie la valeur
	return retour;
}

double Neuron::moyenne()
{
	double retour = 0.0;
	double sommedespoids = 0.0;
	// On divise la valeur venant de calculate() par la somme des poids
	return retour;
}

bool Neuron::isActivated()
{
	bool retour = false;

	// On détecte si le neurone est actif ou non

	return retour;
}

void Neuron::propagation()
{
	// Si le neurone est actif alors on ajoute 10% à tous les synapses
	// Si le neurone est inactif alors on retire 10% à tous les synapses
}

void Neuron::update()
{

}
