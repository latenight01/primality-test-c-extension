#include "primemodule.h"

static int is_prime(unsigned int n)
{
    unsigned int i;

    if (n <= 3)
        return (n > 1);
    if (n % 2 == 0 || n % 3 == 0)
        return (0);
    i = 5;
    while ((i * i) <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (0);
        i += 6;
    }
    return (1);
}

static PyObject *prime_isprime(PyObject *self, PyObject *args)
{
	int n;

	if (!PyArg_ParseTuple(args, "i", &n))
		return (NULL);
	if (is_prime(n))
		Py_RETURN_TRUE;
	Py_RETURN_FALSE;
}

static PyMethodDef prime_methods[] = {
	{"is_prime", prime_isprime, METH_VARARGS, "Check if a number is prime"},
	{NULL, NULL, 0, NULL}};

static struct PyModuleDef prime_module = {
	PyModuleDef_HEAD_INIT,
	"prime",
	NULL,
	-1,
	prime_methods};

PyMODINIT_FUNC PyInit_prime(void)
{
	return (PyModule_Create(&prime_module));
}
