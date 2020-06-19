make:
	g++ src/*.cpp -o carbon_rain -Iinclude -L. -ltcod -Wl,-rpath=. -Wall

clean:
	rm carbon_rain
