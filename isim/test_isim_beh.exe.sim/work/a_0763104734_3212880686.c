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
static const char *ng0 = "C:/Users/Asus/Desktop/coord/cordic/step.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_0774719531;

unsigned char ieee_p_0774719531_sub_2698860368_2162500114(char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767632659_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0763104734_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5440);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 < 7);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2152U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t9 = (t8 + 1);
    t3 = (t0 + 5536);
    t10 = (t3 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t9;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_0763104734_3212880686_p_1(char *t0)
{
    char t15[16];
    char t24[16];
    char t30[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t25;
    int t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    unsigned int t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3408U);
    t3 = *((char **)t1);
    t1 = (t0 + 2928U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 17U);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 3048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 17U);

LAB6:    xsi_set_current_line(92, ng0);
    t1 = xsi_get_transient_memory(17U);
    memset(t1, 0, 17U);
    t3 = t1;
    t4 = (t0 + 2928U);
    t7 = *((char **)t4);
    t5 = (16 - 16);
    t9 = (t5 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t4 = (t7 + t11);
    t2 = *((unsigned char *)t4);
    memset(t3, t2, 17U);
    t13 = (t0 + 3648U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    memcpy(t13, t1, 17U);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3648U);
    t3 = *((char **)t1);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t8 = (t5 - 1);
    t9 = (16 - t8);
    xsi_vhdl_check_range_of_slice(16, 0, -1, t8, 0, -1);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t7 = (t0 + 2928U);
    t13 = *((char **)t7);
    t20 = (16 - 16);
    t7 = (t0 + 2152U);
    t14 = *((char **)t7);
    t21 = *((int *)t14);
    xsi_vhdl_check_range_of_slice(16, 0, -1, 16, t21, -1);
    t22 = (t20 * 1U);
    t23 = (0 + t22);
    t7 = (t13 + t23);
    t17 = ((IEEE_P_2592010699) + 4024);
    t18 = (t0 + 2152U);
    t19 = *((char **)t18);
    t25 = *((int *)t19);
    t26 = (t25 - 1);
    t18 = (t24 + 0U);
    t27 = (t18 + 0U);
    *((int *)t27) = t26;
    t27 = (t18 + 4U);
    *((int *)t27) = 0;
    t27 = (t18 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - t26);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t18 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t0 + 2152U);
    t31 = *((char **)t27);
    t32 = *((int *)t31);
    t27 = (t30 + 0U);
    t33 = (t27 + 0U);
    *((int *)t33) = 16;
    t33 = (t27 + 4U);
    *((int *)t33) = t32;
    t33 = (t27 + 8U);
    *((int *)t33) = -1;
    t34 = (t32 - 16);
    t29 = (t34 * -1);
    t29 = (t29 + 1);
    t33 = (t27 + 12U);
    *((unsigned int *)t33) = t29;
    t16 = xsi_base_array_concat(t16, t15, t17, (char)97, t1, t24, (char)97, t7, t30, (char)101);
    t33 = (t0 + 3168U);
    t35 = *((char **)t33);
    t33 = (t35 + 0);
    t36 = (t0 + 2152U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t39 = (t38 - 1);
    t40 = (0 - t39);
    t29 = (t40 * -1);
    t29 = (t29 + 1);
    t41 = (1U * t29);
    t36 = (t0 + 2152U);
    t42 = *((char **)t36);
    t43 = *((int *)t42);
    t44 = (t43 - 16);
    t45 = (t44 * -1);
    t45 = (t45 + 1);
    t46 = (1U * t45);
    t47 = (t41 + t46);
    memcpy(t33, t16, t47);
    xsi_set_current_line(95, ng0);
    t1 = xsi_get_transient_memory(17U);
    memset(t1, 0, 17U);
    t3 = t1;
    t4 = (t0 + 3048U);
    t7 = *((char **)t4);
    t5 = (16 - 16);
    t9 = (t5 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t4 = (t7 + t11);
    t2 = *((unsigned char *)t4);
    memset(t3, t2, 17U);
    t13 = (t0 + 3768U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    memcpy(t13, t1, 17U);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3768U);
    t3 = *((char **)t1);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t8 = (t5 - 1);
    t9 = (16 - t8);
    xsi_vhdl_check_range_of_slice(16, 0, -1, t8, 0, -1);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t7 = (t0 + 3048U);
    t13 = *((char **)t7);
    t20 = (16 - 16);
    t7 = (t0 + 2152U);
    t14 = *((char **)t7);
    t21 = *((int *)t14);
    xsi_vhdl_check_range_of_slice(16, 0, -1, 16, t21, -1);
    t22 = (t20 * 1U);
    t23 = (0 + t22);
    t7 = (t13 + t23);
    t17 = ((IEEE_P_2592010699) + 4024);
    t18 = (t0 + 2152U);
    t19 = *((char **)t18);
    t25 = *((int *)t19);
    t26 = (t25 - 1);
    t18 = (t24 + 0U);
    t27 = (t18 + 0U);
    *((int *)t27) = t26;
    t27 = (t18 + 4U);
    *((int *)t27) = 0;
    t27 = (t18 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - t26);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t18 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t0 + 2152U);
    t31 = *((char **)t27);
    t32 = *((int *)t31);
    t27 = (t30 + 0U);
    t33 = (t27 + 0U);
    *((int *)t33) = 16;
    t33 = (t27 + 4U);
    *((int *)t33) = t32;
    t33 = (t27 + 8U);
    *((int *)t33) = -1;
    t34 = (t32 - 16);
    t29 = (t34 * -1);
    t29 = (t29 + 1);
    t33 = (t27 + 12U);
    *((unsigned int *)t33) = t29;
    t16 = xsi_base_array_concat(t16, t15, t17, (char)97, t1, t24, (char)97, t7, t30, (char)101);
    t33 = (t0 + 3288U);
    t35 = *((char **)t33);
    t33 = (t35 + 0);
    t36 = (t0 + 2152U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t39 = (t38 - 1);
    t40 = (0 - t39);
    t29 = (t40 * -1);
    t29 = (t29 + 1);
    t41 = (1U * t29);
    t36 = (t0 + 2152U);
    t42 = *((char **)t36);
    t43 = *((int *)t42);
    t44 = (t43 - 16);
    t45 = (t44 * -1);
    t45 = (t45 + 1);
    t46 = (1U * t45);
    t47 = (t41 + t46);
    memcpy(t33, t16, t47);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2808U);
    t3 = *((char **)t1);
    t1 = (t0 + 8948U);
    t4 = (t0 + 1352U);
    t7 = *((char **)t4);
    t4 = (t0 + 8820U);
    t2 = ieee_p_0774719531_sub_2698860368_2162500114(IEEE_P_0774719531, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t1 = (t0 + 8964U);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t0 + 9012U);
    t13 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t14 = (t0 + 3408U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t15 + 12U);
    t9 = *((unsigned int *)t17);
    t10 = (1U * t9);
    memcpy(t14, t13, t10);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3048U);
    t3 = *((char **)t1);
    t1 = (t0 + 8980U);
    t4 = (t0 + 3168U);
    t7 = *((char **)t4);
    t4 = (t0 + 8996U);
    t13 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t14 = (t0 + 3528U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t15 + 12U);
    t9 = *((unsigned int *)t17);
    t10 = (1U * t9);
    memcpy(t14, t13, t10);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2808U);
    t3 = *((char **)t1);
    t1 = (t0 + 8948U);
    t4 = (t0 + 2448U);
    t7 = *((char **)t4);
    t4 = (t0 + 2152U);
    t13 = *((char **)t4);
    t5 = *((int *)t13);
    t8 = (t5 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t5);
    t10 = (16U * t9);
    t11 = (0 + t10);
    t4 = (t7 + t11);
    t14 = (t24 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 15;
    t16 = (t14 + 4U);
    *((int *)t16) = 0;
    t16 = (t14 + 8U);
    *((int *)t16) = -1;
    t21 = (0 - 15);
    t20 = (t21 * -1);
    t20 = (t20 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t20;
    t16 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t15, t3, t1, t4, t24);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t15 + 12U);
    t20 = *((unsigned int *)t19);
    t22 = (1U * t20);
    memcpy(t17, t16, t22);

