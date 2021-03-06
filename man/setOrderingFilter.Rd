% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/order_cells.R
\name{setOrderingFilter}
\alias{setOrderingFilter}
\title{Marks genes for clustering}
\usage{
setOrderingFilter(cds, ordering_genes)
}
\arguments{
\item{cds}{the CellDataSet upon which to perform this operation}

\item{ordering_genes}{a vector of feature ids (from the CellDataSet's featureData) used for ordering cells}
}
\value{
an updated CellDataSet object
}
\description{
The function marks genes that will be used for clustering in subsequent calls to clusterCells. 
The list of selected genes can be altered at any time.
}
