// $Id$
#ifndef BISON_SVC_CONF_TAB_H
# define BISON_SVC_CONF_TAB_H
# define ACE_YYSTYPE_IS_DECLARED 1
/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef ACE_YYTOKENTYPE
# define ACE_YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum ace_yytokentype {
     ACE_DYNAMIC = 258,
     ACE_STATIC = 259,
     ACE_SUSPEND = 260,
     ACE_RESUME = 261,
     ACE_REMOVE = 262,
     ACE_USTREAM = 263,
     ACE_MODULE_T = 264,
     ACE_STREAM_T = 265,
     ACE_SVC_OBJ_T = 266,
     ACE_ACTIVE = 267,
     ACE_INACTIVE = 268,
     ACE_PATHNAME = 269,
     ACE_IDENT = 270,
     ACE_STRING = 271
   };
#endif
/* Tokens.  */
#define ACE_DYNAMIC 258
#define ACE_STATIC 259
#define ACE_SUSPEND 260
#define ACE_RESUME 261
#define ACE_REMOVE 262
#define ACE_USTREAM 263
#define ACE_MODULE_T 264
#define ACE_STREAM_T 265
#define ACE_SVC_OBJ_T 266
#define ACE_ACTIVE 267
#define ACE_INACTIVE 268
#define ACE_PATHNAME 269
#define ACE_IDENT 270
#define ACE_STRING 271




#if ! defined ACE_YYSTYPE && ! defined ACE_YYSTYPE_IS_DECLARED
typedef int ACE_YYSTYPE;
# define ace_yystype ACE_YYSTYPE /* obsolescent; will be withdrawn */
# define ACE_YYSTYPE_IS_DECLARED 1
# define ACE_YYSTYPE_IS_TRIVIAL 1
#endif



#endif /* ifndef BISON_SVC_CONF_TAB_H */
