SHELL=/bin/bash

all: thesis.pdf

# Simple case:  no figures or BibTeX
thesis.pdf: thesis.tex
	pdflatex thesis
	bibtex thesis
	pdflatex thesis
	pdflatex thesis

# More complicated case:  BibTeX invoked, PostScript figures
bibpost:
	latex thesis
	bibtex thesis
	latex thesis
	latex thesis
	dvipdf thesis

# If all figures are PDF'd, then we can use pdflatex instead
# (This requires changing the [dvips] driver to [pdftex]
# on the \usepackage{graphics} line in thesis.tex.)
bibpdf:
	pdflatex thesis
	bibtex thesis
	pdflatex thesis
	pdflatex thesis

clean:
	-@rm -f *.{aux,toc,dvi,lof,lot,log,lom,bbl,blg,pdf,ps,out,pdfsync} *~
