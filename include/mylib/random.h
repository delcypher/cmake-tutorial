// Prevent multiple inclusions
#ifndef MYLIB_H
#define MYLIB_H

// Let's put our library functions in a nice namespace
/// \namespace mylib The namespace used for our project's library
namespace mylib
{

/*!
 * A "really good" random number generator.
 * Inspired by the [XKCD comic](http://xkcd.com/221/)
 *
 * \return A random number chosen by a fair dice roll
 */
int getRandomNumber();

}
#endif
