#include "CMUSIC.H"
#include <windows.h>

int aBeatTime(int beatsPerMinute) {
	return (60.0 / beatsPerMinute) * 1000;
}

void ScaleDo(int beat) {
	Beep(Do, beat);
}
void ScaleRe(int beat) {
	Beep(Re, beat);
}
void ScaleMi(int beat) {
	Beep(Mi, beat);
}
void ScaleFa(int beat) {
	Beep(Fa, beat);
}
void ScaleSo(int beat) {
	Beep(So, beat);
}
void ScaleLa(int beat) {
	Beep(La, beat);
}
void ScaleSi(int beat) {
	Beep(Si, beat);
}

void ScaleDo1(int beat) {
	Beep(do1, beat);
}
void ScaleRe1(int beat) {
	Beep(re1, beat);
}
void ScaleMi1(int beat) {
	Beep(mi1, beat);
}
void ScaleFa1(int beat) {
	Beep(fa1, beat);
}
void ScaleSo1(int beat) {
	Beep(so1, beat);
}
void ScaleLa1(int beat) {
	Beep(la1, beat);
}
void ScaleSi1(int beat) {
	Beep(si1, beat);
}

void Scale_qdo(int beat) {
	Beep(qdo, beat);
}
void Scale_qre(int beat) {
	Beep(qre, beat);
}
void Scale_qmi(int beat) {
	Beep(qmi, beat);
}
void Scale_qfa(int beat) {
	Beep(qfa, beat);
}
void Scale_qso(int beat) {
	Beep(qso, beat);
}
void Scale_qla(int beat) {
	Beep(qla, beat);
}
void Scale_qsi(int beat) {
	Beep(qsi, beat);
}