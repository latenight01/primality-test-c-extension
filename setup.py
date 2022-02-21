from distutils.core import setup, Extension

def main():
    setup(name="prime",
          version="1.0.0",
          description="Python interface for checking primality written in C",
          author="Mohammad Momeni",
          author_email="moehmeni@gmail.com",
          ext_modules=[Extension("prime", ["primemodule.c"])])

if __name__ == "__main__":
    main()