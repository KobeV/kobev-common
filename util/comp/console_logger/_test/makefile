OUT_ = console_logger_test

ARCH = amd64
OUT = $(OUT_)_$(ARCH)
CC = g++


# --- include paths ---------------------------------------
IFLAGS = -I../../../../
# Use -isystem instead of -I for no warnings of external libs
IFLAGS += -isystem ../../../../lib/google_test/inc

# --- linkers ---------------------------------------------
LFLAGS = -L/usr/lib/x86_64-linux-gnu/
LFLAGS += -L../../../../lib/google_test/lib_$(ARCH)
LFLAGS += -Wl,--rpath=../../../../lib/google_test/lib_$(ARCH)

# --- libs ------------------------------------------------
LIBS = -lgmock


# --- compiler --------------------------------------------
# Debug build
CFLAGS = -DDEBUG
CFLAGS += -O0
CFLAGS += -g

# compiler warning and errors
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -pedantic

# iso c++ version
CFLAGS += -std=c++14

CFLAGS += $(IFLAGS) $(LFLAGS) $(LIBS)


# --- object files to build -------------------------------
ODIR = obj_$(ARCH)

OBJ = $(ODIR)/$(OUT_).o

all: $(OUT)

# --- compile main module ---------------------------------
$(ODIR)/%.o: %.cpp
	mkdir -p $(ODIR)
	$(CC) -MMD -c -o $@ $< $(CFLAGS)
-include $(ODIR)/*.d


# --- create exec -----------------------------------------
$(OUT) : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# --- clean exec ------------------------------------------
.PHONY: clean

clean:
	rm -r -f $(ODIR) $(OUT)
