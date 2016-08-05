#ifndef MYCTPMDSPI_H_INCLUDED
#define MYCTPMDSPI_H_INCLUDED

class MyCTPMdSpi : public CThostFtdcMdSpi
{
    public:
        MyCTPMdSpi(CThostFtdcMdApi *pUserApi);
        ~MyCTPMdSpi();
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
        virtual void OnFrontConnected();
	///登录请求响应
        virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    private:

        CThostFtdcMdApi * m_pUserApi;
};

#endif // MYCTPMDSPI_H_INCLUDED
