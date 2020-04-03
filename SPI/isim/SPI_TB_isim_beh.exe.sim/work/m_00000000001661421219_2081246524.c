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
static const char *ng0 = "C:/Windows/System32/SPI/SPI.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {4, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {16, 0};
static unsigned int ng11[] = {255U, 0U};



static void Always_43_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 7128);
    *((int *)t2) = 1;
    t3 = (t0 + 5848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 3616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3776);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 1936U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB20;

LAB17:    if (t21 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t9) = 1;

LAB20:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB15;

LAB9:    xsi_set_current_line(64, ng0);

LAB35:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB37;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB39:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(69, ng0);

LAB44:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB42:    goto LAB15;

LAB11:    xsi_set_current_line(75, ng0);

LAB45:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4736);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB15;

LAB19:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);

LAB24:    xsi_set_current_line(53, ng0);
    t31 = (t0 + 2256U);
    t32 = *((char **)t31);

LAB25:    t31 = ((char*)((ng2)));
    t33 = xsi_vlog_unsigned_case_compare(t32, 2, t31, 2);
    if (t33 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t8 == 1)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB23;

LAB26:    xsi_set_current_line(54, ng0);
    t34 = ((char*)((ng4)));
    t35 = (t0 + 4416);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 5);
    goto LAB34;

LAB28:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB34;

LAB30:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB34;

LAB32:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 4416);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB34;

LAB37:    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB38:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(67, ng0);

LAB43:    xsi_set_current_line(67, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 4736);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 1);
    goto LAB42;

}

static void Always_85_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7144);
    *((int *)t2) = 1;
    t3 = (t0 + 6096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(88, ng0);
    t28 = ((char*)((ng9)));
    t29 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB12;

}

static void Always_93_2(char *t0)
{
    char t8[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 4896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(101, ng0);

LAB14:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB18:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(96, ng0);

LAB13:    xsi_set_current_line(97, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4576);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 5);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB17:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(103, ng0);

LAB22:    xsi_set_current_line(104, ng0);
    t23 = (t0 + 4576);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 5, t31, 32);
    t33 = (t0 + 4576);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 5);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB26;

LAB23:    if (t20 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t8) = 1;

LAB26:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB21;

LAB25:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(106, ng0);

LAB30:    xsi_set_current_line(107, ng0);
    t30 = (t0 + 2976);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    memset(t32, 0, 8);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t34) == 0)
        goto LAB31;

LAB33:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;

LAB34:    t41 = (t32 + 4);
    t42 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = (~(t43));
    *((unsigned int *)t32) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB36;

LAB35:    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    t51 = (t0 + 2976);
    xsi_vlogvar_assign_value(t51, t32, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB29;

LAB31:    *((unsigned int *)t32) = 1;
    goto LAB34;

LAB36:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t32) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB35;

}

static void Always_114_3(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7176);
    *((int *)t2) = 1;
    t3 = (t0 + 6592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 4896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(122, ng0);

LAB14:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB18:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(126, ng0);

LAB23:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 4096);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t32, 7, t3, 1);
    t9 = (t0 + 4096);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);

LAB21:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 4256);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 4);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(117, ng0);

LAB13:    xsi_set_current_line(118, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4256);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 4);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB12;

LAB17:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(124, ng0);

LAB22:    xsi_set_current_line(124, ng0);
    t9 = (t0 + 4096);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    memset(t33, 0, 8);
    t24 = (t33 + 4);
    t30 = (t23 + 4);
    t34 = *((unsigned int *)t23);
    t35 = (t34 >> 1);
    *((unsigned int *)t33) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 1);
    *((unsigned int *)t24) = t37;
    t38 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t38 & 127U);
    t39 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t39 & 127U);
    t31 = (t0 + 2416U);
    t40 = *((char **)t31);
    xsi_vlogtype_concat(t32, 8, 8, 2U, t40, 1, t33, 7);
    t31 = (t0 + 4096);
    xsi_vlogvar_assign_value(t31, t32, 0, 0, 8);
    goto LAB21;

}

static void Always_131_4(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 7192);
    *((int *)t2) = 1;
    t3 = (t0 + 6840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 4896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(139, ng0);

LAB14:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB18:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(146, ng0);

LAB36:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB40;

LAB37:    if (t20 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t8) = 1;

LAB40:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(153, ng0);

LAB45:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t32, 7, t2, 1);
    t9 = (t0 + 3936);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 3136);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);

LAB43:
LAB21:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(134, ng0);

LAB13:    xsi_set_current_line(135, ng0);
    t30 = ((char*)((ng11)));
    t31 = (t0 + 3936);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB17:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(141, ng0);

LAB22:    xsi_set_current_line(142, ng0);
    t23 = (t0 + 2096U);
    t24 = *((char **)t23);
    t23 = (t0 + 3936);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB26:    t5 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB27;

LAB28:    t27 = *((unsigned int *)t32);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t34 = (t28 || t29);
    if (t34 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t5) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t32) > 0)
        goto LAB33;

LAB34:    memcpy(t8, t35, 8);

LAB35:    t44 = (t0 + 3136);
    xsi_vlogvar_assign_value(t44, t8, 0, 0, 1);
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t4 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB27:    t6 = (t0 + 3936);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    t10 = (t33 + 4);
    t23 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t33) = t21;
    t22 = *((unsigned int *)t23);
    t25 = (t22 >> 7);
    t26 = (t25 & 1);
    *((unsigned int *)t10) = t26;
    goto LAB28;

LAB29:    t24 = (t0 + 3936);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t8, 1, t33, 1, t35, 1);
    goto LAB35;

LAB33:    memcpy(t8, t33, 8);
    goto LAB35;

LAB39:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(148, ng0);

LAB44:    xsi_set_current_line(149, ng0);
    t9 = (t0 + 3936);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    memset(t33, 0, 8);
    t24 = (t33 + 4);
    t30 = (t23 + 4);
    t34 = *((unsigned int *)t23);
    t38 = (t34 >> 1);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t30);
    t40 = (t39 >> 1);
    *((unsigned int *)t24) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 127U);
    t42 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t42 & 127U);
    t31 = ((char*)((ng5)));
    xsi_vlogtype_concat(t32, 8, 8, 2U, t31, 1, t33, 7);
    t36 = (t0 + 3936);
    xsi_vlogvar_assign_value(t36, t32, 0, 0, 8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t7 = (t0 + 3136);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    goto LAB43;

}


extern void work_m_00000000001661421219_2081246524_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Always_85_1,(void *)Always_93_2,(void *)Always_114_3,(void *)Always_131_4};
	xsi_register_didat("work_m_00000000001661421219_2081246524", "isim/SPI_TB_isim_beh.exe.sim/work/m_00000000001661421219_2081246524.didat");
	xsi_register_executes(pe);
}
