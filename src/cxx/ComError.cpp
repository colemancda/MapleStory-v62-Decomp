#include "ComError.h"

_com_error::_com_error(HRESULT hr, IErrorInfo *perrinfo, bool fAddRef) throw()
    : m_hresult(hr), m_perrinfo(perrinfo), m_pszMsg(0)
{
    if (m_perrinfo != 0 && fAddRef)
        m_perrinfo->AddRef();
}

_com_error::_com_error(const _com_error &that) throw()
    : m_hresult(that.m_hresult), m_perrinfo(that.m_perrinfo), m_pszMsg(0)
{
    if (m_perrinfo != 0)
        m_perrinfo->AddRef();
}

_com_error::~_com_error() throw()
{
    if (m_perrinfo != 0)
        m_perrinfo->Release();
    if (m_pszMsg != 0)
        LocalFree(m_pszMsg);
}

typedef char size_check_com_error[sizeof(_com_error) == 16 ? 1 : -1];
