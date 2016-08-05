#include <iostream>
#include "api/ctp/ThostFtdcMdApi.h"
#include "api/ctp/ThostFtdcTraderApi.h"
#include "api/ctp/ThostFtdcUserApiDataType.h"
#include "api/ctp/ThostFtdcUserApiStruct.h"
#include "MyCTPMdSpi.cpp"

using namespace std;

void testConnect();

int main()
{
    cout << "Hello world1!" << endl;

    testConnect();

    return 0;
}
void testConnect(){
    cout << "testConnect():" << endl;
    CThostFtdcMdApi* pUserApi = CThostFtdcMdApi::CreateFtdcMdApi("./outfile/",true);
    MyCTPMdSpi sh(pUserApi);
    pUserApi->RegisterSpi(&sh);

    pUserApi->RegisterFront("tcp://180.168.146.187:10010");
    pUserApi->Init();
    pUserApi->Join();
}
