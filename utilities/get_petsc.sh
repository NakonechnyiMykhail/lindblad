#!/bin/sh
wget http://ftp.mcs.anl.gov/pub/petsc/release-snapshots/petsc-lite-3.5.3.tar.gz
tar xfz petsc-lite-3.5.3.tar.gz
cd petsc-3.5.3
PETSC_ARCH=cpucmplx PETSC_DIR=`pwd` ./configure \
  --with-debugging=1 \
  --with-scalar-type=complex \
  --with-mpi=0 \
  --with-shared-libraries=0 \
  --prefix=../petsc-cpucmplx \
  --with-x=0 \
  --with-ssl=0 \
  --with-fortran-kernels=0 \
  --with-pthread=0 \
  --with-mpiuni-fortran-binding=0 \
  --with-fortran-interfaces=0
make PETSC_DIR=`pwd` PETSC_ARCH=cpucmplx all
make PETSC_DIR=`pwd` PETSC_ARCH=cpucmplx install
cd -

