#ifndef __wrappedlibxextTYPES_H_
#define __wrappedlibxextTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void* (*pFp_t)(void*);
typedef int32_t (*iFpppiiu_t)(void*, void*, void*, int32_t, int32_t, uint32_t);
typedef void* (*pFppppip_t)(void*, void*, void*, void*, int32_t, void*);
typedef void* (*pFppuippuu_t)(void*, void*, uint32_t, int32_t, void*, void*, uint32_t, uint32_t);
typedef int32_t (*iFppppiiiiuui_t)(void*, void*, void*, void*, int32_t, int32_t, int32_t, int32_t, uint32_t, uint32_t, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XSetExtensionErrorHandler, pFp_t) \
	GO(XShmGetImage, iFpppiiu_t) \
	GO(XextAddDisplay, pFppppip_t) \
	GO(XShmCreateImage, pFppuippuu_t) \
	GO(XShmPutImage, iFppppiiiiuui_t)

#endif // __wrappedlibxextTYPES_H_
