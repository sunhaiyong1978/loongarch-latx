/*
 * Internal execution defines for qemu
 *
 *  Copyright (c) 2003 Fabrice Bellard
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef ACCEL_TCG_INTERNAL_H
#define ACCEL_TCG_INTERNAL_H

#include "exec/exec-all.h"

TranslationBlock *tb_gen_code(CPUState *cpu, target_ulong pc,
                              target_ulong cs_base, uint32_t flags,
                              int cflags);

void QEMU_NORETURN cpu_io_recompile(CPUState *cpu, uintptr_t retaddr);

TranslationBlock *tb_link_page(TranslationBlock *tb, tb_page_addr_t phys_pc,
    tb_page_addr_t phys_page2);

#endif /* ACCEL_TCG_INTERNAL_H */
