// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppSMC.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// blockpfGaussianOpt_impl
Rcpp::List blockpfGaussianOpt_impl(arma::vec data, long part, long lag);
RcppExport SEXP _RcppSMC_blockpfGaussianOpt_impl(SEXP dataSEXP, SEXP partSEXP, SEXP lagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type data(dataSEXP);
    Rcpp::traits::input_parameter< long >::type part(partSEXP);
    Rcpp::traits::input_parameter< long >::type lag(lagSEXP);
    rcpp_result_gen = Rcpp::wrap(blockpfGaussianOpt_impl(data, part, lag));
    return rcpp_result_gen;
END_RCPP
}
// LinReg_impl
Rcpp::List LinReg_impl(arma::mat Data, unsigned long lNumber);
RcppExport SEXP _RcppSMC_LinReg_impl(SEXP DataSEXP, SEXP lNumberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type lNumber(lNumberSEXP);
    rcpp_result_gen = Rcpp::wrap(LinReg_impl(Data, lNumber));
    return rcpp_result_gen;
END_RCPP
}
// LinRegLA_adapt_impl
Rcpp::List LinRegLA_adapt_impl(arma::mat Data, unsigned long lNumber, double resampTol, double tempTol);
RcppExport SEXP _RcppSMC_LinRegLA_adapt_impl(SEXP DataSEXP, SEXP lNumberSEXP, SEXP resampTolSEXP, SEXP tempTolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type lNumber(lNumberSEXP);
    Rcpp::traits::input_parameter< double >::type resampTol(resampTolSEXP);
    Rcpp::traits::input_parameter< double >::type tempTol(tempTolSEXP);
    rcpp_result_gen = Rcpp::wrap(LinRegLA_adapt_impl(Data, lNumber, resampTol, tempTol));
    return rcpp_result_gen;
END_RCPP
}
// LinRegLA_impl
Rcpp::List LinRegLA_impl(arma::mat Data, arma::vec intemps, unsigned long lNumber);
RcppExport SEXP _RcppSMC_LinRegLA_impl(SEXP DataSEXP, SEXP intempsSEXP, SEXP lNumberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type intemps(intempsSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type lNumber(lNumberSEXP);
    rcpp_result_gen = Rcpp::wrap(LinRegLA_impl(Data, intemps, lNumber));
    return rcpp_result_gen;
END_RCPP
}
// nonLinPMMH_impl
Rcpp::DataFrame nonLinPMMH_impl(arma::vec data, unsigned long lNumber, unsigned long lMCMCits, bool verbouse);
RcppExport SEXP _RcppSMC_nonLinPMMH_impl(SEXP dataSEXP, SEXP lNumberSEXP, SEXP lMCMCitsSEXP, SEXP verbouseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type lNumber(lNumberSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type lMCMCits(lMCMCitsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbouse(verbouseSEXP);
    rcpp_result_gen = Rcpp::wrap(nonLinPMMH_impl(data, lNumber, lMCMCits, verbouse));
    return rcpp_result_gen;
END_RCPP
}
// pfLineartBS_impl
Rcpp::DataFrame pfLineartBS_impl(arma::mat data, unsigned long part, bool usef, Rcpp::Function fun);
RcppExport SEXP _RcppSMC_pfLineartBS_impl(SEXP dataSEXP, SEXP partSEXP, SEXP usefSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned long >::type part(partSEXP);
    Rcpp::traits::input_parameter< bool >::type usef(usefSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(pfLineartBS_impl(data, part, usef, fun));
    return rcpp_result_gen;
END_RCPP
}
// pfNonlinBS_impl
Rcpp::List pfNonlinBS_impl(arma::vec data, long part);
RcppExport SEXP _RcppSMC_pfNonlinBS_impl(SEXP dataSEXP, SEXP partSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type data(dataSEXP);
    Rcpp::traits::input_parameter< long >::type part(partSEXP);
    rcpp_result_gen = Rcpp::wrap(pfNonlinBS_impl(data, part));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppSMC_blockpfGaussianOpt_impl", (DL_FUNC) &_RcppSMC_blockpfGaussianOpt_impl, 3},
    {"_RcppSMC_LinReg_impl", (DL_FUNC) &_RcppSMC_LinReg_impl, 2},
    {"_RcppSMC_LinRegLA_adapt_impl", (DL_FUNC) &_RcppSMC_LinRegLA_adapt_impl, 4},
    {"_RcppSMC_LinRegLA_impl", (DL_FUNC) &_RcppSMC_LinRegLA_impl, 3},
    {"_RcppSMC_nonLinPMMH_impl", (DL_FUNC) &_RcppSMC_nonLinPMMH_impl, 4},
    {"_RcppSMC_pfLineartBS_impl", (DL_FUNC) &_RcppSMC_pfLineartBS_impl, 4},
    {"_RcppSMC_pfNonlinBS_impl", (DL_FUNC) &_RcppSMC_pfNonlinBS_impl, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppSMC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
