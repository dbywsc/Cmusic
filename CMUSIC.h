#define qdo 262 
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define Do 523
#define Re 578
#define Mi 659
#define Fa 698
#define So 784
#define La 880
#define Si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865

int aBeatTime(int);

struct beat {
	int beatTime;
	int halfBeatTime;
	int quarterBeatTime;
	int oneThirdBeatTime;
};

void ScaleDo(int);
void ScaleRe(int);
void ScaleMi(int);
void ScaleFa(int);
void ScaleSo(int);
void ScaleLa(int);
void ScaleSi(int);

void ScaleDo1(int);
void ScaleRe1(int);
void ScaleMi1(int);
void ScaleFa1(int);
void ScaleSo1(int);
void ScaleLa1(int);
void ScaleSi1(int);

void Scale_qdo(int);
void Scale_qre(int);
void Scale_qmi(int);
void Scale_qfa(int);
void Scale_qso(int);
void Scale_qla(int);
void Scale_qsi(int);