#pragma once
#include "Quadrant.h"
#include "Particle.h"
#include <vector>

using namespace std;

class Grid
{
private:
	vector<vector<vector<Quadrant*>>> quadrantVector;
	vector<Particle> particleVector;
	void Grid::initQuadrants(int dimensionLength);
public:
	Grid(int dimensionLength);
	Quadrant getQuadrantAt(QuadrantCoordinates quadCoordinates);
	void calculateNewParticlePositions();
	void registerAndDrawParticles();
	~Grid(void);
private:
	void generateInfluenceVectors();
};

