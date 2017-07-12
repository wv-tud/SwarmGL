CC=g++
INCLUDES= -I ./external/glew-1.9.0/ -I ./external/glfw-3.0/ -I ./external/glm-0.9.4.0/
LIBS= -L /usr/local/Cellar/ -l glfw -l glew -framework OpenGL
CXXFLAGS= -std=c++11 -Wall $(INCLUDES) $(LIBS)

SwarmGL: *.cpp
	$(CC) *.cpp -o SwarmGL $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f SwarmGL
