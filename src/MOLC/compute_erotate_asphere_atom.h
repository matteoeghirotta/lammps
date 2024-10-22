/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/, Sandia National Laboratories
   LAMMPS development team: developers@lammps.org

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef COMPUTE_CLASS
// clang-format off
ComputeStyle(erotate/asphere/atom,ComputeERotateAsphereAtom)
// clang-format on
#else

#ifndef LMP_COMPUTE_EROTATE_ASPHERE_ATOM_H
#define LMP_COMPUTE_EROTATE_ASPHERE_ATOM_H

#include "compute.h"

namespace LAMMPS_NS {

class ComputeERotateAsphereAtom : public Compute {
 public:
  ComputeERotateAsphereAtom(class LAMMPS *, int, char **);

  void init() override;
  void compute_peratom() override;

 protected:
  int nmax;
  double pfactor;
  class AtomVecEllipsoid *avec_ellipsoid;
  class AtomVecLine *avec_line;
  class AtomVecTri *avec_tri;
  double *erot;
};

}   // namespace LAMMPS_NS

#endif
#endif
