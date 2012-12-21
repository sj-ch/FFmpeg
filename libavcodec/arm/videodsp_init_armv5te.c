/*
 * Copyright (C) 2012 Ronald S. Bultje
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "libavutil/arm/cpu.h"
#include <libavcodec/videodsp.h>
#include "videodsp_arm.h"

void ff_prefetch_arm(uint8_t *mem, ptrdiff_t stride, int h);

void ff_videodsp_init_armv5te(VideoDSPContext *ctx, int bpc)
{
#if HAVE_ARMV5TE_EXTERNAL
    ctx->prefetch = ff_prefetch_arm;
#endif
}
