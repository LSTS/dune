/* jconfig.h.  Generated from jconfig.cfg by configure.  */
/* jconfig.cfg --- source file edited by configure script */
/* see jconfig.txt for explanations */

#define HAVE_PROTOTYPES 1
#define HAVE_UNSIGNED_CHAR 1
#define HAVE_UNSIGNED_SHORT 1
/* #undef void */
/* #undef const */
/* #undef CHAR_IS_UNSIGNED */
#define HAVE_STDDEF_H 1
#define HAVE_STDLIB_H 1
//#define HAVE_LOCALE_H 1
/* #undef NEED_BSD_STRINGS */
/* #undef NEED_SYS_TYPES_H */
/* #undef NEED_FAR_POINTERS */
/* #undef NEED_SHORT_EXTERNAL_NAMES */
/* Define this if you get warnings about undefined structures. */
/* #undef INCOMPLETE_TYPES_BROKEN */

// rasm: Added to avoid redefining (badly) INT32
#if defined(_WIN32)
#  include <basetsd.h>
#endif

#ifdef JPEG_INTERNALS

/* #undef RIGHT_SHIFT_IS_UNSIGNED */
#if defined(_MSC_VER)
#  define INLINE __inline
#else
#  define INLINE inline
#endif

/* These are for configuring the JPEG memory manager. */
/* #undef DEFAULT_MAX_MEM */
/* #undef NO_MKTEMP */

#endif /* JPEG_INTERNALS */
