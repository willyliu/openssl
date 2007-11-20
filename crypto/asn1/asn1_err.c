/* crypto/asn1/asn1_err.c */
/* ====================================================================
 * Copyright (c) 1999-2007 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/asn1.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

#define ERR_FUNC(func) ERR_PACK(ERR_LIB_ASN1,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_ASN1,0,reason)

static ERR_STRING_DATA ASN1_str_functs[]=
	{
{ERR_FUNC(ASN1_F_A2D_ASN1_OBJECT),	"a2d_ASN1_OBJECT"},
{ERR_FUNC(ASN1_F_A2I_ASN1_ENUMERATED),	"a2i_ASN1_ENUMERATED"},
{ERR_FUNC(ASN1_F_A2I_ASN1_INTEGER),	"a2i_ASN1_INTEGER"},
{ERR_FUNC(ASN1_F_A2I_ASN1_STRING),	"a2i_ASN1_STRING"},
{ERR_FUNC(ASN1_F_APPEND_EXP),	"APPEND_EXP"},
{ERR_FUNC(ASN1_F_ASN1_BIT_STRING_SET_BIT),	"ASN1_BIT_STRING_set_bit"},
{ERR_FUNC(ASN1_F_ASN1_CB),	"ASN1_CB"},
{ERR_FUNC(ASN1_F_ASN1_CHECK_TLEN),	"ASN1_CHECK_TLEN"},
{ERR_FUNC(ASN1_F_ASN1_COLLATE_PRIMITIVE),	"ASN1_COLLATE_PRIMITIVE"},
{ERR_FUNC(ASN1_F_ASN1_COLLECT),	"ASN1_COLLECT"},
{ERR_FUNC(ASN1_F_ASN1_D2I_EX_PRIMITIVE),	"ASN1_D2I_EX_PRIMITIVE"},
{ERR_FUNC(ASN1_F_ASN1_D2I_FP),	"ASN1_d2i_fp"},
{ERR_FUNC(ASN1_F_ASN1_D2I_READ_BIO),	"ASN1_D2I_READ_BIO"},
{ERR_FUNC(ASN1_F_ASN1_DIGEST),	"ASN1_digest"},
{ERR_FUNC(ASN1_F_ASN1_DO_ADB),	"ASN1_DO_ADB"},
{ERR_FUNC(ASN1_F_ASN1_DUP),	"ASN1_dup"},
{ERR_FUNC(ASN1_F_ASN1_ENUMERATED_SET),	"ASN1_ENUMERATED_set"},
{ERR_FUNC(ASN1_F_ASN1_ENUMERATED_TO_BN),	"ASN1_ENUMERATED_to_BN"},
{ERR_FUNC(ASN1_F_ASN1_EX_C2I),	"ASN1_EX_C2I"},
{ERR_FUNC(ASN1_F_ASN1_FIND_END),	"ASN1_FIND_END"},
{ERR_FUNC(ASN1_F_ASN1_GENERALIZEDTIME_SET),	"ASN1_GENERALIZEDTIME_set"},
{ERR_FUNC(ASN1_F_ASN1_GENERATE_V3),	"ASN1_generate_v3"},
{ERR_FUNC(ASN1_F_ASN1_GET_OBJECT),	"ASN1_get_object"},
{ERR_FUNC(ASN1_F_ASN1_HEADER_NEW),	"ASN1_HEADER_NEW"},
{ERR_FUNC(ASN1_F_ASN1_I2D_BIO),	"ASN1_i2d_bio"},
{ERR_FUNC(ASN1_F_ASN1_I2D_FP),	"ASN1_i2d_fp"},
{ERR_FUNC(ASN1_F_ASN1_INTEGER_SET),	"ASN1_INTEGER_set"},
{ERR_FUNC(ASN1_F_ASN1_INTEGER_TO_BN),	"ASN1_INTEGER_to_BN"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_D2I_FP),	"ASN1_item_d2i_fp"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_DUP),	"ASN1_item_dup"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_EX_COMBINE_NEW),	"ASN1_ITEM_EX_COMBINE_NEW"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_EX_D2I),	"ASN1_ITEM_EX_D2I"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_I2D_BIO),	"ASN1_item_i2d_bio"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_I2D_FP),	"ASN1_item_i2d_fp"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_PACK),	"ASN1_item_pack"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_SIGN),	"ASN1_item_sign"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_UNPACK),	"ASN1_item_unpack"},
{ERR_FUNC(ASN1_F_ASN1_ITEM_VERIFY),	"ASN1_item_verify"},
{ERR_FUNC(ASN1_F_ASN1_MBSTRING_NCOPY),	"ASN1_mbstring_ncopy"},
{ERR_FUNC(ASN1_F_ASN1_OBJECT_NEW),	"ASN1_OBJECT_new"},
{ERR_FUNC(ASN1_F_ASN1_PACK_STRING),	"ASN1_pack_string"},
{ERR_FUNC(ASN1_F_ASN1_PCTX_NEW),	"ASN1_PCTX_new"},
{ERR_FUNC(ASN1_F_ASN1_PKCS5_PBE_SET),	"ASN1_PKCS5_PBE_SET"},
{ERR_FUNC(ASN1_F_ASN1_SEQ_PACK),	"ASN1_seq_pack"},
{ERR_FUNC(ASN1_F_ASN1_SEQ_UNPACK),	"ASN1_seq_unpack"},
{ERR_FUNC(ASN1_F_ASN1_SIGN),	"ASN1_sign"},
{ERR_FUNC(ASN1_F_ASN1_STR2TYPE),	"ASN1_STR2TYPE"},
{ERR_FUNC(ASN1_F_ASN1_STRING_SET),	"ASN1_STRING_set"},
{ERR_FUNC(ASN1_F_ASN1_STRING_TABLE_ADD),	"ASN1_STRING_TABLE_add"},
{ERR_FUNC(ASN1_F_ASN1_STRING_TYPE_NEW),	"ASN1_STRING_type_new"},
{ERR_FUNC(ASN1_F_ASN1_TEMPLATE_EX_D2I),	"ASN1_TEMPLATE_EX_D2I"},
{ERR_FUNC(ASN1_F_ASN1_TEMPLATE_NEW),	"ASN1_TEMPLATE_NEW"},
{ERR_FUNC(ASN1_F_ASN1_TEMPLATE_NOEXP_D2I),	"ASN1_TEMPLATE_NOEXP_D2I"},
{ERR_FUNC(ASN1_F_ASN1_TIME_SET),	"ASN1_TIME_set"},
{ERR_FUNC(ASN1_F_ASN1_TYPE_GET_INT_OCTETSTRING),	"ASN1_TYPE_get_int_octetstring"},
{ERR_FUNC(ASN1_F_ASN1_TYPE_GET_OCTETSTRING),	"ASN1_TYPE_get_octetstring"},
{ERR_FUNC(ASN1_F_ASN1_UNPACK_STRING),	"ASN1_unpack_string"},
{ERR_FUNC(ASN1_F_ASN1_UTCTIME_SET),	"ASN1_UTCTIME_set"},
{ERR_FUNC(ASN1_F_ASN1_VERIFY),	"ASN1_verify"},
{ERR_FUNC(ASN1_F_BITSTR_CB),	"BITSTR_CB"},
{ERR_FUNC(ASN1_F_BN_TO_ASN1_ENUMERATED),	"BN_to_ASN1_ENUMERATED"},
{ERR_FUNC(ASN1_F_BN_TO_ASN1_INTEGER),	"BN_to_ASN1_INTEGER"},
{ERR_FUNC(ASN1_F_C2I_ASN1_BIT_STRING),	"c2i_ASN1_BIT_STRING"},
{ERR_FUNC(ASN1_F_C2I_ASN1_INTEGER),	"c2i_ASN1_INTEGER"},
{ERR_FUNC(ASN1_F_C2I_ASN1_OBJECT),	"c2i_ASN1_OBJECT"},
{ERR_FUNC(ASN1_F_COLLECT_DATA),	"COLLECT_DATA"},
{ERR_FUNC(ASN1_F_D2I_ASN1_BIT_STRING),	"D2I_ASN1_BIT_STRING"},
{ERR_FUNC(ASN1_F_D2I_ASN1_BOOLEAN),	"d2i_ASN1_BOOLEAN"},
{ERR_FUNC(ASN1_F_D2I_ASN1_BYTES),	"d2i_ASN1_bytes"},
{ERR_FUNC(ASN1_F_D2I_ASN1_GENERALIZEDTIME),	"D2I_ASN1_GENERALIZEDTIME"},
{ERR_FUNC(ASN1_F_D2I_ASN1_HEADER),	"D2I_ASN1_HEADER"},
{ERR_FUNC(ASN1_F_D2I_ASN1_INTEGER),	"D2I_ASN1_INTEGER"},
{ERR_FUNC(ASN1_F_D2I_ASN1_OBJECT),	"d2i_ASN1_OBJECT"},
{ERR_FUNC(ASN1_F_D2I_ASN1_SET),	"d2i_ASN1_SET"},
{ERR_FUNC(ASN1_F_D2I_ASN1_TYPE_BYTES),	"d2i_ASN1_type_bytes"},
{ERR_FUNC(ASN1_F_D2I_ASN1_UINTEGER),	"d2i_ASN1_UINTEGER"},
{ERR_FUNC(ASN1_F_D2I_ASN1_UTCTIME),	"D2I_ASN1_UTCTIME"},
{ERR_FUNC(ASN1_F_D2I_AUTOPRIVATEKEY),	"d2i_AutoPrivateKey"},
{ERR_FUNC(ASN1_F_D2I_NETSCAPE_RSA),	"d2i_Netscape_RSA"},
{ERR_FUNC(ASN1_F_D2I_NETSCAPE_RSA_2),	"D2I_NETSCAPE_RSA_2"},
{ERR_FUNC(ASN1_F_D2I_PRIVATEKEY),	"d2i_PrivateKey"},
{ERR_FUNC(ASN1_F_D2I_PUBLICKEY),	"d2i_PublicKey"},
{ERR_FUNC(ASN1_F_D2I_RSA_NET),	"d2i_RSA_NET"},
{ERR_FUNC(ASN1_F_D2I_RSA_NET_2),	"D2I_RSA_NET_2"},
{ERR_FUNC(ASN1_F_D2I_X509),	"D2I_X509"},
{ERR_FUNC(ASN1_F_D2I_X509_CINF),	"D2I_X509_CINF"},
{ERR_FUNC(ASN1_F_D2I_X509_PKEY),	"d2i_X509_PKEY"},
{ERR_FUNC(ASN1_F_I2D_ASN1_SET),	"i2d_ASN1_SET"},
{ERR_FUNC(ASN1_F_I2D_ASN1_TIME),	"I2D_ASN1_TIME"},
{ERR_FUNC(ASN1_F_I2D_DSA_PUBKEY),	"i2d_DSA_PUBKEY"},
{ERR_FUNC(ASN1_F_I2D_EC_PUBKEY),	"i2d_EC_PUBKEY"},
{ERR_FUNC(ASN1_F_I2D_PRIVATEKEY),	"i2d_PrivateKey"},
{ERR_FUNC(ASN1_F_I2D_PUBLICKEY),	"i2d_PublicKey"},
{ERR_FUNC(ASN1_F_I2D_RSA_NET),	"i2d_RSA_NET"},
{ERR_FUNC(ASN1_F_I2D_RSA_PUBKEY),	"i2d_RSA_PUBKEY"},
{ERR_FUNC(ASN1_F_LONG_C2I),	"LONG_C2I"},
{ERR_FUNC(ASN1_F_OID_MODULE_INIT),	"OID_MODULE_INIT"},
{ERR_FUNC(ASN1_F_PARSE_TAGGING),	"PARSE_TAGGING"},
{ERR_FUNC(ASN1_F_PKCS5_PBE2_SET_IV),	"PKCS5_pbe2_set_iv"},
{ERR_FUNC(ASN1_F_PKCS5_PBE_SET),	"PKCS5_pbe_set"},
{ERR_FUNC(ASN1_F_X509_CINF_NEW),	"X509_CINF_NEW"},
{ERR_FUNC(ASN1_F_X509_CRL_ADD0_REVOKED),	"X509_CRL_add0_revoked"},
{ERR_FUNC(ASN1_F_X509_INFO_NEW),	"X509_INFO_new"},
{ERR_FUNC(ASN1_F_X509_NAME_ENCODE),	"X509_NAME_ENCODE"},
{ERR_FUNC(ASN1_F_X509_NAME_EX_D2I),	"X509_NAME_EX_D2I"},
{ERR_FUNC(ASN1_F_X509_NAME_EX_NEW),	"X509_NAME_EX_NEW"},
{ERR_FUNC(ASN1_F_X509_NEW),	"X509_NEW"},
{ERR_FUNC(ASN1_F_X509_PKEY_NEW),	"X509_PKEY_new"},
{0,NULL}
	};

static ERR_STRING_DATA ASN1_str_reasons[]=
	{
{ERR_REASON(ASN1_R_ADDING_OBJECT)        ,"adding object"},
{ERR_REASON(ASN1_R_AUX_ERROR)            ,"aux error"},
{ERR_REASON(ASN1_R_BAD_CLASS)            ,"bad class"},
{ERR_REASON(ASN1_R_BAD_OBJECT_HEADER)    ,"bad object header"},
{ERR_REASON(ASN1_R_BAD_PASSWORD_READ)    ,"bad password read"},
{ERR_REASON(ASN1_R_BAD_TAG)              ,"bad tag"},
{ERR_REASON(ASN1_R_BN_LIB)               ,"bn lib"},
{ERR_REASON(ASN1_R_BOOLEAN_IS_WRONG_LENGTH),"boolean is wrong length"},
{ERR_REASON(ASN1_R_BUFFER_TOO_SMALL)     ,"buffer too small"},
{ERR_REASON(ASN1_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER),"cipher has no object identifier"},
{ERR_REASON(ASN1_R_DATA_IS_WRONG)        ,"data is wrong"},
{ERR_REASON(ASN1_R_DECODE_ERROR)         ,"decode error"},
{ERR_REASON(ASN1_R_DECODING_ERROR)       ,"decoding error"},
{ERR_REASON(ASN1_R_DEPTH_EXCEEDED)       ,"depth exceeded"},
{ERR_REASON(ASN1_R_DIGEST_AND_KEY_TYPE_NOT_SUPPORTED),"digest and key type not supported"},
{ERR_REASON(ASN1_R_ENCODE_ERROR)         ,"encode error"},
{ERR_REASON(ASN1_R_ERROR_GETTING_TIME)   ,"error getting time"},
{ERR_REASON(ASN1_R_ERROR_LOADING_SECTION),"error loading section"},
{ERR_REASON(ASN1_R_ERROR_PARSING_SET_ELEMENT),"error parsing set element"},
{ERR_REASON(ASN1_R_ERROR_SETTING_CIPHER_PARAMS),"error setting cipher params"},
{ERR_REASON(ASN1_R_EXPECTING_AN_INTEGER) ,"expecting an integer"},
{ERR_REASON(ASN1_R_EXPECTING_AN_OBJECT)  ,"expecting an object"},
{ERR_REASON(ASN1_R_EXPECTING_A_BOOLEAN)  ,"expecting a boolean"},
{ERR_REASON(ASN1_R_EXPECTING_A_TIME)     ,"expecting a time"},
{ERR_REASON(ASN1_R_EXPLICIT_LENGTH_MISMATCH),"explicit length mismatch"},
{ERR_REASON(ASN1_R_EXPLICIT_TAG_NOT_CONSTRUCTED),"explicit tag not constructed"},
{ERR_REASON(ASN1_R_FIELD_MISSING)        ,"field missing"},
{ERR_REASON(ASN1_R_FIRST_NUM_TOO_LARGE)  ,"first num too large"},
{ERR_REASON(ASN1_R_HEADER_TOO_LONG)      ,"header too long"},
{ERR_REASON(ASN1_R_ILLEGAL_BITSTRING_FORMAT),"illegal bitstring format"},
{ERR_REASON(ASN1_R_ILLEGAL_BOOLEAN)      ,"illegal boolean"},
{ERR_REASON(ASN1_R_ILLEGAL_CHARACTERS)   ,"illegal characters"},
{ERR_REASON(ASN1_R_ILLEGAL_FORMAT)       ,"illegal format"},
{ERR_REASON(ASN1_R_ILLEGAL_HEX)          ,"illegal hex"},
{ERR_REASON(ASN1_R_ILLEGAL_IMPLICIT_TAG) ,"illegal implicit tag"},
{ERR_REASON(ASN1_R_ILLEGAL_INTEGER)      ,"illegal integer"},
{ERR_REASON(ASN1_R_ILLEGAL_NESTED_TAGGING),"illegal nested tagging"},
{ERR_REASON(ASN1_R_ILLEGAL_NULL)         ,"illegal null"},
{ERR_REASON(ASN1_R_ILLEGAL_NULL_VALUE)   ,"illegal null value"},
{ERR_REASON(ASN1_R_ILLEGAL_OBJECT)       ,"illegal object"},
{ERR_REASON(ASN1_R_ILLEGAL_OPTIONAL_ANY) ,"illegal optional any"},
{ERR_REASON(ASN1_R_ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE),"illegal options on item template"},
{ERR_REASON(ASN1_R_ILLEGAL_TAGGED_ANY)   ,"illegal tagged any"},
{ERR_REASON(ASN1_R_ILLEGAL_TIME_VALUE)   ,"illegal time value"},
{ERR_REASON(ASN1_R_INTEGER_NOT_ASCII_FORMAT),"integer not ascii format"},
{ERR_REASON(ASN1_R_INTEGER_TOO_LARGE_FOR_LONG),"integer too large for long"},
{ERR_REASON(ASN1_R_INVALID_BMPSTRING_LENGTH),"invalid bmpstring length"},
{ERR_REASON(ASN1_R_INVALID_DIGIT)        ,"invalid digit"},
{ERR_REASON(ASN1_R_INVALID_MODIFIER)     ,"invalid modifier"},
{ERR_REASON(ASN1_R_INVALID_NUMBER)       ,"invalid number"},
{ERR_REASON(ASN1_R_INVALID_SEPARATOR)    ,"invalid separator"},
{ERR_REASON(ASN1_R_INVALID_TIME_FORMAT)  ,"invalid time format"},
{ERR_REASON(ASN1_R_INVALID_UNIVERSALSTRING_LENGTH),"invalid universalstring length"},
{ERR_REASON(ASN1_R_INVALID_UTF8STRING)   ,"invalid utf8string"},
{ERR_REASON(ASN1_R_IV_TOO_LARGE)         ,"iv too large"},
{ERR_REASON(ASN1_R_LENGTH_ERROR)         ,"length error"},
{ERR_REASON(ASN1_R_LIST_ERROR)           ,"list error"},
{ERR_REASON(ASN1_R_MISSING_EOC)          ,"missing eoc"},
{ERR_REASON(ASN1_R_MISSING_SECOND_NUMBER),"missing second number"},
{ERR_REASON(ASN1_R_MISSING_VALUE)        ,"missing value"},
{ERR_REASON(ASN1_R_MSTRING_NOT_UNIVERSAL),"mstring not universal"},
{ERR_REASON(ASN1_R_MSTRING_WRONG_TAG)    ,"mstring wrong tag"},
{ERR_REASON(ASN1_R_NESTED_ASN1_STRING)   ,"nested asn1 string"},
{ERR_REASON(ASN1_R_NON_HEX_CHARACTERS)   ,"non hex characters"},
{ERR_REASON(ASN1_R_NOT_ASCII_FORMAT)     ,"not ascii format"},
{ERR_REASON(ASN1_R_NOT_ENOUGH_DATA)      ,"not enough data"},
{ERR_REASON(ASN1_R_NO_DEFAULT_DIGEST)    ,"no default digest"},
{ERR_REASON(ASN1_R_NO_MATCHING_CHOICE_TYPE),"no matching choice type"},
{ERR_REASON(ASN1_R_NULL_IS_WRONG_LENGTH) ,"null is wrong length"},
{ERR_REASON(ASN1_R_OBJECT_NOT_ASCII_FORMAT),"object not ascii format"},
{ERR_REASON(ASN1_R_ODD_NUMBER_OF_CHARS)  ,"odd number of chars"},
{ERR_REASON(ASN1_R_PRIVATE_KEY_HEADER_MISSING),"private key header missing"},
{ERR_REASON(ASN1_R_SECOND_NUMBER_TOO_LARGE),"second number too large"},
{ERR_REASON(ASN1_R_SEQUENCE_LENGTH_MISMATCH),"sequence length mismatch"},
{ERR_REASON(ASN1_R_SEQUENCE_NOT_CONSTRUCTED),"sequence not constructed"},
{ERR_REASON(ASN1_R_SEQUENCE_OR_SET_NEEDS_CONFIG),"sequence or set needs config"},
{ERR_REASON(ASN1_R_SHORT_LINE)           ,"short line"},
{ERR_REASON(ASN1_R_STRING_TOO_LONG)      ,"string too long"},
{ERR_REASON(ASN1_R_STRING_TOO_SHORT)     ,"string too short"},
{ERR_REASON(ASN1_R_TAG_VALUE_TOO_HIGH)   ,"tag value too high"},
{ERR_REASON(ASN1_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD),"the asn1 object identifier is not known for this md"},
{ERR_REASON(ASN1_R_TIME_NOT_ASCII_FORMAT),"time not ascii format"},
{ERR_REASON(ASN1_R_TOO_LONG)             ,"too long"},
{ERR_REASON(ASN1_R_TYPE_NOT_CONSTRUCTED) ,"type not constructed"},
{ERR_REASON(ASN1_R_UNABLE_TO_DECODE_RSA_KEY),"unable to decode rsa key"},
{ERR_REASON(ASN1_R_UNABLE_TO_DECODE_RSA_PRIVATE_KEY),"unable to decode rsa private key"},
{ERR_REASON(ASN1_R_UNEXPECTED_EOC)       ,"unexpected eoc"},
{ERR_REASON(ASN1_R_UNKNOWN_FORMAT)       ,"unknown format"},
{ERR_REASON(ASN1_R_UNKNOWN_MESSAGE_DIGEST_ALGORITHM),"unknown message digest algorithm"},
{ERR_REASON(ASN1_R_UNKNOWN_OBJECT_TYPE)  ,"unknown object type"},
{ERR_REASON(ASN1_R_UNKNOWN_PUBLIC_KEY_TYPE),"unknown public key type"},
{ERR_REASON(ASN1_R_UNKNOWN_SIGNATURE_ALGORITHM),"unknown signature algorithm"},
{ERR_REASON(ASN1_R_UNKNOWN_TAG)          ,"unknown tag"},
{ERR_REASON(ASN1_R_UNKOWN_FORMAT)        ,"unkown format"},
{ERR_REASON(ASN1_R_UNSUPPORTED_ANY_DEFINED_BY_TYPE),"unsupported any defined by type"},
{ERR_REASON(ASN1_R_UNSUPPORTED_CIPHER)   ,"unsupported cipher"},
{ERR_REASON(ASN1_R_UNSUPPORTED_ENCRYPTION_ALGORITHM),"unsupported encryption algorithm"},
{ERR_REASON(ASN1_R_UNSUPPORTED_PUBLIC_KEY_TYPE),"unsupported public key type"},
{ERR_REASON(ASN1_R_UNSUPPORTED_TYPE)     ,"unsupported type"},
{ERR_REASON(ASN1_R_WRONG_PUBLIC_KEY_TYPE),"wrong public key type"},
{ERR_REASON(ASN1_R_WRONG_TAG)            ,"wrong tag"},
{ERR_REASON(ASN1_R_WRONG_TYPE)           ,"wrong type"},
{0,NULL}
	};

#endif

void ERR_load_ASN1_strings(void)
	{
#ifndef OPENSSL_NO_ERR

	if (ERR_func_error_string(ASN1_str_functs[0].error) == NULL)
		{
		ERR_load_strings(0,ASN1_str_functs);
		ERR_load_strings(0,ASN1_str_reasons);
		}
#endif
	}
