/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Student/Downloads/yehia/YehiaSharawy-20100519/Alu_32.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1754818776_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5492U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5508U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 3496);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t6 = (t0 + 3496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

}

static void work_a_1754818776_3212880686_p_1(char *t0)
{
    char t5[16];
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5632);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5636);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5640);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5644);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5648);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5524U);
    t3 = (t0 + 5716);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB24;

LAB25:
LAB3:    t1 = (t0 + 3416);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t15 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB5:    xsi_size_not_matching(32U, t17, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t15 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB9:    xsi_size_not_matching(32U, t17, 0);
    goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t15 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB13:    xsi_size_not_matching(32U, t17, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t15 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB17:    xsi_size_not_matching(32U, t17, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t18 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t12, t7, t14, t13);
    if (t18 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 5684);
    t3 = (t0 + 3560);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB22:    goto LAB3;

LAB21:    xsi_set_current_line(39, ng0);
    t15 = (t0 + 5652);
    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB22;

LAB24:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t7 = (t0 + 5492U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5508U);
    t15 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t11, t12, t7, t14, t13);
    t16 = (t11 + 12U);
    t9 = *((unsigned int *)t16);
    t17 = (1U * t9);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB26;

LAB27:    t19 = (t0 + 3560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB26:    xsi_size_not_matching(32U, t17, 0);
    goto LAB27;

}


extern void work_a_1754818776_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1754818776_3212880686_p_0,(void *)work_a_1754818776_3212880686_p_1};
	xsi_register_didat("work_a_1754818776_3212880686", "isim/SingleCycle_MIPS_Architecture_isim_beh.exe.sim/work/a_1754818776_3212880686.didat");
	xsi_register_executes(pe);
}
