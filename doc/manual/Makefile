TEXFILE=doc
TEX=pdflatex

all: $(TEXFILE).out

.PHONY: all clean view

%.out: %.tex
	$(TEX) $<
	while ($(TEX) $< ; \
	grep -q "Rerun to get cross" $(TEXFILE).log ) do true ; \
	done

clean:
	rm -f *.aux *.log *.out *.toc

view:
	evince $(TEXFILE).pdf &
