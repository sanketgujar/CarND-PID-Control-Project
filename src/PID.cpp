#include "PID.h"
#include <algorithm>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  p_error = 0.;
  d_error = 0.;
  i_error   = 0.;

  previous_cte = 0.;

  count = 0;
  error_sum = 0.;
  max_error = std::numeric_limits<double>::max();
  min_error = std::numeric_limits<double>::min();
}

void PID::UpdateError(double cte) {
  p_error = cte;
  d_error = cte-previous_cte;
  i_error += cte;
  previous_cte = cte;
  error_sum += cte;
  count++;
  if (cte > max_error)
    max_error = cte;
  if (cte < min_error)
    min_error = cte;
}

double PID::TotalError() {
  return p_error*Kp + i_error*Ki + d_error*Kd;
}
