dune_test_lib(asound snd_pcm_open)
dune_test_header("alsa/asoundlib.h")

if (DUNE_SYS_HAS_LIB_ASOUND)
  set(DUNE_SYS_HAS_ALSA 1 CACHE INTERNAL "Alsa library")
else(DUNE_SYS_HAS_LIB_ASOUND)
  set(DUNE_SYS_HAS_ALSA 0 CACHE INTERNAL "Alsa library")
endif(DUNE_SYS_HAS_LIB_ASOUND)
