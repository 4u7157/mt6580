/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = 
{
	{	0	,	4336	},
	{	1	,	4319	},
	{	2	,	4303	},
	{	3	,	4284	},
	{	4	,	4254	},
	{	5	,	4225	},
	{	6	,	4207	},
	{	7	,	4193	},
	{	8	,	4181	},
	{	9	,	4169	},
	{	10	,	4158	},
	{	11	,	4148	},
	{	12	,	4137	},
	{	13	,	4126	},
	{	14	,	4116	},
	{	15	,	4107	},
	{	16	,	4099	},
	{	17	,	4084	},
	{	18	,	4074	},
	{	19	,	4062	},
	{	20	,	4046	},
	{	21	,	4027	},
	{	22	,	4009	},
	{	23	,	3993	},
	{	24	,	3980	},
	{	25	,	3969	},
	{	26	,	3960	},
	{	27	,	3952	},
	{	28	,	3944	},
	{	29	,	3938	},
	{	30	,	3931	},
	{	31	,	3925	},
	{	32	,	3918	},
	{	33	,	3912	},
	{	34	,	3906	},
	{	35	,	3900	},
	{	36	,	3894	},
	{	37	,	3887	},
	{	38	,	3881	},
	{	39	,	3875	},
	{	40	,	3869	},
	{	41	,	3863	},
	{	42	,	3861	},
	{	43	,	3860	},
	{	44	,	3853	},
	{	45	,	3847	},
	{	46	,	3842	},
	{	47	,	3837	},
	{	48	,	3832	},
	{	49	,	3824	},
	{	50	,	3820	},
	{	51	,	3817	},
	{	52	,	3813	},
	{	53	,	3810	},
	{	54	,	3806	},
	{	55	,	3803	},
	{	56	,	3801	},
	{	57	,	3798	},
	{	58	,	3796	},
	{	59	,	3794	},
	{	60	,	3792	},
	{	61	,	3790	},
	{	62	,	3788	},
	{	63	,	3787	},
	{	64	,	3783	},
	{	65	,	3781	},
	{	66	,	3779	},
	{	67	,	3776	},
	{	68	,	3773	},
	{	69	,	3771	},
	{	70	,	3767	},
	{	71	,	3765	},
	{	72	,	3761	},
	{	73	,	3757	},
	{	74	,	3752	},
	{	75	,	3748	},
	{	76	,	3744	},
	{	77	,	3739	},
	{	78	,	3734	},
	{	79	,	3729	},
	{	80	,	3724	},
	{	81	,	3720	},
	{	82	,	3716	},
	{	83	,	3712	},
	{	84	,	3709	},
	{	85	,	3705	},
	{	86	,	3692	},
	{	87	,	3681	},
	{	88	,	3664	},
	{	89	,	3638	},
	{	90	,	3616	},
	{	91	,	3600	},
	{	92	,	3586	},
	{	93	,	3570	},
	{	94	,	3556	},
	{	95	,	3545	},
	{	96	,	3535	},
	{	97	,	3524	},
	{	98	,	3518	},
	{	99	,	3510	},
	{	100 ,	3499	}

};      

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = 
{
	{	0	,	4268	},
	{	1	,	4243	},
	{	2	,	4228	},
	{	3	,	4216	},
	{	4	,	4205	},
	{	5	,	4194	},
	{	6	,	4184	},
	{	7	,	4173	},
	{	8	,	4163	},
	{	9	,	4153	},
	{	10	,	4143	},
	{	11	,	4133	},
	{	12	,	4123	},
	{	13	,	4113	},
	{	14	,	4105	},
	{	15	,	4097	},
	{	16	,	4091	},
	{	17	,	4085	},
	{	18	,	4079	},
	{	19	,	4069	},
	{	20	,	4055	},
	{	21	,	4036	},
	{	22	,	4018	},
	{	23	,	4002	},
	{	24	,	3990	},
	{	25	,	3980	},
	{	26	,	3972	},
	{	27	,	3964	},
	{	28	,	3957	},
	{	29	,	3950	},
	{	30	,	3943	},
	{	31	,	3936	},
	{	32	,	3928	},
	{	33	,	3921	},
	{	34	,	3913	},
	{	35	,	3906	},
	{	36	,	3898	},
	{	37	,	3891	},
	{	38	,	3885	},
	{	39	,	3878	},
	{	40	,	3872	},
	{	41	,	3867	},
	{	42	,	3862	},
	{	43	,	3857	},
	{	44	,	3852	},
	{	45	,	3847	},
	{	46	,	3843	},
	{	47	,	3839	},
	{	48	,	3834	},
	{	49	,	3830	},
	{	50	,	3827	},
	{	51	,	3823	},
	{	52	,	3819	},
	{	53	,	3816	},
	{	54	,	3813	},
	{	55	,	3810	},
	{	56	,	3806	},
	{	57	,	3804	},
	{	58	,	3801	},
	{	59	,	3798	},
	{	60	,	3795	},
	{	61	,	3792	},
	{	62	,	3790	},
	{	63	,	3788	},
	{	64	,	3786	},
	{	65	,	3784	},
	{	66	,	3783	},
	{	67	,	3780	},
	{	68	,	3778	},
	{	69	,	3776	},
	{	70	,	3774	},
	{	71	,	3771	},
	{	72	,	3768	},
	{	73	,	3765	},
	{	74	,	3762	},
	{	75	,	3759	},
	{	76	,	3754	},
	{	77	,	3750	},
	{	78	,	3746	},
	{	79	,	3741	},
	{	80	,	3736	},
	{	81	,	3730	},
	{	82	,	3724	},
	{	83	,	3717	},
	{	84	,	3712	},
	{	85	,	3709	},
	{	86	,	3706	},
	{	87	,	3704	},
	{	88	,	3702	},
	{	89	,	3698	},
	{	90	,	3694	},
	{	91	,	3686	},
	{	92	,	3665	},
	{	93	,	3631	},
	{	94	,	3584	},
	{	95	,	3522	},
	{	96	,	3473	},
	{	97	,	3443	},
	{	98	,	3423	},
	{	99	,	3410	},
	{	100 ,	3400	}
};           

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = 
{
	
	{	0	,	4341	},
	{	1	,	4326	},
	{	2	,	4313	},
	{	3	,	4301	},
	{	4	,	4290	},
	{	5	,	4279	},
	{	6	,	4268	},
	{	7	,	4257	},
	{	8	,	4246	},
	{	9	,	4236	},
	{	10	,	4226	},
	{	11	,	4215	},
	{	12	,	4205	},
	{	13	,	4185	},
	{	14	,	4175	},
	{	15	,	4164	},
	{	16	,	4155	},
	{	17	,	4145	},
	{	18	,	4135	},
	{	19	,	4125	},
	{	20	,	4115	},
	{	21	,	4105	},
	{	22	,	4095	},
	{	23	,	4086	},
	{	24	,	4077	},
	{	25	,	4069	},
	{	26	,	4064	},
	{	27	,	4058	},
	{	28	,	4049	},
	{	29	,	4035	},
	{	30	,	4020	},
	{	31	,	4005	},
	{	32	,	3993	},
	{	33	,	3984	},
	{	34	,	3977	},
	{	35	,	3971	},
	{	36	,	3966	},
	{	37	,	3961	},
	{	38	,	3947	},
	{	39	,	3938	},
	{	40	,	3928	},
	{	41	,	3918	},
	{	42	,	3907	},
	{	43	,	3898	},
	{	44	,	3890	},
	{	45	,	3882	},
	{	46	,	3875	},
	{	47	,	3869	},
	{	48	,	3863	},
	{	49	,	3857	},
	{	50	,	3852	},
	{	51	,	3847	},
	{	52	,	3842	},
	{	53	,	3837	},
	{	54	,	3833	},
	{	55	,	3829	},
	{	56	,	3825	},
	{	57	,	3820	},
	{	58	,	3817	},
	{	59	,	3813	},
	{	60	,	3810	},
	{	61	,	3806	},
	{	62	,	3803	},
	{	63	,	3796	},
	{	64	,	3793	},
	{	65	,	3790	},
	{	66	,	3787	},
	{	67	,	3784	},
	{	68	,	3782	},
	{	69	,	3778	},
	{	70	,	3775	},
	{	71	,	3772	},
	{	72	,	3768	},
	{	73	,	3765	},
	{	74	,	3761	},
	{	75	,	3757	},
	{	76	,	3754	},
	{	77	,	3750	},
	{	78	,	3746	},
	{	79	,	3743	},
	{	80	,	3740	},
	{	81	,	3737	},
	{	82	,	3734	},
	{	83	,	3730	},
	{	84	,	3725	},
	{	85	,	3719	},
	{	86	,	3714	},
	{	87	,	3703	},
	{	88	,	3695	},
	{	89	,	3689	},
	{	90	,	3687	},
	{	91	,	3686	},
	{	92	,	3685	},
	{	93	,	3683	},
	{	94	,	3681	},
	{	95	,	3678	},
	{	96	,	3668	},
	{	97	,	3640	},
	{	98	,	3600	},
	{	99	,	3549	},
	{	100 ,	3483	}
};     

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = 
{
	{	0	,	4344	},
	{	1	,	4329	},
	{	2	,	4315	},
	{	3	,	4302	},
	{	4	,	4290	},
	{	5	,	4279	},
	{	6	,	4267	},
	{	7	,	4256	},
	{	8	,	4245	},
	{	9	,	4235	},
	{	10	,	4224	},
	{	11	,	4204	},
	{	12	,	4193	},
	{	13	,	4183	},
	{	14	,	4173	},
	{	15	,	4163	},
	{	16	,	4153	},
	{	17	,	4143	},
	{	18	,	4133	},
	{	19	,	4123	},
	{	20	,	4114	},
	{	21	,	4104	},
	{	22	,	4095	},
	{	23	,	4086	},
	{	24	,	4076	},
	{	25	,	4067	},
	{	26	,	4058	},
	{	27	,	4049	},
	{	28	,	4041	},
	{	29	,	4032	},
	{	30	,	4023	},
	{	31	,	4014	},
	{	32	,	3999	},
	{	33	,	3991	},
	{	34	,	3984	},
	{	35	,	3976	},
	{	36	,	3969	},
	{	37	,	3961	},
	{	38	,	3954	},
	{	39	,	3946	},
	{	40	,	3939	},
	{	41	,	3931	},
	{	42	,	3921	},
	{	43	,	3912	},
	{	44	,	3901	},
	{	45	,	3892	},
	{	46	,	3883	},
	{	47	,	3875	},
	{	48	,	3869	},
	{	49	,	3863	},
	{	50	,	3857	},
	{	51	,	3852	},
	{	52	,	3842	},
	{	53	,	3837	},
	{	54	,	3833	},
	{	55	,	3829	},
	{	56	,	3825	},
	{	57	,	3821	},
	{	58	,	3817	},
	{	59	,	3813	},
	{	60	,	3810	},
	{	61	,	3806	},
	{	62	,	3803	},
	{	63	,	3800	},
	{	64	,	3797	},
	{	65	,	3794	},
	{	66	,	3791	},
	{	67	,	3788	},
	{	68	,	3785	},
	{	69	,	3782	},
	{	70	,	3779	},
	{	71	,	3775	},
	{	72	,	3764	},
	{	73	,	3757	},
	{	74	,	3753	},
	{	75	,	3748	},
	{	76	,	3744	},
	{	77	,	3741	},
	{	78	,	3737	},
	{	79	,	3733	},
	{	80	,	3729	},
	{	81	,	3726	},
	{	82	,	3722	},
	{	83	,	3719	},
	{	84	,	3714	},
	{	85	,	3708	},
	{	86	,	3703	},
	{	87	,	3698	},
	{	88	,	3692	},
	{	89	,	3685	},
	{	90	,	3678	},
	{	91	,	3677	},
	{	92	,	3676	},
	{	93	,	3674	},
	{	94	,	3671	},
	{	95	,	3666	},
	{	96	,	3649	},
	{	97	,	3615	},
	{	98	,	3572	},
	{	99	,	3517	},
	{	100 ,	3444	}

};           

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = 
{
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	}

};    

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = 
{
	{	268 ,	4336	},
	{	2750	,	4319	},
	{	2781	,	4303	},
	{	2879	,	4284	},
	{	3073	,	4254	},
	{	3530	,	4225	},
	{	3959	,	4207	},
	{	4049	,	4193	},
	{	4026	,	4181	},
	{	4146	,	4169	},
	{	3971	,	4158	},
	{	3946	,	4148	},
	{	4047	,	4137	},
	{	4146	,	4126	},
	{	4154	,	4116	},
	{	4074	,	4107	},
	{	4104	,	4099	},
	{	4243	,	4084	},
	{	4163	,	4074	},
	{	4207	,	4062	},
	{	4110	,	4046	},
	{	4083	,	4027	},
	{	4009	,	4009	},
	{	3981	,	3993	},
	{	3977	,	3980	},
	{	3950	,	3969	},
	{	3883	,	3960	},
	{	3876	,	3952	},
	{	3977	,	3944	},
	{	3920	,	3938	},
	{	4034	,	3931	},
	{	4004	,	3925	},
	{	3929	,	3918	},
	{	3969	,	3912	},
	{	3973	,	3906	},
	{	3880	,	3900	},
	{	3906	,	3894	},
	{	3964	,	3887	},
	{	4004	,	3881	},
	{	3977	,	3875	},
	{	3969	,	3869	},
	{	3946	,	3863	},
	{	4056	,	3861	},
	{	1559	,	3860	},
	{	2617	,	3853	},
	{	3473	,	3847	},
	{	3804	,	3842	},
	{	3806	,	3837	},
	{	3773	,	3832	},
	{	3850	,	3824	},
	{	4003	,	3820	},
	{	4057	,	3817	},
	{	4004	,	3813	},
	{	4049	,	3810	},
	{	3973	,	3806	},
	{	4070	,	3803	},
	{	4186	,	3801	},
	{	4110	,	3798	},
	{	4189	,	3796	},
	{	4070	,	3794	},
	{	4021	,	3792	},
	{	4216	,	3790	},
	{	4141	,	3788	},
	{	4150	,	3787	},
	{	4114	,	3783	},
	{	4186	,	3781	},
	{	4247	,	3779	},
	{	4264	,	3776	},
	{	4203	,	3773	},
	{	4283	,	3771	},
	{	4393	,	3767	},
	{	4163	,	3765	},
	{	4411	,	3761	},
	{	4239	,	3757	},
	{	4441	,	3752	},
	{	4239	,	3748	},
	{	4330	,	3744	},
	{	4350	,	3739	},
	{	4500	,	3734	},
	{	4464	,	3729	},
	{	4629	,	3724	},
	{	4584	,	3720	},
	{	4836	,	3716	},
	{	4844	,	3712	},
	{	4956	,	3709	},
	{	5120	,	3705	},
	{	5417	,	3692	},
	{	5479	,	3681	},
	{	5754	,	3664	},
	{	5983	,	3638	},
	{	5947	,	3616	},
	{	5727	,	3600	},
	{	5519	,	3586	},
	{	5306	,	3570	},
	{	5099	,	3556	},
	{	4937	,	3545	},
	{	4791	,	3535	},
	{	4641	,	3524	},
	{	4553	,	3518	},
	{	4437	,	3510	},
	{	4287	,	3499	}

};      

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = 
{
	{	225 ,	4268	},
	{	1750	,	4243	},
	{	1816	,	4228	},
	{	1839	,	4216	},
	{	1877	,	4205	},
	{	1891	,	4194	},
	{	1919	,	4184	},
	{	1926	,	4173	},
	{	1949	,	4163	},
	{	1959	,	4153	},
	{	1974	,	4143	},
	{	1984	,	4133	},
	{	1984	,	4123	},
	{	1993	,	4113	},
	{	2001	,	4105	},
	{	2011	,	4097	},
	{	2051	,	4091	},
	{	2086	,	4085	},
	{	2121	,	4079	},
	{	2136	,	4069	},
	{	2109	,	4055	},
	{	2073	,	4036	},
	{	2033	,	4018	},
	{	2010	,	4002	},
	{	2006	,	3990	},
	{	1997	,	3980	},
	{	1993	,	3972	},
	{	1984	,	3964	},
	{	1984	,	3957	},
	{	1976	,	3950	},
	{	1967	,	3943	},
	{	1950	,	3936	},
	{	1931	,	3928	},
	{	1904	,	3921	},
	{	1881	,	3913	},
	{	1860	,	3906	},
	{	1846	,	3898	},
	{	1829	,	3891	},
	{	1829	,	3885	},
	{	1829	,	3878	},
	{	1824	,	3872	},
	{	1829	,	3867	},
	{	1839	,	3862	},
	{	1847	,	3857	},
	{	1841	,	3852	},
	{	1856	,	3847	},
	{	1861	,	3843	},
	{	1864	,	3839	},
	{	1870	,	3834	},
	{	1881	,	3830	},
	{	1886	,	3827	},
	{	1900	,	3823	},
	{	1904	,	3819	},
	{	1913	,	3816	},
	{	1927	,	3813	},
	{	1940	,	3810	},
	{	1944	,	3806	},
	{	1963	,	3804	},
	{	1967	,	3801	},
	{	1980	,	3798	},
	{	1980	,	3795	},
	{	1989	,	3792	},
	{	1999	,	3790	},
	{	2007	,	3788	},
	{	2010	,	3786	},
	{	2024	,	3784	},
	{	2037	,	3783	},
	{	2046	,	3780	},
	{	2047	,	3778	},
	{	2056	,	3776	},
	{	2069	,	3774	},
	{	2081	,	3771	},
	{	2103	,	3768	},
	{	2111	,	3765	},
	{	2139	,	3762	},
	{	2160	,	3759	},
	{	2170	,	3754	},
	{	2197	,	3750	},
	{	2219	,	3746	},
	{	2231	,	3741	},
	{	2267	,	3736	},
	{	2299	,	3730	},
	{	2334	,	3724	},
	{	2356	,	3717	},
	{	2413	,	3712	},
	{	2467	,	3709	},
	{	2537	,	3706	},
	{	2619	,	3704	},
	{	2710	,	3702	},
	{	2826	,	3698	},
	{	2967	,	3694	},
	{	3119	,	3686	},
	{	3237	,	3665	},
	{	3389	,	3631	},
	{	3623	,	3584	},
	{	3960	,	3522	},
	{	3897	,	3473	},
	{	3480	,	3443	},
	{	3207	,	3423	},
	{	2999	,	3410	},
	{	2870	,	3400	}

};     

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = 
{
	{	138 ,	4341	},
	{	519 ,	4326	},
	{	531 ,	4313	},
	{	527 ,	4301	},
	{	536 ,	4290	},
	{	536 ,	4279	},
	{	536 ,	4268	},
	{	536 ,	4257	},
	{	540 ,	4246	},
	{	541 ,	4236	},
	{	544 ,	4226	},
	{	544 ,	4215	},
	{	549 ,	4205	},
	{	559 ,	4185	},
	{	563 ,	4175	},
	{	566 ,	4164	},
	{	571 ,	4155	},
	{	571 ,	4145	},
	{	571 ,	4135	},
	{	576 ,	4125	},
	{	584 ,	4115	},
	{	584 ,	4105	},
	{	597 ,	4095	},
	{	603 ,	4086	},
	{	616 ,	4077	},
	{	626 ,	4069	},
	{	660 ,	4064	},
	{	673 ,	4058	},
	{	673 ,	4049	},
	{	660 ,	4035	},
	{	651 ,	4020	},
	{	647 ,	4005	},
	{	651 ,	3993	},
	{	656 ,	3984	},
	{	664 ,	3977	},
	{	669 ,	3971	},
	{	681 ,	3966	},
	{	696 ,	3961	},
	{	673 ,	3947	},
	{	664 ,	3938	},
	{	641 ,	3928	},
	{	611 ,	3918	},
	{	576 ,	3907	},
	{	553 ,	3898	},
	{	537 ,	3890	},
	{	519 ,	3882	},
	{	519 ,	3875	},
	{	510 ,	3869	},
	{	496 ,	3863	},
	{	500 ,	3857	},
	{	496 ,	3852	},
	{	500 ,	3847	},
	{	496 ,	3842	},
	{	491 ,	3837	},
	{	496 ,	3833	},
	{	491 ,	3829	},
	{	497 ,	3825	},
	{	487 ,	3820	},
	{	491 ,	3817	},
	{	496 ,	3813	},
	{	501 ,	3810	},
	{	506 ,	3806	},
	{	506 ,	3803	},
	{	509 ,	3796	},
	{	517 ,	3793	},
	{	527 ,	3790	},
	{	527 ,	3787	},
	{	531 ,	3784	},
	{	531 ,	3782	},
	{	523 ,	3778	},
	{	527 ,	3775	},
	{	527 ,	3772	},
	{	523 ,	3768	},
	{	519 ,	3765	},
	{	514 ,	3761	},
	{	510 ,	3757	},
	{	506 ,	3754	},
	{	501 ,	3750	},
	{	500 ,	3746	},
	{	500 ,	3743	},
	{	504 ,	3740	},
	{	509 ,	3737	},
	{	519 ,	3734	},
	{	519 ,	3730	},
	{	523 ,	3725	},
	{	521 ,	3719	},
	{	527 ,	3714	},
	{	540 ,	3703	},
	{	531 ,	3695	},
	{	519 ,	3689	},
	{	523 ,	3687	},
	{	531 ,	3686	},
	{	553 ,	3685	},
	{	567 ,	3683	},
	{	589 ,	3681	},
	{	616 ,	3678	},
	{	629 ,	3668	},
	{	620 ,	3640	},
	{	656 ,	3600	},
	{	713 ,	3549	},
	{	806 ,	3483	}

}; 

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = 
{
	{	110 ,	4344	},
	{	310 ,	4329	},
	{	310 ,	4315	},
	{	310 ,	4302	},
	{	306 ,	4290	},
	{	306 ,	4279	},
	{	306 ,	4267	},
	{	306 ,	4256	},
	{	306 ,	4245	},
	{	306 ,	4235	},
	{	310 ,	4224	},
	{	314 ,	4204	},
	{	314 ,	4193	},
	{	314 ,	4183	},
	{	314 ,	4173	},
	{	319 ,	4163	},
	{	320 ,	4153	},
	{	323 ,	4143	},
	{	327 ,	4133	},
	{	327 ,	4123	},
	{	327 ,	4114	},
	{	333 ,	4104	},
	{	337 ,	4095	},
	{	341 ,	4086	},
	{	337 ,	4076	},
	{	341 ,	4067	},
	{	350 ,	4058	},
	{	354 ,	4049	},
	{	364 ,	4041	},
	{	369 ,	4032	},
	{	363 ,	4023	},
	{	369 ,	4014	},
	{	377 ,	3999	},
	{	380 ,	3991	},
	{	386 ,	3984	},
	{	394 ,	3976	},
	{	394 ,	3969	},
	{	403 ,	3961	},
	{	411 ,	3954	},
	{	411 ,	3946	},
	{	417 ,	3939	},
	{	421 ,	3931	},
	{	403 ,	3921	},
	{	386 ,	3912	},
	{	363 ,	3901	},
	{	340 ,	3892	},
	{	327 ,	3883	},
	{	314 ,	3875	},
	{	310 ,	3869	},
	{	306 ,	3863	},
	{	301 ,	3857	},
	{	300 ,	3852	},
	{	301 ,	3842	},
	{	297 ,	3837	},
	{	301 ,	3833	},
	{	306 ,	3829	},
	{	306 ,	3825	},
	{	306 ,	3821	},
	{	310 ,	3817	},
	{	314 ,	3813	},
	{	314 ,	3810	},
	{	319 ,	3806	},
	{	324 ,	3803	},
	{	329 ,	3800	},
	{	329 ,	3797	},
	{	341 ,	3794	},
	{	337 ,	3791	},
	{	341 ,	3788	},
	{	341 ,	3785	},
	{	346 ,	3782	},
	{	346 ,	3779	},
	{	337 ,	3775	},
	{	306 ,	3764	},
	{	293 ,	3757	},
	{	300 ,	3753	},
	{	297 ,	3748	},
	{	297 ,	3744	},
	{	300 ,	3741	},
	{	301 ,	3737	},
	{	297 ,	3733	},
	{	293 ,	3729	},
	{	297 ,	3726	},
	{	301 ,	3722	},
	{	300 ,	3719	},
	{	306 ,	3714	},
	{	297 ,	3708	},
	{	297 ,	3703	},
	{	306 ,	3698	},
	{	310 ,	3692	},
	{	310 ,	3685	},
	{	296 ,	3678	},
	{	297 ,	3677	},
	{	310 ,	3676	},
	{	341 ,	3674	},
	{	350 ,	3671	},
	{	350 ,	3666	},
	{	346 ,	3649	},
	{	373 ,	3615	},
	{	407 ,	3572	},
	{	447 ,	3517	},
	{	510 ,	3444	}

}; 

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = 
{
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	},
	{	0	,	0	}

};    

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

