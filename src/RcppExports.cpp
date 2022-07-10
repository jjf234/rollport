// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// roll_max_return
NumericMatrix roll_max_return(const NumericMatrix& mu, const NumericVector& sigma, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rollport_roll_max_return(SEXP muSEXP, SEXP sigmaSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_max_return(mu, sigma, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// roll_min_risk
NumericMatrix roll_min_risk(const NumericMatrix& mu, const NumericVector& sigma, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rollport_roll_min_risk(SEXP muSEXP, SEXP sigmaSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_min_risk(mu, sigma, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// roll_max_ratio
NumericMatrix roll_max_ratio(const NumericMatrix& mu, const NumericVector& sigma, const double& gamma, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rollport_roll_max_ratio(SEXP muSEXP, SEXP sigmaSEXP, SEXP gammaSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_max_ratio(mu, sigma, gamma, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
