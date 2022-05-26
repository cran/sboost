// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// adaboost
List adaboost(const NumericMatrix& features, const NumericMatrix& ordered_index, const NumericVector& outcomes, const NumericVector& categorical, int iterations, bool verbose);
RcppExport SEXP _sboost_adaboost(SEXP featuresSEXP, SEXP ordered_indexSEXP, SEXP outcomesSEXP, SEXP categoricalSEXP, SEXP iterationsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type ordered_index(ordered_indexSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type outcomes(outcomesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type categorical(categoricalSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(adaboost(features, ordered_index, outcomes, categorical, iterations, verbose));
    return rcpp_result_gen;
END_RCPP
}
// predict_cpp
NumericVector predict_cpp(const NumericMatrix& features, const List& classifier);
RcppExport SEXP _sboost_predict_cpp(SEXP featuresSEXP, SEXP classifierSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const List& >::type classifier(classifierSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_cpp(features, classifier));
    return rcpp_result_gen;
END_RCPP
}
// get_contingency_cpp
NumericMatrix get_contingency_cpp(const NumericMatrix& features, const NumericVector& outcomes, const List& classifier);
RcppExport SEXP _sboost_get_contingency_cpp(SEXP featuresSEXP, SEXP outcomesSEXP, SEXP classifierSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type outcomes(outcomesSEXP);
    Rcpp::traits::input_parameter< const List& >::type classifier(classifierSEXP);
    rcpp_result_gen = Rcpp::wrap(get_contingency_cpp(features, outcomes, classifier));
    return rcpp_result_gen;
END_RCPP
}
// score_classifier_features_cpp
NumericMatrix score_classifier_features_cpp(const List& classifier, const NumericMatrix& features);
RcppExport SEXP _sboost_score_classifier_features_cpp(SEXP classifierSEXP, SEXP featuresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type classifier(classifierSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type features(featuresSEXP);
    rcpp_result_gen = Rcpp::wrap(score_classifier_features_cpp(classifier, features));
    return rcpp_result_gen;
END_RCPP
}
