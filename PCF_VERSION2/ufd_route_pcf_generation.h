/*===================================================================================
                         Copyright (c) 1999-2007 UGS Corp.
                         Unpublished - All rights reserved
====================================================================================
=====================================================================================

    NOTE:  NX Development provides programming examples for illustration only.
    NX Development assumes you are familiar with the programming language
    demonstrated in these examples and the tools used to create and debug NX/Open
    programs.  GTAC support professionals can help explain the functionality of
    a particular procedure, but neither GTAC nor NX Development will modify
    these examples to provide added functionality or construct procedures
    to meet your specific needs.

File description:  PCF Generation Header
                   This file contains information specific to generating Alias / 
                   Isogen compliant Piping Component Files. For details on Piping
           Component File format consult the Isogen documentation.


===================================================================================*/
#ifndef UFD_ROUTE_PCF_GENERATION_H_INCLUDED
#define UFD_ROUTE_PCF_GENERATION_H_INCLUDED

#include "UFD_Routing_Plugins_Exports.h"
/*
** PCF string formats
*/
#define HEADER_FMT         "ISOGEN-FILES %s\nUNITS-BORE %s\nUNITS-CO-ORDS %s\nUNITS-BOLT-DIA %s\nUNITS-BOLT-LENGTH %s\nUNITS-WEIGHT %s\n"
#define PIPELINE_REF_FMT   "PIPELINE-REFERENCE %s\n"
#define DATE_FMT           "    DATE-DMY %s\n"
#define COMP_END_POINT_FMT      "    END-POINT %.4f %.4f %.4f %.4f\n"
#define COMP_ITEM_CODE_FMT      "    ITEM-CODE %s\n"
#define COMP_SKEY_FMT           "    SKEY %s\n"
#define COMP_WEIGHT_FMT         "    WEIGHT %.4f\n"
#define COMP_CENTER_POINT_FMT   "    CENTRE-POINT %.4f %.4f %.4f\n"
#define COMP_ANGLE_FMT          "    ANGLE %.2f\n"
#define COMP_BRANCH_POINT_FMT   "    BRANCH1-POINT %.4f %.4f %.4f %.4f\n"
#define COMP_SPINDLE_DIRECT_FMT "    SPINDLE-DIRECTION %s\n"
#define COMP_BRANCH1_POINT_FMT  "    BRANCH1-POINT %.4f %.4f %.4f %.4f\n" 
#define COMP_BRANCH2_POINT_FMT  "    BRANCH2-POINT %.4f %.4f %.4f %.4f\n" 
#define MAT_ITEM_CODE_FMT  "ITEM-CODE %s\n"
#define MAT_DESC_FMT       "    DESCRIPTION %s\n"
#define MAT_MATERIAL_FMT   "    MATERIAL %s\n"
#define MAT_SCHEDULE_FMT   "    SCHEDULE %s\n"
#define MAT_CLASS_FMT      "    CLASS %s\n"
#define MAT_RATING_FMT     "    RATING %s\n"

/*
** Misc. values
*/
#define PISOGEN_ENV_VAR          "PISOGEN"
#define DEFAULT_ISOGEN_FILES     "isogen.fls"
#define DEFAULT_OPTIONS_FILE     "final.opl"
#define DEFAULT_MISC_COMP_SKEY   "FTPL"                  /* fixed pipe; plain */
#define BEND_PIPE_ID             "BEND" 
#define BEND_PIPE_SKEY           "PB"                  /* bend, plain end */
#define ISO_BLOCK_SIZE           10
#define PCF_EXTENSION            ".pcf"
#define TEMP_MAT_EXTENSION       ".mat"
#define TEMFILES_DIR             "temfiles"
#define PISOGEN_DIR              "pisogen"
#define PROJECTS_DIR             "projects"
#define DEFAULT_ISO_TYPE         "final"
#define DEFAULT_PROJECT          "default"
#define FLS_OPTIONS_KEYWORD      "OPTION-SWITCHES-LONG "  /* needs space at end */

/*
** ISOGEN part table characteristics
*/
#define ISO_CHARX_COMP_ID_STR    "ISOGEN_COMPONENT_ID"
#define ISO_CHARX_SKEY_STR       "ISOGEN_SKEY"
#define MATERIALS                "MATERIALS"
#define CROSS_COMP_ID            "CROSS"
#define ELBOW_COMP_ID            "ELBOW"
#define GASKET_COMP_ID           "GASKET"
#define TEE_COMP_ID              "TEE"
#define VALVE_COMP_ID            "VALVE"
#define INSTRUMENT_COMP_ID       "INSTRUMENT"
#define CAP_COMP_ID              "CAP"
#define MISC_COMP_ID             "MISC-COMPONENT"
#define PIPE_ID					 "PIPE"
#define TUBE_ID					 "TUBE"
#define TEE_SET_ON_ID            "TEE-SET-ON"

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************
* Function Name: UF_ROUTE_create_pcf_data
* 
* Function Description:
*     Create an Piping Component File for the selected part.  A Piping
*     Component File (PCF) is created from the UG/Piping objects
*     and their characteristics.  
*
* Input: 
*     part_tag - tag of part used to create Isometric Drawing
* 
* Returns:
*     ERROR_OK if OK 
*     error code if error
*
***********************************************************************/
ROUTE_PLUGINSEXPORT int UF_ROUTE_create_pcf_data( void );

#ifdef __cplusplus
}
#endif

#undef EXPORTLIBRARY

#endif  /* End if UFD_ROUTE_PCF_GENERATION_H_INCLUDED */
