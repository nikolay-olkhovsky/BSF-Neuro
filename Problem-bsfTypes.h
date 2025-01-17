/*==============================================================================
Project: Bulk Synchronous Farm (BSF)
Theme: BSF Skeleton
Module: Problem-bsfTypes.h (Predefined Problem-depended BSF Types)
Prefix: PT_bsf
Author: Leonid B. Sokolinsky
This source code is a part of BSF Skeleton (https://github.com/leonid-sokolinsky/BSF-skeleton)
==============================================================================*/
#pragma once
#include "Problem-Types.h"		// Problem Types 
//=========================== BSF Types =========================
struct PT_bsf_parameter_T {		// Order parameters
	PT_integer k;		// Number of point
	PT_vector z;		// Center of receptive field
};

struct PT_bsf_mapElem_T {		// Type of map-list elements
	int inequalityNo;
};

struct PT_bsf_reduceElem_T {	// Type of reduce-list elements for Job 0 (default)	
	PT_float objectiveDistance;
	PT_vector g;
	PT_vector base;
};

struct PT_bsf_reduceElem_T_1 {	// Type of reduce-list elements for Job 1
	// Optional filling. Do not delete!
};

struct PT_bsf_reduceElem_T_2 {	// Type of reduce-list elements for Job 2
	// Optional filling. Do not delete!
};

struct PT_bsf_reduceElem_T_3 {	// Type of reduce-list elements for Job 3
	// Optional filling. Do not delete!
};