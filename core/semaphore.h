/*
    Copyright (C) 2016, Jaguar Land Rover. All Rights Reserved.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

/*!----------------------------------------------------------------------------

	@file      semaphore.h

	This file contains the declarations of the semaphore objects and member
	functions.

-----------------------------------------------------------------------------*/

#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include <pthread.h>

#include "semaphore.h"


/*! @{ */

//
//	Define the semaphore control structure.
//
typedef struct semaphore_t
{
	pthread_mutex_t mutex;
	pthread_cond_t  conditionVariable;
	int             messageCount;
	int             waiterCount;

}   semaphore_t;


//
//	Define the semaphore member functions.
//
void semaphorePost ( semaphore_t* semaphore );
void semaphoreWait ( semaphore_t* semaphore );


#endif		// End of #ifndef SEMAPHORE_H

/*! @} */

// vim:filetype=h:syntax=c
