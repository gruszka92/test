#pragma once
#include "wys_cyf.h"
#include "wys_wskaz.h"
#include "volt.h"
#include "mier_temp_term.h"
#include "mier_temp_rtec.h"
#include "urz_SOAP.h"
#include "urz_USB.h"
class volt_cyf_SOAP : public wys_cyf, public volt, public urz_SOAP
{
public:
	volt_cyf_SOAP();
	~volt_cyf_SOAP();
};

class temp_termo_wsk_USB : public wys_wskaz, public mier_temp_term, public urz_USB
{

};

class temp_rtec_wsk : public wys_wskaz, public mier_temp_rtec
{

};

