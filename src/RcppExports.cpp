// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// matOmega1
arma::mat matOmega1(arma::mat W, double rho);
RcppExport SEXP saeRobust_matOmega1(SEXP WSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    __result = Rcpp::wrap(matOmega1(W, rho));
    return __result;
END_RCPP
}
// matOmega2
arma::mat matOmega2(int nTime, double rho);
RcppExport SEXP saeRobust_matOmega2(SEXP nTimeSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nTime(nTimeSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    __result = Rcpp::wrap(matOmega2(nTime, rho));
    return __result;
END_RCPP
}
// matBlockDiagonal
arma::mat matBlockDiagonal(arma::mat X, int n);
RcppExport SEXP saeRobust_matBlockDiagonal(SEXP XSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(matBlockDiagonal(X, n));
    return __result;
END_RCPP
}
// matVInvT
Rcpp::List matVInvT(arma::mat Ome1, double sigma1, double rho2, double sigma2, arma::mat Z1, arma::colvec sigmaSamplingError);
RcppExport SEXP saeRobust_matVInvT(SEXP Ome1SEXP, SEXP sigma1SEXP, SEXP rho2SEXP, SEXP sigma2SEXP, SEXP Z1SEXP, SEXP sigmaSamplingErrorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type Ome1(Ome1SEXP);
    Rcpp::traits::input_parameter< double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< double >::type rho2(rho2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sigmaSamplingError(sigmaSamplingErrorSEXP);
    __result = Rcpp::wrap(matVInvT(Ome1, sigma1, rho2, sigma2, Z1, sigmaSamplingError));
    return __result;
END_RCPP
}
// matVDerS1
arma::mat matVDerS1(arma::mat Ome1, arma::mat Z1);
RcppExport SEXP saeRobust_matVDerS1(SEXP Ome1SEXP, SEXP Z1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type Ome1(Ome1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z1(Z1SEXP);
    __result = Rcpp::wrap(matVDerS1(Ome1, Z1));
    return __result;
END_RCPP
}
// matVDerS2
arma::mat matVDerS2(arma::mat Ome2, int nDomains);
RcppExport SEXP saeRobust_matVDerS2(SEXP Ome2SEXP, SEXP nDomainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type Ome2(Ome2SEXP);
    Rcpp::traits::input_parameter< int >::type nDomains(nDomainsSEXP);
    __result = Rcpp::wrap(matVDerS2(Ome2, nDomains));
    return __result;
END_RCPP
}
// matVDerR1
arma::mat matVDerR1(double rho1, double sigma1, arma::mat Z1, arma::mat Ome1, arma::mat W);
RcppExport SEXP saeRobust_matVDerR1(SEXP rho1SEXP, SEXP sigma1SEXP, SEXP Z1SEXP, SEXP Ome1SEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type rho1(rho1SEXP);
    Rcpp::traits::input_parameter< double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ome1(Ome1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    __result = Rcpp::wrap(matVDerR1(rho1, sigma1, Z1, Ome1, W));
    return __result;
END_RCPP
}
// matVDerR2
arma::mat matVDerR2(double rho2, double sigma2, arma::mat Ome2, int nDomains);
RcppExport SEXP saeRobust_matVDerR2(SEXP rho2SEXP, SEXP sigma2SEXP, SEXP Ome2SEXP, SEXP nDomainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type rho2(rho2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ome2(Ome2SEXP);
    Rcpp::traits::input_parameter< int >::type nDomains(nDomainsSEXP);
    __result = Rcpp::wrap(matVDerR2(rho2, sigma2, Ome2, nDomains));
    return __result;
END_RCPP
}
// fixedPointSigma
arma::colvec fixedPointSigma(arma::colvec y, arma::mat X, arma::colvec beta, arma::colvec sigma, double rho, arma::mat Z1, arma::mat Ome1, arma::mat Z, arma::colvec sigmaSamplingError, double k, double K);
RcppExport SEXP saeRobust_fixedPointSigma(SEXP ySEXP, SEXP XSEXP, SEXP betaSEXP, SEXP sigmaSEXP, SEXP rhoSEXP, SEXP Z1SEXP, SEXP Ome1SEXP, SEXP ZSEXP, SEXP sigmaSamplingErrorSEXP, SEXP kSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ome1(Ome1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sigmaSamplingError(sigmaSamplingErrorSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    __result = Rcpp::wrap(fixedPointSigma(y, X, beta, sigma, rho, Z1, Ome1, Z, sigmaSamplingError, k, K));
    return __result;
END_RCPP
}