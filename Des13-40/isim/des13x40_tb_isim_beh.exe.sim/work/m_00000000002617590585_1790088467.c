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
static const char *ng0 = "C:/Windows/System32/Des13-40/des13x40.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {12, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {25, 0};
static int ng6[] = {13, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {39, 0};
static int ng9[] = {26, 0};
static int ng10[] = {1, 0};
static int ng11[] = {4, 0};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:
LAB15:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t5, 3, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 3);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t12 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t7);
    t25 = (t18 ^ t21);
    t28 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t12);
    t31 = (t28 ^ t30);
    t35 = (t25 | t31);
    t36 = *((unsigned int *)t8);
    t37 = *((unsigned int *)t12);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB25;

LAB22:    if (t38 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t9) = 1;

LAB25:    t14 = (t9 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t9);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1608);
    t12 = (t0 + 1608);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    t16 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB16;

LAB17:    goto LAB15;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng5)));
    t14 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB18;

LAB19:    goto LAB15;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memcpy(t9, t5, 8);
    t3 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng8)));
    t14 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t10, t11, t34, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t11 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t34 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB20;

LAB21:    goto LAB15;

LAB16:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t8, t29, *((unsigned int *)t10), t33);
    goto LAB17;

LAB18:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t3, t5, t29, *((unsigned int *)t10), t33);
    goto LAB19;

LAB20:    t28 = *((unsigned int *)t34);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t11);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t3, t9, t29, *((unsigned int *)t11), t33);
    goto LAB21;

LAB24:    t13 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(42, ng0);

LAB29:    xsi_set_current_line(43, ng0);
    t15 = ((char*)((ng10)));
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB28;

}


extern void work_m_00000000002617590585_1790088467_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000002617590585_1790088467", "isim/des13x40_tb_isim_beh.exe.sim/work/m_00000000002617590585_1790088467.didat");
	xsi_register_executes(pe);
}
