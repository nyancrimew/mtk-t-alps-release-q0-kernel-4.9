/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <met_drv.h>
#include "met_smi_config.h"

#define SMI_MET_LARB0_PORT_NUM 9
struct smi_desc larb0_desc[SMI_MET_LARB0_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB1_PORT_NUM 14
struct smi_desc larb1_desc[SMI_MET_LARB1_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB2_PORT_NUM 12
struct smi_desc larb2_desc[SMI_MET_LARB2_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB3_PORT_NUM 19
struct smi_desc larb3_desc[SMI_MET_LARB3_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },

};

#define SMI_MET_LARB4_PORT_NUM 0
struct smi_desc larb4_desc[SMI_MET_LARB4_PORT_NUM] = {
};

#define SMI_MET_LARB5_PORT_NUM 26
struct smi_desc larb5_desc[SMI_MET_LARB5_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 19, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 20, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 21, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 22, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 23, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 24, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 25, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB6_PORT_NUM 3
struct smi_desc larb6_desc[SMI_MET_LARB6_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB7_PORT_NUM 4
struct smi_desc larb7_desc[SMI_MET_LARB7_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB8_PORT_NUM 10
struct smi_desc larb8_desc[SMI_MET_LARB8_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB9_PORT_NUM 24
struct smi_desc larb9_desc[SMI_MET_LARB9_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 19, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 20, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 21, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 22, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 23, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB10_PORT_NUM 31
struct smi_desc larb10_desc[SMI_MET_LARB10_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 19, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 20, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 21, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 22, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 23, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 24, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 25, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 26, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 27, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 28, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 29, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 30, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_LARB11_PORT_NUM 5
struct smi_desc larb11_desc[SMI_MET_LARB11_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
};

#define SMI_MET_COMMON_PORT_NUM (2+(MET_SMI_LARB_NUM))
struct smi_desc common_desc[SMI_MET_COMMON_PORT_NUM] = {
	{ 0, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 1, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 2, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 3, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 4, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 5, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 6, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 7, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 8, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 9, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 10, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 11, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 12, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 13, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
};

struct chip_smi smi_map[SMI_MET_TOTAL_MASTER_NUM] = {
	{0, larb0_desc, SMI_MET_LARB0_PORT_NUM},
	{1, larb1_desc, SMI_MET_LARB1_PORT_NUM},
	{2, larb2_desc, SMI_MET_LARB2_PORT_NUM},
	{3, larb3_desc, SMI_MET_LARB3_PORT_NUM},
	{4, larb4_desc, SMI_MET_LARB4_PORT_NUM},
	{5, larb5_desc, SMI_MET_LARB5_PORT_NUM},
	{6, larb6_desc, SMI_MET_LARB6_PORT_NUM},
	{7, larb7_desc, SMI_MET_LARB7_PORT_NUM},
	{8, larb8_desc, SMI_MET_LARB8_PORT_NUM},
	{9, larb9_desc, SMI_MET_LARB9_PORT_NUM},
	{10, larb10_desc, SMI_MET_LARB10_PORT_NUM},
	{11, larb11_desc, SMI_MET_LARB11_PORT_NUM},
	{12, common_desc, SMI_MET_COMMON_PORT_NUM}
};
