#ifndef _VARIABLE_H_
#define _VARIABLE_H_


extern int intseed;
extern int expcount;
extern const double time_r;
extern const double time_r2;
extern double Edock_kt;
extern const double E1_kt;
extern const double E2_kt_before;
extern const double E2_kt_after;
extern const double E3_kt;
extern const double ita;												  //ita
extern const double c;
extern const double rb;
extern double fload;
extern double fload_y;

extern const int sample;                                         //sample steps
extern const double delta_t;                  				        //time step
extern const double d; 					    					  //step length
extern const double alpha; 					  			          //weak length 
extern const double kBT2pNnm;                          	   //kBT->pNnm (T=300K)
extern const double A;                     			     //interaction distance
extern const double rh;								   	  //kinesin head radius 
extern const double Pi;												       //pi
extern const double Epsilon;
extern const double theta_hh;

extern int ifdock;                                              //0 --> no dock
extern int stepcount;
extern int stopcount;
extern int midcount;
extern int stepnumber;
extern int stopnumber;
extern int midnumber;
extern int step;
extern double xh0;                                                //x of head 0 
extern double yh0;                                                //y of head 0
extern double zh0;												  //z of head 0
extern double ah0;
extern double gh0;
extern double xb;
extern double yb;
extern double timer;											   //total time
extern double x_temp;
extern double y_temp;
extern double z_temp;
extern double a_temp;
extern double g_temp;
extern double xb_temp;
extern double yb_temp;
extern double F1_temp;
extern double F2_temp;
extern double normal_x;
extern double normal_y;
extern double normal_z;
extern double normal_a;
extern double normal_g;
extern double normal_xb;
extern double normal_yb;
extern double Ew;                                 		 //weak binding
extern double V0;                                 		 //head binding
extern double E2_kt;
extern double t0;
extern int ifout;
extern double limping;
extern double limping_delta;
extern double wherelocal;

#endif
