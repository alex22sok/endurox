/**
 * @brief Debug commons
 *
 * @file ndebugcmn.h
 */
/* -----------------------------------------------------------------------------
 * Enduro/X Middleware Platform for Distributed Transaction Processing
 * Copyright (C) 2009-2016, ATR Baltic, Ltd. All Rights Reserved.
 * Copyright (C) 2017-2019, Mavimax, Ltd. All Rights Reserved.
 * This software is released under one of the following licenses:
 * AGPL (with Java and Go exceptions) or Mavimax's license for commercial use.
 * See LICENSE file for full text.
 * -----------------------------------------------------------------------------
 * AGPL license:
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License, version 3 as published
 * by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU Affero General Public License, version 3
 * for more details.
 *
 * You should have received a copy of the GNU Affero General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * -----------------------------------------------------------------------------
 * A commercial use license is available from Mavimax, Ltd
 * contact@mavimax.com
 * -----------------------------------------------------------------------------
 */
#ifndef NDEBUGCMN_H
#define	NDEBUGCMN_H

#ifdef	__cplusplus
extern "C" {
#endif
/*---------------------------Includes-----------------------------------*/
#include <ndrx_config.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/*---------------------------Externs------------------------------------*/
/*---------------------------Macros-------------------------------------*/
#define NDRX_LOG_MODULE_LEN     4   /**< Module name field length       */
/*---------------------------Enums--------------------------------------*/
/*---------------------------Typedefs-----------------------------------*/

/*
 * Early logs written to memory
 */
typedef struct ndrx_memlogger ndrx_memlogger_t;
struct ndrx_memlogger
{
    int level;
    char line[PATH_MAX+1];
    ndrx_memlogger_t *next, *prev;
};

/* Create main debug structure */
typedef struct
{
    int   level;
    FILE *dbg_f_ptr;
    char filename[PATH_MAX];
    char filename_th_template[PATH_MAX]; /* template for thread logging... */
    pid_t pid;
    /** Hashed hostname */
    unsigned long hostnamecrc32;
    int buf_lines; 
    int buffer_size;
    int lines_written;      
    char module[NDRX_LOG_MODULE_LEN+1]; /**< 4 symbols of the module        */
    int is_user;            /**< set to 1 if we run in user log mode, 2 if request file */
    char code;              /**< code of the logger                         */
    char iflags[16];        /**< integration flags                          */
    int is_threaded;        /**< are we separating logs by threads?         */
    int is_mkdir;           /**< shall we create directory if we get ENOFILE err */
    unsigned threadnr;      /**< thread number to which we are logging      */
    long flags;             /**< logger code initially                      */
    long swait;             /**< sync wait for close log files, ms          */
    ndrx_memlogger_t *memlog;
} ndrx_debug_t;

/*---------------------------Globals------------------------------------*/
/*---------------------------Statics------------------------------------*/
/*---------------------------Prototypes---------------------------------*/
#ifdef	__cplusplus
}
#endif

#endif	/* NDEBUGCMN_H */

/* vim: set ts=4 sw=4 et smartindent: */
