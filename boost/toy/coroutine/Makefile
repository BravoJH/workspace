CFLAGS += -I../../include
LIB_PATH = ../../lib/
LIBS = $(LIB_PATH)/libboost_coroutine.a \
	   $(LIB_PATH)/libboost_thread.a \
	   $(LIB_PATH)/libboost_context.a \
	   $(LIB_PATH)/libboost_system.a

#SRCS = coroutine.cpp
#SRCS = coroutine_with_return.cpp
SRCS = coroutine_with_argument.cpp
all:
	g++ $(SRCS) $(LIBS) $(CFLAGS)