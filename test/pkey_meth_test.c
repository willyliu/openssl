/*
 * Copyright 2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/* Internal tests for EVP_PKEY method ordering */

#include <stdio.h>
#include <string.h>

#include <openssl/evp.h>
#include "testutil.h"
#include "test_main.h"

/**********************************************************************
 *
 * Test of EVP_PKEY_ASN1 method ordering
 *
 ***/

static int test_asn1_meths()
{
    int i;
    int prev = -1;
    int good = 1;
    int pkey_id;
    const EVP_PKEY_ASN1_METHOD *ameth;

    for (i = 0; i < EVP_PKEY_asn1_get_count(); i++) {
        ameth = EVP_PKEY_asn1_get0(i);
        EVP_PKEY_asn1_get0_info(&pkey_id, NULL, NULL, NULL, NULL, ameth);
        if (pkey_id < prev)
            good = 0;
        prev = pkey_id;

    }
    if (!good) {
        fprintf(stderr, "EVP_PKEY_ASN1_METHOD table out of order!\n");
        for (i = 0; i < EVP_PKEY_asn1_get_count(); i++) {
            const char *info;

            ameth = EVP_PKEY_asn1_get0(i);
            EVP_PKEY_asn1_get0_info(&pkey_id, NULL, NULL, &info, NULL, ameth);
            if (info == NULL)
                info = "<NO NAME>";
            fprintf(stderr, "%d : %s : %s\n", pkey_id, OBJ_nid2ln(pkey_id),
                    info);
        }
    } else {
        fprintf(stderr, "Order OK\n");
    }

    return good;
}

void register_tests()
{
    ADD_TEST(test_asn1_meths);
}