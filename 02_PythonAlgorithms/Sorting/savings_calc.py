# calculate the total savings at the end of the retirement, assuming you don't invest your money anywhere
"""
1. Let your starting salary as 50k at the age of 30.
2. Age of retirement is 50.
3. Every year there is a 10% salary hike.
4. Every year there is a 8% hike in living cost.
"""

def calculateSavings(age_start: int, age_retire: int, init_salary: int, init_liv: int, sal_hike: float, liv_hike: float):
    years = age_retire - age_start
    savings = (init_salary - init_liv) * 12 # calculates the savings for the first year
    for i in range(1, years):
        init_liv += (init_liv * liv_hike) # updated monthly salary
        init_salary += (init_salary * sal_hike) # updated monthly living cost
        savings += (init_salary - init_liv) * 12 # updating savings
    return savings

if __name__ == "__main__":
    print(calculateSavings(age_start=30, age_retire=50, init_salary=50_000, init_liv=30_000, sal_hike=0.1, liv_hike=0.08))
