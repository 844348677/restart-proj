#include <iostream>
#include <string.h>
#include <stdio.h>
#include "MyCTPTraderSpi.h"
#include "api/ctp/ThostFtdcTraderApi.h"

using namespace std;

MyCTPTraderSpi::MyCTPTraderSpi(CThostFtdcTraderApi *pUserApi) : m_pUserApi(pUserApi){}
