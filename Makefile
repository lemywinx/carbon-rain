make:
	g++ src/*.cpp -o carbon_rain -Iinclude -L. -ltcod -ltcodxx -Wl,-rpath=. -Wall

clean:
	rm carbon_rain
