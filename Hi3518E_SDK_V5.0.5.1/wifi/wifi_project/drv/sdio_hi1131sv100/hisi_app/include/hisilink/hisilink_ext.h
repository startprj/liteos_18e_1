/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : hisilink_ext.h
  �� �� ��   : ����
  ��    ��   : 
  ��������   : 2016��6��27��
  ����޸�   :
  ��������   : hisilink_ext.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2016��6��27��
    ��    ��   : 
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __HISILINK_EXT_H__
#define __HISILINK_EXT_H__
#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif
#endif
/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "hisilink_lib.h"
#include "driver_hisi_lib_api.h"
/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define HSL_PRINT_DEBUG
#ifdef HSL_PRINT_DEBUG
#define HSL_PRINT_INFO    printf
#define HSL_PRINT_WARNING printf
#define HSL_PRINT_ERROR   printf
#else
#define HSL_PRINT_INFO(fmt, arg...)    HISI_PRINT_INFO(fmt, ##arg)
#define HSL_PRINT_WARNING(fmt, arg...) HISI_PRINT_WARNING(fmt, ##arg)
#define HSL_PRINT_ERROR(fmt, arg...)   HISI_PRINT_ERROR(fmt, ##arg)
#endif
/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
hsl_uint32 hsl_memcpy(void * p_dest, void * p_src, hsl_uint32 ul_len);
hsl_uint32 hsl_memset(void * p_src, hsl_int32 l_data, hsl_uint32 ul_len);
hsl_uint32 hsl_get_time(void);
hsl_uint8* hsl_get_macaddr(void);
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif //__HISILINK_EXT_H__

