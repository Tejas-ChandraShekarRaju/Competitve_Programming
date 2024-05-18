import random
from collections import Counter
import matplotlib.pyplot as plt

# List of systems and their weights
systems = ['Item A', 'Item B', 'Item C', 'Item D']
weights = [50, 20, 20, 10]

# Function to compute cumulative probabilities
def compute_cumulative_probabilities(weights):
    total_weight = sum(weights)
    cumulative_probs = []
    cumulative_sum = 0
    for weight in weights:
        cumulative_sum += weight / total_weight
        cumulative_probs.append(cumulative_sum)
    return cumulative_probs

# Function to select a system based on weights
def weighted_random_selection(systems, cumulative_probs):
    rand = random.random()  # Generate a single random number between 0 and 1
    for system, cum_prob in zip(systems, cumulative_probs):
        if rand < cum_prob:
            return system  # Select the system where the random number falls in the cumulative range
    return systems[-1]  # Fallback in case of floating-point precision issues

# Compute the cumulative probabilities
cumulative_probs = compute_cumulative_probabilities(weights)

# Run a single round of simulation with 1000 selections
rounds_per_simulation = 1000
selections = [weighted_random_selection(systems, cumulative_probs) for _ in range(rounds_per_simulation)]
selection_counts = Counter(selections)

# Plotting the results
plt.bar(selection_counts.keys(), selection_counts.values(), color=['blue', 'orange', 'green', 'red'])
plt.title('Item Selections')
plt.xlabel('Items')
plt.ylabel('Counts')
plt.xticks(range(len(systems)), systems)
plt.show()
