/* 
 * File:   statistics.h
 * Author: benjamin
 *
 * Created on October 24, 2014, 11:38 AM
 */

#ifndef STATISTICS_H
#define	STATISTICS_H

#ifdef	__cplusplus
extern "C" {
#endif

    struct statistics {
        double start_time;
        double elapsed_time;
    };
    struct statistics statistics;

#ifdef	__cplusplus
}
#endif

#endif	/* STATISTICS_H */

