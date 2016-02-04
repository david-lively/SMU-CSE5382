#ifndef GLERROR_H
#define GLERROR_H

void m_check_gl_error(const char *file, int line);

///
/// Usage
/// [... some opengl calls]
/// check_gl_error();
///
#define check_gl_error() m_check_gl_error(__FILE__,__LINE__)

#endif // GLERROR_H
