#include "Random.hpp"

#include "../System/Time.hpp"

namespace nu
{

RandomEngine::RandomEngine()
{
	setSeed(U32(Time::now().asMilliseconds()));
}

RandomEngine::RandomEngine(U32 seed)
{
	setSeed(seed);
}

bool RandomEngine::getBool()
{
	return false;
}

void RandomEngine::setSeed(U32 seed)
{
	mSeed = seed;
	mGenerator.seed(seed);
}

U32 RandomEngine::getSeed() const
{
	return mSeed;
}

std::mt19937& RandomEngine::getGenerator()
{
	return mGenerator;
}

RandomEngine Random::priv::getRandomEngine()
{
	static RandomEngine randomEngine;
	return randomEngine;
}

bool Random::getBool()
{
	return priv::getRandomEngine().getBool();
}

} // namespace nu