LAB9:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 7);
    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t8 = (15 - 15);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t3 = (t7 + t11);
    t12 = *((unsigned char *)t3);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 8804U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)99, t12, (char)97, t14, t17, (char)101);
    t18 = (t0 + 2928U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t20 = (1U + 16U);
    memcpy(t18, t13, t20);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t5 = (15 - 15);
    t9 = (t5 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 8788U);
    t4 = xsi_base_array_concat(t4, t15, t13, (char)99, t2, (char)97, t7, t14, (char)101);
    t16 = (t0 + 3048U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t20 = (1U + 16U);
    memcpy(t16, t4, t20);
    goto LAB6;

LAB8:    xsi_set_current_line(99, ng0);
    t13 = (t0 + 2928U);
    t14 = *((char **)t13);
    t13 = (t0 + 8964U);
    t16 = (t0 + 3288U);
    t17 = *((char **)t16);
    t16 = (t0 + 9012U);
    t18 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t15, t14, t13, t17, t16);
    t19 = (t0 + 3408U);
    t27 = *((char **)t19);
    t19 = (t27 + 0);
    t31 = (t15 + 12U);
    t9 = *((unsigned int *)t31);
    t10 = (1U * t9);
    memcpy(t19, t18, t10);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3048U);
    t3 = *((char **)t1);
    t1 = (t0 + 8980U);
    t4 = (t0 + 3168U);
    t7 = *((char **)t4);
    t4 = (t0 + 8996U);
    t13 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t14 = (t0 + 3528U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t15 + 12U);
    t9 = *((unsigned int *)t17);
    t10 = (1U * t9);
    memcpy(t14, t13, t10);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2808U);
    t3 = *((char **)t1);
    t1 = (t0 + 8948U);
    t4 = (t0 + 2448U);
    t7 = *((char **)t4);
    t4 = (t0 + 2152U);
    t13 = *((char **)t4);
    t5 = *((int *)t13);
    t8 = (t5 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t5);
    t10 = (16U * t9);
    t11 = (0 + t10);
    t4 = (t7 + t11);
    t14 = (t24 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 15;
    t16 = (t14 + 4U);
    *((int *)t16) = 0;
    t16 = (t14 + 8U);
    *((int *)t16) = -1;
    t21 = (0 - 15);
    t20 = (t21 * -1);
    t20 = (t20 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t20;
    t16 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t15, t3, t1, t4, t24);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t15 + 12U);
    t20 = *((unsigned int *)t19);
    t22 = (1U * t20);
    memcpy(t17, t16, t22);
    goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3408U);
    t4 = *((char **)t1);
    t1 = (t0 + 9028U);
    t7 = (t0 + 2688U);
    t13 = *((char **)t7);
    t7 = (t0 + 8916U);
    t14 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t15, t4, t1, t13, t7);
    t16 = (t0 + 3888U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t15 + 12U);
    t9 = *((unsigned int *)t18);
    t10 = (1U * t9);
    memcpy(t16, t14, t10);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t9 = (33 - 31);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t0 + 5600);
    t7 = (t4 + 56U);
    t13 = *((char **)t7);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 9044U);
    t4 = (t0 + 2688U);
    t7 = *((char **)t4);
    t4 = (t0 + 8916U);
    t13 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t14 = (t0 + 3888U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t15 + 12U);
    t9 = *((unsigned int *)t17);
    t10 = (1U * t9);
    memcpy(t14, t13, t10);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t9 = (33 - 31);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t0 + 5664);
    t7 = (t4 + 56U);
    t13 = *((char **)t7);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8820U);
    t4 = (t0 + 2808U);
    t7 = *((char **)t4);
    t4 = (t0 + 8948U);
    t13 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t14 = (t15 + 12U);
    t9 = *((unsigned int *)t14);
    t10 = (1U * t9);
    t2 = (16U != t10);
    if (t2 == 1)
        goto LAB14;

LAB15:    t16 = (t0 + 5728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t27 = *((char **)t19);
    memcpy(t27, t13, 16U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB12;

LAB14:    xsi_size_not_matching(16U, t10, 0);
    goto LAB15;

}


extern void work_a_0763104734_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0763104734_3212880686_p_0,(void *)work_a_0763104734_3212880686_p_1};
	xsi_register_didat("work_a_0763104734_3212880686", "isim/test_isim_beh.exe.sim/work/a_0763104734_3212880686.didat");
	xsi_register_executes(pe);
}
