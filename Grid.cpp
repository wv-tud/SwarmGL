#include "Grid.h"
#include "Globals.h"

Grid::Grid(int dimensionLength): particleVector()
{
	this->initQuadrants(dimensionLength);
	this->initParticles();
}

void Grid::initQuadrants(int dimensionLength)
{
	this->quadrantVector.resize(dimensionLength);
	for(int i = 0; i < dimensionLength; i++)
	{
		this->quadrantVector[i].resize(dimensionLength);
		for(int j = 0; j < dimensionLength; j++)		
		{
			this->quadrantVector[i][j].resize(dimensionLength, new Quadrant());
		}
	}
}

void Grid::initParticles()
{
	Particle* particle;
	for (int i = 0; i < NUMBER_OF_PARTICLES; i++) 
	{
		particle = new Particle();
		this->particleVector.push_back(particle);
	}
}

Quadrant Grid::getQuadrantAt(QuadrantCoordinates quadCoordinates)
{
	return Quadrant();
}

void Grid::calculateNewParticlePositions()
{
}

void Grid::registerAndDrawParticles()
{
}

Grid::~Grid(void)
{
}


//private Methods
void Grid::generateInfluenceVectors()
{
}
