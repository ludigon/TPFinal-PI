#include "aeropuertos.h"
/* Los nodos serían los aeropuertos. En cada aeropuerto, se guardarian su oaci, 
 * su denominación y la cantidad de despegues y aterrizajes que ocurren en el aeropuerto.
 */
typedef struct aerop * Taerop;
struct aerop{
	char oaci[5];
	char * denom;
	int movs;
	Taerop tail;
};
/* En el censo se guardadfaafafafafafafafafafafaf
 * 
 */
struct censoADT
