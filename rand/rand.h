#ifndef RAND_H
#define RAND_H

/**
    @file rand.h

    @brief Includes functions that produce pseudo-random values

    @author Spencer Covault

*/

/**
 * Generates a random numeber
 * 
 * @param max the highest possible response that you want
 * 
 * @return random int between 0 and max
 */
int randMax(int max);

/**
 * Generates a random numeber
 * 
 * @return random int between 0 and 60
 */
int rand();

#endif
