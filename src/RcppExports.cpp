// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dependency_rowlocations
Rcpp::List dependency_rowlocations(const unsigned int& row, const Rcpp::List& x, const int depth);
RcppExport SEXP _udpipe_dependency_rowlocations(SEXP rowSEXP, SEXP xSEXP, SEXP depthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type depth(depthSEXP);
    rcpp_result_gen = Rcpp::wrap(dependency_rowlocations(row, x, depth));
    return rcpp_result_gen;
END_RCPP
}
// phrases_regex_locate
Rcpp::List phrases_regex_locate(Rcpp::StringVector x, std::string pattern, int ngram_max);
RcppExport SEXP _udpipe_phrases_regex_locate(SEXP xSEXP, SEXP patternSEXP, SEXP ngram_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type pattern(patternSEXP);
    Rcpp::traits::input_parameter< int >::type ngram_max(ngram_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(phrases_regex_locate(x, pattern, ngram_max));
    return rcpp_result_gen;
END_RCPP
}
// udp_load_model
SEXP udp_load_model(const char* file_model);
RcppExport SEXP _udpipe_udp_load_model(SEXP file_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file_model(file_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_load_model(file_model));
    return rcpp_result_gen;
END_RCPP
}
// udp_tokenise_tag_parse
Rcpp::List udp_tokenise_tag_parse(SEXP udmodel, Rcpp::StringVector x, Rcpp::StringVector docid, std::string annotation_tokenizer, std::string annotation_tagger, std::string annotation_parser, int log_every, Rcpp::Function current_time, std::string output_format);
RcppExport SEXP _udpipe_udp_tokenise_tag_parse(SEXP udmodelSEXP, SEXP xSEXP, SEXP docidSEXP, SEXP annotation_tokenizerSEXP, SEXP annotation_taggerSEXP, SEXP annotation_parserSEXP, SEXP log_everySEXP, SEXP current_timeSEXP, SEXP output_formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type udmodel(udmodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type docid(docidSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tokenizer(annotation_tokenizerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tagger(annotation_taggerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_parser(annotation_parserSEXP);
    Rcpp::traits::input_parameter< int >::type log_every(log_everySEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type current_time(current_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_format(output_formatSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_tokenise_tag_parse(udmodel, x, docid, annotation_tokenizer, annotation_tagger, annotation_parser, log_every, current_time, output_format));
    return rcpp_result_gen;
END_RCPP
}
// na_locf
Rcpp::CharacterVector na_locf(Rcpp::CharacterVector x);
RcppExport SEXP _udpipe_na_locf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(na_locf(x));
    return rcpp_result_gen;
END_RCPP
}
// udp_train
Rcpp::List udp_train(const char* file_model, Rcpp::CharacterVector conllu_input_files, Rcpp::CharacterVector conllu_heldout_files, std::string annotation_tokenizer, std::string annotation_tagger, std::string annotation_parser);
RcppExport SEXP _udpipe_udp_train(SEXP file_modelSEXP, SEXP conllu_input_filesSEXP, SEXP conllu_heldout_filesSEXP, SEXP annotation_tokenizerSEXP, SEXP annotation_taggerSEXP, SEXP annotation_parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file_model(file_modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type conllu_input_files(conllu_input_filesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type conllu_heldout_files(conllu_heldout_filesSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tokenizer(annotation_tokenizerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tagger(annotation_taggerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_parser(annotation_parserSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_train(file_model, conllu_input_files, conllu_heldout_files, annotation_tokenizer, annotation_tagger, annotation_parser));
    return rcpp_result_gen;
END_RCPP
}
// udp_evaluate
Rcpp::List udp_evaluate(SEXP udmodel, Rcpp::CharacterVector conllu_test_file, Rcpp::CharacterVector output_file, std::string annotation_tokenizer, std::string annotation_tagger, std::string annotation_parser);
RcppExport SEXP _udpipe_udp_evaluate(SEXP udmodelSEXP, SEXP conllu_test_fileSEXP, SEXP output_fileSEXP, SEXP annotation_tokenizerSEXP, SEXP annotation_taggerSEXP, SEXP annotation_parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type udmodel(udmodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type conllu_test_file(conllu_test_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type output_file(output_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tokenizer(annotation_tokenizerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_tagger(annotation_taggerSEXP);
    Rcpp::traits::input_parameter< std::string >::type annotation_parser(annotation_parserSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_evaluate(udmodel, conllu_test_file, output_file, annotation_tokenizer, annotation_tagger, annotation_parser));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_udpipe_dependency_rowlocations", (DL_FUNC) &_udpipe_dependency_rowlocations, 3},
    {"_udpipe_phrases_regex_locate", (DL_FUNC) &_udpipe_phrases_regex_locate, 3},
    {"_udpipe_udp_load_model", (DL_FUNC) &_udpipe_udp_load_model, 1},
    {"_udpipe_udp_tokenise_tag_parse", (DL_FUNC) &_udpipe_udp_tokenise_tag_parse, 9},
    {"_udpipe_na_locf", (DL_FUNC) &_udpipe_na_locf, 1},
    {"_udpipe_udp_train", (DL_FUNC) &_udpipe_udp_train, 6},
    {"_udpipe_udp_evaluate", (DL_FUNC) &_udpipe_udp_evaluate, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_udpipe(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
