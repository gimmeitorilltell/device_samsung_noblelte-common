/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UTCmodelSet4_H_
#define	_UTCmodelSet4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTCmodelSet4 */
typedef struct UTCmodelSet4 {
	long	 utcA1wnt;
	long	 utcA0wnt;
	long	 utcTot;
	long	 utcWNt;
	long	 utcDeltaTls;
	long	 utcWNlsf;
	long	 utcDN;
	long	 utcDeltaTlsf;
	long	 utcStandardID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTCmodelSet4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTCmodelSet4;

#ifdef __cplusplus
}
#endif

#endif	/* _UTCmodelSet4_H_ */
#include <asn_internal.h>
