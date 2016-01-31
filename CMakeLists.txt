# Version de cmake minimum
cmake_minimum_required (VERSION 2.6)

# Nom du projet
project (NeuronTest)

# Répertoire de création des binaires
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

# Version du projet
set (NeuronTest_VERSION_MAJOR 0)
set (NeuronTest_VERSION_MINOR 1)

# Création des listes de fichiers sources
file(
	GLOB_RECURSE
	source_files
	src/*
	)

file(
	GLOB_RECURSE
	include_files
	include/*
	)

# Configuration d'un fichier d'entête pour passer
# quelques valeurs aux codes sources

configure_file (
	"config/NeuronTestConfig.h.in"
	"${PROJECT_BINARY_DIR}/NeuronTestConfig.h"
	)

# Ajout du répertoire pour retrouver le fichier d'entête ci dessus
include_directories("${PROJECT_BINARY_DIR}")

# Il ne faut pas oublier d'ajouter le répertoire include à la liste
include_directories("include")

# On ajoute le nom de l'exécutable ainsi que le fichier principal
add_executable(
	NeuronTest
	${source_files}
	${include_files}
	)

# 
