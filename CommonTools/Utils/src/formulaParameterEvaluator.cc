// -*- C++ -*-
//
// Package:     CommonTools/Utils
// Class  :     reco::formula::ParameterEvaluator
// 
// Implementation:
//     [Notes on implementation]
//
// Original Author:  Christopher Jones
//         Created:  Wed, 23 Sep 2015 18:06:29 GMT
//

// system include files

// user include files
#include "formulaParameterEvaluator.h"


namespace reco {
  namespace formula {
    double ParameterEvaluator::evaluate(double const* /*iVariables*/, double const* iParameters) const {
      return iParameters[m_index];
    }
    std::vector<std::string> ParameterEvaluator::abstractSyntaxTree() const {
      return std::vector<std::string>{1, std::string("par[")+std::to_string(m_index)+"]"};
    }
  }
}
