// Copyright (c) 2009-2016 The Commercium developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COMMERCIUM_WALLET_TEST_FIXTURE_H
#define COMMERCIUM_WALLET_TEST_FIXTURE_H

#include "test/test_commercium.h"

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup : public TestingSetup {
    WalletTestingSetup(const std::string &chainName = CBaseChainParams::MAIN);
    ~WalletTestingSetup();
};

#endif
