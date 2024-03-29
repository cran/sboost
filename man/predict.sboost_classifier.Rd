% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/predict.R
\name{predict.sboost_classifier}
\alias{predict.sboost_classifier}
\title{Make predictions for a feature set based on an sboost classifier.}
\usage{
\method{predict}{sboost_classifier}(object, features, scores = FALSE, ...)
}
\arguments{
\item{object}{\emph{sboost_classifier} S3 object output from sboost.}

\item{features}{feature set data.frame.}

\item{scores}{if true, raw scores generated; if false, predictions are generated.}

\item{...}{further arguments passed to or from other methods.}
}
\value{
Predictions in the form of a vector, or scores in the form of a vector.
  The index of the vector aligns the predictions or scores with the rows of
  the features. Scores represent the sum of all votes for the positive outcome
  minus the sum of all votes for the negative outcome.
}
\description{
Make predictions for a feature set based on an sboost classifier.
}
\examples{
# malware
malware_classifier <- sboost(malware[-1], malware[1], iterations = 5, positive = 1)
predict(malware_classifier, malware[-1], scores = TRUE)
predict(malware_classifier, malware[-1])

# mushrooms
mushroom_classifier <- sboost(mushrooms[-1], mushrooms[1], iterations = 5, positive = "p")
predict(mushroom_classifier, mushrooms[-1], scores = TRUE)
predict(mushroom_classifier, mushrooms[-1])
}
\seealso{
\code{\link{sboost}} documentation.
}
