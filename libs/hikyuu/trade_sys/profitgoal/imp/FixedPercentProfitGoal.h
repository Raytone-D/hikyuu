/*
 * FixedPercentProfitGoal.h
 *
 *  Created on: 2016年5月6日
 *      Author: Administrator
 */

#ifndef TRADE_SYS_PROFITGOAL_IMP_FIXEDPERCENTPROFITGOAL_H_
#define TRADE_SYS_PROFITGOAL_IMP_FIXEDPERCENTPROFITGOAL_H_

#include <hikyuu/trade_sys/profitgoal/ProfitGoalBase.h>

namespace hku {

class FixedPercentProfitGoal: public ProfitGoalBase {
    PROFITGOAL_IMP(FixedPercentProfitGoal)
    PROFIT_GOAL_NO_PRIVATE_MEMBER_SERIALIZATION

public:
    FixedPercentProfitGoal();
    virtual ~FixedPercentProfitGoal();
};

} /* namespace hku */

#endif /* TRADE_SYS_PROFITGOAL_IMP_FIXEDPERCENTPROFITGOAL_H_ */
