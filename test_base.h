/*
 * test_base.h
 *
 *  Created on: Feb 19, 2022
 *      Author: micahbly
 */

#ifndef TEST_BASE_H_
#define TEST_BASE_H_


/* about this class
 *
 * this is a single file that can be included in the main() file
 * it knows about the entry point function for all tests
 * as new test suites are created, the entry point should be added here
 * if not added, main() will not be aware of it
 *
 *** things objects of this class have
 *
 *
 */


/*****************************************************************************/
/*                                Includes                                   */
/*****************************************************************************/


/*****************************************************************************/
/*                            Macro Definitions                              */
/*****************************************************************************/



/*****************************************************************************/
/*                               Enumerations                                */
/*****************************************************************************/



/*****************************************************************************/
/*                                 Structs                                   */
/*****************************************************************************/


/*****************************************************************************/
/*                             Global Variables                              */
/*****************************************************************************/


/*****************************************************************************/
/*                       Public Function Prototypes                          */
/*****************************************************************************/


// prototypes for all starting points for all tests

int Text_RunTests(void);


#endif /* TEST_BASE_H_ */
