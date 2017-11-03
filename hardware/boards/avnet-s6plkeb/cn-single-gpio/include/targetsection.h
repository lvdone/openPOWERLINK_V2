/**
********************************************************************************
\file   targetsection.h

\brief  Special function linking for AVNET S6 POWERLINK Eval Board CN GPIO

This header file defines macros for Xilinx Microblaze targets to link specific
functions to local memory.

Copyright (c) 2014, B&R Industrial Automation GmbH
Copyright (c) 2014, Kalycito Infotech Private Ltd.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holders nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

#ifndef _INC_targetsection_H_
#define _INC_targetsection_H_

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

#ifdef NDEBUG
#define XIL_INTERNAL_RAM    __attribute__((section(".local_memory")))
#else
#define XIL_INTERNAL_RAM
#endif

/* TODO:
 * Find optimal setting again due to revised stack design!
 */
#define SECTION_PDOK_PROCESS_TPDO_CB    XIL_INTERNAL_RAM
#define SECTION_PDOK_COPY_TPDO          XIL_INTERNAL_RAM
#define SECTION_PDOK_PROCESS_RPDO       XIL_INTERNAL_RAM
#define SECTION_EVENTK_PROCESS          XIL_INTERNAL_RAM
#define SECTION_EVENTK_POST             XIL_INTERNAL_RAM
#define SECTION_OMETHLIB_RX_IRQ_HDL     XIL_INTERNAL_RAM
#define SECTION_OMETHLIB_TX_IRQ_HDL     XIL_INTERNAL_RAM
#define SECTION_EDRVOPENMAC_RX_HOOK     XIL_INTERNAL_RAM
#define SECTION_EDRVOPENMAC_IRQ_HDL     XIL_INTERNAL_RAM
#define SECTION_MAIN_APP_CB_SYNC        XIL_INTERNAL_RAM
#define SECTION_DLLK_FRAME_RCVD_CB      XIL_INTERNAL_RAM

#endif /* _INC_targetsection_H_ */
