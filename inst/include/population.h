//   SMCTC: population.hh
//
//   Copyright Adam Johansen, 2008-2009.
// 
//   This file is part of SMCTC.
//
//   SMCTC is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   SMCTC is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with SMCTC.  If not, see <http://www.gnu.org/licenses/>.
//

//! \file
//! \brief Class used to store and manipulate the population of particles.
//!
//! This file contains the smc::population class which is used internally.

#ifndef __SMC_POPULATION_HH
#define __SMC_POPULATION_HH 1.0

#include <RcppArmadillo.h>

#include <float.h>
#include <limits>
#include <cmath>

namespace smc {
    /// A template class for the particles of an SMC algorithm
    template <class Space> class population
    {
    private:
        /// Values of the particles
        std::vector<Space> value;
        /// Natural logarithm of the particle weights.
        arma::vec logweight;

    public:
        population();
        /// Constructor which initialises the particle values and weights.
        population(const std::vector<Space> & sInit, const arma::vec & dLogWeight);
        /// The copy constructor performs a shallow copy.
        population(const population<Space> & pFrom);
        /// The assignment operator performs a shallow copy.
        population<Space> & operator= (const population<Space> & pFrom);

        ~population();

        /// Returns the number of particles within the system.
        long GetNumber(void) const {return logweight.n_rows;}
        /// Returns the particle values
        const std::vector<Space> & GetValue(void) const {return value;}
        /// Returns the value of the nth particle in the population
        const Space & GetValueN(long n) const {return value[n];}
        /// Returns a reference to the value of the nth particle in the population
        Space & GetValueRefN(long n) {return value[n];}
        /// Returns the particle log weights.
        const arma::vec & GetLogWeight(void) const {return logweight;}
        /// Returns the nth particle's log weight.
        double GetLogWeightN(long n) const {return logweight(n);}
        /// Returns a reference to the nth particle's log weight.
        double & GetLogWeightRefN(long n) {return logweight(n);}
        /// Returns the particles' unnormalised weights.
        arma::vec GetWeight(void) const {return exp(logweight);}
        /// Returns the nth particle's unnormalised weight.
        double GetWeightN(long n) const {return exp(logweight(n));}
        
        /// \brief Sets the particle values and weights explicitly
        ///
        /// \param sValue The particle values to use 
        /// \param dLogWeight The natural logarithm of the new particle weights
        void Set(const std::vector<Space> & sValue,const arma::vec & dLogWeight){value = sValue; logweight = dLogWeight;}
        /// \brief Sets the particle values explicitly
        ///
        /// \param sValue The particle values to use
        void SetValue(const std::vector<Space> & sValue){value = sValue;}
        /// \brief Sets the nth particle value explicitly
        ///
        /// \param sValue The particle value to use
        void SetValueN(const Space & sValue, long n){value[n] = sValue;}
        /// \brief Sets the particle log weights explicitly
        ///
        /// \param dLogWeight The natural logarithm of the new particle weights
        void SetLogWeight(const arma::vec & dLogWeight) {logweight = dLogWeight;}
    };


    /// Create a particle with undefined values and weights
    template <class Space>
    population<Space>::population()
    {
    }

    ///Copy constructor
    template <class Space>
    population<Space>::population(const population<Space> & pFrom)
    {
        value = pFrom.value;
        logweight = pFrom.logweight;
    }

    /// Create particles with values sInit and log weights dLogWeight 
    /// \param sInit The initial values of the particle
    /// \param dLogWeight The initial values of the natural logarithm of the particle weights
    template <class Space>
    population<Space>::population(const std::vector<Space> & sInit, const arma::vec & dLogWeight)
    {
        value = sInit;
        logweight =dLogWeight;
    }

    /// Dispose of a population object which is no longer required
    template <class Space>
    population<Space>::~population()
    {
    }

    /// Copy the values of pFrom to the values of this to set this population identical to pFrom in a deep
    /// copy sense.
    template <class Space>
    population<Space> & population<Space>::operator= (const population<Space> & pFrom)
    {
        this->value = pFrom.value;
        this->logweight = pFrom.logweight;

        return *this;
    }
}

namespace std {
    /// Produce a human readable display of an smc::population class using the standard stream operators

    /// \param os The output stream to which the display should be made.
    /// \param p  The population object which is to be displayed.
    template <class Space>
    std::ostream & operator << (std::ostream & os, smc::population<Space> & p)
    {
        Space val;
        double w;
        for(int i = 0; i < p.GetNumber() - 1; i++){
            val = p.GetValueN(i);
            w = p.GetWeightN(i);
            os << val << "," << w << std::endl;
        }
        return os;
    }
}
#endif
