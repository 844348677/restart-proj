#ifndef MYCTPTRADERSPI_H_INCLUDED
#define MYCTPTRADERSPI_H_INCLUDED

class MyCTPTraderSpi : public CThostFtdcTraderSpi
{
    public:
        QCTPTraderSpi(CThostFtdcTraderApi *pUserApi);


    private:
        CThostFtdcMdApi * m_pUserApi;
}


#endif // MYCTPTRADERSPI_H_INCLUDED
