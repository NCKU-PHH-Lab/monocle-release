// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jaccard_coeff
NumericMatrix jaccard_coeff(SEXP R_idx, SEXP R_weight);
RcppExport SEXP _monocle_jaccard_coeff(SEXP R_idxSEXP, SEXP R_weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_idx(R_idxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_weight(R_weightSEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_coeff(R_idx, R_weight));
    return rcpp_result_gen;
END_RCPP
}
// select_landmarks
Rcpp::List select_landmarks(SEXP R_data, SEXP R_indices, SEXP R_indptr, SEXP R_n, SEXP R_dim, SEXP R_count);
RcppExport SEXP _monocle_select_landmarks(SEXP R_dataSEXP, SEXP R_indicesSEXP, SEXP R_indptrSEXP, SEXP R_nSEXP, SEXP R_dimSEXP, SEXP R_countSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_data(R_dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_indices(R_indicesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_indptr(R_indptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_n(R_nSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_dim(R_dimSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_count(R_countSEXP);
    rcpp_result_gen = Rcpp::wrap(select_landmarks(R_data, R_indices, R_indptr, R_n, R_dim, R_count));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_monocle_jaccard_coeff", (DL_FUNC) &_monocle_jaccard_coeff, 2},
    {"_monocle_select_landmarks", (DL_FUNC) &_monocle_select_landmarks, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_monocle(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
