/*
 * GLOBAL.H - RSAREF types and constants
 */

/* PROTOTYPES should be set to one if and only if the compiler supports
  function argument prototyping.
The following makes PROTOTYPES default to 0 if it has not already
  been defined with C compiler flags.
 */

#define __LSTS_MD5

/* POINTER defines a generic pointer type */
typedef unsigned char *POINTER;

/* UINT2 defines a two byte word */
typedef unsigned short int UINT2;

/* UINT4 defines a four byte word */
/* LSTS NOTE: Eduardo Marques - Jan 11 2011 - this was 'unsigned long int' in the original RI which caused problems on 64 bit machines and std. compiler options. */
#ifdef __LSTS_MD5
typedef unsigned int UINT4;
#else
typedef unsigned long int UINT4;
#endif

#define PROTO_LIST(list) list
