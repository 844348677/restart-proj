#include <iostream>
#include <string.h>
#include <stdio.h>
#include "MyCTPMdSpi.h"
#include "api/ctp/ThostFtdcMdApi.h"

using namespace std;

MyCTPMdSpi::MyCTPMdSpi(CThostFtdcMdApi *pUserApi):m_pUserApi(pUserApi){}
MyCTPMdSpi::~MyCTPMdSpi(){}

void MyCTPMdSpi::OnFrontConnected(){
    cout << "OnFrontConnected:" << endl;

    //请求登陆
    CThostFtdcReqUserLoginField reqUserLogin;
    memset(&reqUserLogin,0,sizeof(reqUserLogin));
    strcpy(reqUserLogin.BrokerID,"9999");
    strcpy(reqUserLogin.UserID,"065801");
    strcpy(reqUserLogin.Password,"123456");
    int ret = m_pUserApi->ReqUserLogin(&reqUserLogin,0);

}

void MyCTPMdSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
    cout << "OnRspUserLogin:"<< endl;
    cout << "ErrorCode= " << pRspInfo->ErrorID << " ,ErrorMsg= " << pRspInfo->ErrorMsg << endl;
    cout << "RequestID= " <<nRequestID << " ,Chain= " <<bIsLast << endl;
    if(pRspInfo->ErrorID != 0){
        cout << "Faileed to login,errorcode= " << pRspInfo->ErrorID << " ,errormsg= " <<pRspInfo->ErrorMsg << " requestid= " << nRequestID
        << " ,chian= " << bIsLast << endl;
    }
    cout << "Login success.Begin receiving data" << endl;


}
