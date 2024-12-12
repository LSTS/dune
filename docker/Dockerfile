FROM debian:bookworm-slim

ENV DUNE_PATH /dune
ENV PATH $DUNE_PATH/build:$PATH

RUN mkdir -p "$DUNE_PATH"
#	&& chown www-data:www-data "$DUNE_PATH"
RUN mkdir -p "$DUNE_PATH/source"
RUN mkdir -p "$DUNE_PATH/build"

WORKDIR $DUNE_PATH/build

RUN set -eux; \
	apt-get update; \
	apt-get install -y --no-install-recommends \
		git \
		build-essential \
        cmake \
        valgrind \
        libxml2-utils \
        python3 \
        python-is-python3 \
        doxygen \
        bzip2 \
        gzip \
        vim-nox \
        nano \
	; \
	rm -rf /var/lib/apt/lists/*



