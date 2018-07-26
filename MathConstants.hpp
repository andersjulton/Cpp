#pragma once
#include <cmath>

/* Global header file with mathematical and physical constants */


/* Mathematical constants*/

const double c_pi	= 3.14159265358979323846;			// pi 
const double c_e	= 2.71828182845904523536;			// Euler 

/* Natural units*/

const double c_pl	= 1.616229*pow(10.0, -35.0);		// Planck length [m]
const double c_pm	= 2.176470*pow(10.0, -8.0);			// Planck mass [kg]
const double c_pt	= 5.39116*pow(10.0, -44.0);			// Planck time [s]
const double c_pc	= 1.875545956*pow(10.0, -18.0);		// Planck charge [C]
const double c_pT	= 1.416808*pow(10.0, 32.0);			// Planck temperature [K]

/* Universal constants */

const double c_c	= 299792458;						// Speed of Light [m⋅s^-1] 
const double c_G	= 6.67408*pow(10.0, -11.0);			// Newtonian constant of gravity [m^3⋅kg^-1⋅s^-2]
const double c_h	= 6.626070040*pow(10.0, -34.0);		// Planck constant [J⋅s] 
const double c_hbar = 1.054571800*pow(10.0, -34.0);		// Reduced Planck constant [J⋅s] 

/* Electromagnetic constants */

const double c_mu0	= 4*c_pi*pow(10.0, -7.0);			// Magnetic constant (vacuum permeability) [N⋅A^-2] 
const double c_eps0 = 8.854187817*pow(10.0, -12.0);		// Electric constant (vacuum permittivity) [F⋅m^-1] 
const double c_ke	= 8.987551787368*pow(10.0, 9.0);	// Coloumb's constant [kg⋅m^3⋅s^-4⋅A^-2] 
const double c_ec	= 1.6021766208*pow(10.0, -19.0);	// Elementary charge [C] 
const double c_muB	= 9.274009994*pow(10.0, -24.0);		// Bohr magneton [J⋅T^-1]

/* Atomic and nuclear constants */

const double c_a0	= 5.2917721067*pow(10.0, -11.0);	// Bohr radius [m]
const double c_re	= 2.8179403227*pow(10.0, -15.0);	// Classical electron radius [m]
const double c_me	= 9.10938356*pow(10.0, -31.0);		// Electron mass [kg]
const double c_mp	= 1.672621898*pow(10.0, -27.0);		// Proton mass [kg]

/* Physico-chemical constants */

const double c_u	= 1.660539040*pow(10.0, -27.0);		// Atomic mass constant [kg]
const double c_na	= 6.022140857*pow(10.0, 23.0);		// Avogadro constant [mol^-1]
const double c_kb	= 1.38064852*pow(10.0, -23.0);		// Boltzmann constant [J⋅K^-1]
const double c_F	= 96485.33289;						// Faraday constant [C⋅mol^-1]

