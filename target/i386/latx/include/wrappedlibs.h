#ifndef __WRAPPEDLIBS_H__
#define __WRAPPEDLIBS_H__
#include <stdint.h>
#include "khash.h"
typedef struct library_s library_t;
typedef struct box64context_s  box64context_t;

typedef int (*wrappedlib_init_t)(library_t * lib, box64context_t* box64);  // 0 = success
typedef void (*wrappedlib_fini_t)(library_t * lib);
typedef int (*wrappedlib_get_t)(library_t* lib, const char* name, khint_t pre_k, uintptr_t *offs, uintptr_t *sz, int version, const char* vername, int local);

void setNeededLibs(library_t* lib, int n, ...);
#define SETALT(A)       lib->altmy = strdup(#A)
#define SETALTPREFIX(A) lib->priv.w.altprefix = strdup(A)

typedef struct wrappedlib_s {
    const char*         name;
    wrappedlib_init_t   init;
    wrappedlib_fini_t   fini;
    wrappedlib_get_t    get;
    wrappedlib_get_t    getnoweak;
} wrappedlib_t;

#endif //__WRAPPEDLIBS_H__
