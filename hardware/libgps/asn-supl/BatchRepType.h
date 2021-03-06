/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-RESPONSE"
 * 	found in "../supl-triggered-response.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_BatchRepType_H_
#define	_BatchRepType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BatchRepType */
typedef struct BatchRepType {
	BOOLEAN_t	 reportPosition;
	BOOLEAN_t	 reportMeasurements;
	BOOLEAN_t	 intermediateReports;
	BOOLEAN_t	*discardOldest	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BatchRepType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BatchRepType;

#ifdef __cplusplus
}
#endif

#endif	/* _BatchRepType_H_ */
#include <asn_internal.h>
