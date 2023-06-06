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
static const char *ng0 = "D:/Student/Downloads/yehia/YehiaSharawy-20100519/Alu_Control.vhd";



static void work_a_3044219816_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned int t29;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4724);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4730);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:
LAB3:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4736);
    t4 = 1;
    if (2U == 2U)
        goto LAB22;

LAB23:    t4 = 0;

LAB24:    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t26 = (1 - 1);
    t5 = (t26 * -1);
    t15 = (1U * t5);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t4 = *((unsigned char *)t1);
    t18 = (t4 == (unsigned char)3);
    if (t18 != 0)
        goto LAB37;

LAB39:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t26 = (1 - 1);
    t5 = (t26 * -1);
    t15 = (1U * t5);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t4 = *((unsigned char *)t1);
    t18 = (t4 == (unsigned char)3);
    if (t18 != 0)
        goto LAB49;

LAB50:
LAB38:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4762);
    t4 = 1;
    if (2U == 2U)
        goto LAB63;

LAB64:    t4 = 0;

LAB65:    if (t4 != 0)
        goto LAB60;

LAB62:
LAB61:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4772);
    t4 = 1;
    if (2U == 2U)
        goto LAB81;

LAB82:    t4 = 0;

LAB83:    if (t4 != 0)
        goto LAB78;

LAB80:
LAB79:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t26 = (1 - 1);
    t5 = (t26 * -1);
    t15 = (1U * t5);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t4 = *((unsigned char *)t1);
    t18 = (t4 == (unsigned char)3);
    if (t18 != 0)
        goto LAB96;

LAB98:
LAB97:    t1 = (t0 + 2832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t8 = (t0 + 4726);
    t10 = (t0 + 2912);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(20, ng0);
    t8 = (t0 + 4732);
    t10 = (t0 + 2912);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(23, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t15 = (5 - 3);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t10 = (t0 + 4738);
    t18 = 1;
    if (4U == 4U)
        goto LAB31;

LAB32:    t18 = 0;

LAB33:    if (t18 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB20;

LAB22:    t5 = 0;

LAB25:    if (t5 < 2U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB23;

LAB27:    t5 = (t5 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(24, ng0);
    t14 = (t0 + 4742);
    t21 = (t0 + 2912);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB29;

LAB31:    t19 = 0;

LAB34:    if (t19 < 4U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t12 = (t8 + t19);
    t13 = (t10 + t19);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB32;

LAB36:    t19 = (t19 + 1);
    goto LAB34;

LAB37:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1192U);
    t6 = *((char **)t3);
    t17 = (5 - 3);
    t19 = (t17 * 1U);
    t27 = (0 + t19);
    t3 = (t6 + t27);
    t7 = (t0 + 4746);
    t28 = 1;
    if (4U == 4U)
        goto LAB43;

LAB44:    t28 = 0;

LAB45:    if (t28 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB38;

LAB40:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 4750);
    t13 = (t0 + 2912);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB41;

LAB43:    t29 = 0;

LAB46:    if (t29 < 4U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t9 = (t3 + t29);
    t10 = (t7 + t29);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB44;

LAB48:    t29 = (t29 + 1);
    goto LAB46;

LAB49:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1192U);
    t6 = *((char **)t3);
    t17 = (5 - 3);
    t19 = (t17 * 1U);
    t27 = (0 + t19);
    t3 = (t6 + t27);
    t7 = (t0 + 4754);
    t28 = 1;
    if (4U == 4U)
        goto LAB54;

LAB55:    t28 = 0;

LAB56:    if (t28 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB38;

LAB51:    xsi_set_current_line(33, ng0);
    t11 = (t0 + 4758);
    t13 = (t0 + 2912);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB52;

LAB54:    t29 = 0;

LAB57:    if (t29 < 4U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t9 = (t3 + t29);
    t10 = (t7 + t29);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB55;

LAB59:    t29 = (t29 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t15 = (5 - 3);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t10 = (t0 + 4764);
    t18 = 1;
    if (4U == 4U)
        goto LAB72;

LAB73:    t18 = 0;

LAB74:    if (t18 != 0)
        goto LAB69;

LAB71:
LAB70:    goto LAB61;

LAB63:    t5 = 0;

LAB66:    if (t5 < 2U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB64;

LAB68:    t5 = (t5 + 1);
    goto LAB66;

LAB69:    xsi_set_current_line(38, ng0);
    t14 = (t0 + 4768);
    t21 = (t0 + 2912);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB70;

LAB72:    t19 = 0;

LAB75:    if (t19 < 4U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t12 = (t8 + t19);
    t13 = (t10 + t19);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB73;

LAB77:    t19 = (t19 + 1);
    goto LAB75;

LAB78:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t15 = (5 - 3);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t10 = (t0 + 4774);
    t18 = 1;
    if (4U == 4U)
        goto LAB90;

LAB91:    t18 = 0;

LAB92:    if (t18 != 0)
        goto LAB87;

LAB89:
LAB88:    goto LAB79;

LAB81:    t5 = 0;

LAB84:    if (t5 < 2U)
        goto LAB85;
    else
        goto LAB83;

LAB85:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB82;

LAB86:    t5 = (t5 + 1);
    goto LAB84;

LAB87:    xsi_set_current_line(43, ng0);
    t14 = (t0 + 4778);
    t21 = (t0 + 2912);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 4U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB88;

LAB90:    t19 = 0;

LAB93:    if (t19 < 4U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t12 = (t8 + t19);
    t13 = (t10 + t19);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB91;

LAB95:    t19 = (t19 + 1);
    goto LAB93;

LAB96:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1192U);
    t6 = *((char **)t3);
    t17 = (5 - 3);
    t19 = (t17 * 1U);
    t27 = (0 + t19);
    t3 = (t6 + t27);
    t7 = (t0 + 4782);
    t28 = 1;
    if (4U == 4U)
        goto LAB102;

LAB103:    t28 = 0;

LAB104:    if (t28 != 0)
        goto LAB99;

LAB101:
LAB100:    goto LAB97;

LAB99:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 4786);
    t13 = (t0 + 2912);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB100;

LAB102:    t29 = 0;

LAB105:    if (t29 < 4U)
        goto LAB106;
    else
        goto LAB104;

LAB106:    t9 = (t3 + t29);
    t10 = (t7 + t29);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB103;

LAB107:    t29 = (t29 + 1);
    goto LAB105;

}


extern void work_a_3044219816_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3044219816_3212880686_p_0};
	xsi_register_didat("work_a_3044219816_3212880686", "isim/MIPS_isim_beh.exe.sim/work/a_3044219816_3212880686.didat");
	xsi_register_executes(pe);
}
