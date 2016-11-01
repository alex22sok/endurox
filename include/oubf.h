/* 
** UBF Object API header (auto-generated)
**
** @file oubf.h
** 
** -----------------------------------------------------------------------------
** Enduro/X Middleware Platform for Distributed Transaction Processing
** Copyright (C) 2015, ATR Baltic, SIA. All Rights Reserved.
** This software is released under one of the following licenses:
** GPL or ATR Baltic's license for commercial use.
** -----------------------------------------------------------------------------
** GPL license:
** 
** This program is free software; you can redistribute it and/or modify it under
** the terms of the GNU General Public License as published by the Free Software
** Foundation; either version 2 of the License, or (at your option) any later
** version.
**
** This program is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
** PARTICULAR PURPOSE. See the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License along with
** this program; if not, write to the Free Software Foundation, Inc., 59 Temple
** Place, Suite 330, Boston, MA 02111-1307 USA
**
** -----------------------------------------------------------------------------
** A commercial use license is available from ATR Baltic, SIA
** contact@atrbaltic.com
** -----------------------------------------------------------------------------
*/
#ifndef __OUBF_H
#define __OUBF_H

#ifdef  __cplusplus
extern "C" {
#endif
/*---------------------------Includes-----------------------------------*/
#include <stdint.h>
#include <ubf.h>
#include <atmi.h>
#include <atmi_tls.h>
/*---------------------------Externs------------------------------------*/
/*---------------------------Macros-------------------------------------*/
#define OBerror(P_CTXT)   (*O_Bget_Ferror_addr(P_CTXT))
/*---------------------------Enums--------------------------------------*/
/*---------------------------Typedefs-----------------------------------*/
/*---------------------------Globals------------------------------------*/
/*---------------------------Statics------------------------------------*/
/*---------------------------Prototypes---------------------------------*/
extern NDRX_API int * O_Bget_Ferror_addr(TPCONTEXT_T *p_ctxt);
extern NDRX_API int OBlen(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ);
extern NDRX_API int OCBadd(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, char * buf, BFLDLEN len, int usrtype);
extern NDRX_API int OCBchg(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, char * buf, BFLDLEN len, int usrtype);
extern NDRX_API int OCBget(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, char *buf, BFLDLEN *len, int usrtype);
extern NDRX_API int OBdel(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ);
extern NDRX_API int OBpres(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ);
extern NDRX_API int OBproj(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID * fldlist);
extern NDRX_API int OBprojcpy(TPCONTEXT_T *p_ctxt, UBFH * p_ub_dst, UBFH * p_ub_src, BFLDID * fldlist);
extern NDRX_API BFLDID OBfldid(TPCONTEXT_T *p_ctxt, char *fldnm);
extern NDRX_API char * OBfname(TPCONTEXT_T *p_ctxt, BFLDID bfldid);
extern NDRX_API int OBcpy(TPCONTEXT_T *p_ctxt, UBFH * p_ub_dst, UBFH * p_ub_src);
extern NDRX_API int OBchg(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, char * buf, BFLDLEN len);
extern NDRX_API int OBinit(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDLEN len);
extern NDRX_API int OBnext(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID *bfldid, BFLDOCC *occ, char *buf, BFLDLEN *len);
extern NDRX_API int OBget(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ, char * buf, BFLDLEN * buflen);
extern NDRX_API char * OBboolco(TPCONTEXT_T *p_ctxt, char * expr);
extern NDRX_API char * OBfind(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ, BFLDLEN * p_len);
extern NDRX_API int OBboolev(TPCONTEXT_T *p_ctxt, UBFH * p_ub, char *tree);
extern NDRX_API double OBfloatev(TPCONTEXT_T *p_ctxt, UBFH * p_ub, char *tree);
extern NDRX_API int OBadd(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, char *buf, BFLDLEN len);
extern NDRX_API void OB_error(TPCONTEXT_T *p_ctxt, char *str);
extern NDRX_API char * OBstrerror(TPCONTEXT_T *p_ctxt, int err);
extern NDRX_API BFLDID OBmkfldid(TPCONTEXT_T *p_ctxt, int fldtype, BFLDID bfldid);
extern NDRX_API BFLDOCC OBoccur(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid);
extern NDRX_API long OBused(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API int OBfldtype(TPCONTEXT_T *p_ctxt, BFLDID bfldid);
extern NDRX_API int OBdelall(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid);
extern NDRX_API int OBdelete(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID *fldlist);
extern NDRX_API BFLDOCC OBfldno(TPCONTEXT_T *p_ctxt, BFLDID bfldid);
extern NDRX_API long OBunused(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API long OBsizeof(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API char * OBtype(TPCONTEXT_T *p_ctxt, BFLDID bfldid);
extern NDRX_API int OBfree(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API UBFH * OBalloc(TPCONTEXT_T *p_ctxt, BFLDOCC f, BFLDLEN v);
extern NDRX_API UBFH * OBrealloc(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDOCC f, BFLDLEN v);
extern NDRX_API int OBupdate(TPCONTEXT_T *p_ctxt, UBFH *p_ub_dst, UBFH *p_ub_src);
extern NDRX_API int OBconcat(TPCONTEXT_T *p_ctxt, UBFH *p_ub_dst, UBFH *p_ub_src);
extern NDRX_API char * OCBfind(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ, BFLDLEN * len, int usrtype);
extern NDRX_API char * OCBgetalloc(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ, int usrtype, BFLDLEN *extralen);
extern NDRX_API BFLDOCC OCBfindocc(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid,char * buf, BFLDLEN len, int usrtype);
extern NDRX_API BFLDOCC OBfindocc(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid,char * buf, BFLDLEN len);
extern NDRX_API char * OBgetalloc(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid, BFLDOCC occ, BFLDLEN *extralen);
extern NDRX_API char * OBfindlast(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDID bfldid,BFLDOCC *occ, BFLDLEN *len);
extern NDRX_API int OBgetlast(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid,BFLDOCC *occ, char *buf, BFLDLEN *len);
extern NDRX_API int OBprint(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API int OBfprint(TPCONTEXT_T *p_ctxt, UBFH *p_ub, FILE * outf);
extern NDRX_API char * OBtypcvt(TPCONTEXT_T *p_ctxt, BFLDLEN * to_len, int to_type,char *from_buf, int from_type, BFLDLEN from_len);
extern NDRX_API int OBextread(TPCONTEXT_T *p_ctxt, UBFH * p_ub, FILE *inf);
extern NDRX_API void OBboolpr(TPCONTEXT_T *p_ctxt, char * tree, FILE *outf);
extern NDRX_API int OBread(TPCONTEXT_T *p_ctxt, UBFH * p_ub, FILE * inf);
extern NDRX_API int OBwrite(TPCONTEXT_T *p_ctxt, UBFH *p_ub, FILE * outf);
extern NDRX_API void OBtreefree(TPCONTEXT_T *p_ctxt, char *tree);
extern NDRX_API int OBboolsetcbf(TPCONTEXT_T *p_ctxt, char *funcname, long (*functionPtr)(UBFH *p_ub, char *funcname));
extern NDRX_API int OBadds(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, char *buf);
extern NDRX_API int OBchgs(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, char *buf);
extern NDRX_API int OBgets(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, char *buf);
extern NDRX_API char * OBgetsa(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ, BFLDLEN *extralen);
extern NDRX_API char * OBfinds(TPCONTEXT_T *p_ctxt, UBFH *p_ub, BFLDID bfldid, BFLDOCC occ);
extern NDRX_API int OBisubf(TPCONTEXT_T *p_ctxt, UBFH *p_ub);
extern NDRX_API int OBindex(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDOCC occ);
extern NDRX_API BFLDOCC OBunindex(TPCONTEXT_T *p_ctxt, UBFH * p_ub);
extern NDRX_API long OBidxused(TPCONTEXT_T *p_ctxt, UBFH * p_ub);
extern NDRX_API int OBrstrindex(TPCONTEXT_T *p_ctxt, UBFH * p_ub, BFLDOCC occ);
extern NDRX_API void * Ondrx_ubf_tls_get(TPCONTEXT_T *p_ctxt);
extern NDRX_API int Ondrx_ubf_tls_set(TPCONTEXT_T *p_ctxt, void *data);
extern NDRX_API void Ondrx_ubf_tls_free(TPCONTEXT_T *p_ctxt, void *data);
extern NDRX_API void * Ondrx_ubf_tls_new(TPCONTEXT_T *p_ctxt, int auto_destroy, int auto_set);
#endif  /* __OUBF_H */

