/*
 * Realtek Semiconductor Corp.
 *
 * utils/rts_utils.c
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */


#ifndef _DLFW_H
#define _DLFW_H

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

int rts_download_fw(char *dev_name, char *fw_name, uint32_t skip_addr, uint32_t skip_length);

#ifdef __cplusplus
}
#endif

#endif
