import java.util.Arrays;
import java.util.Comparator;

class Item {
    int value, weight;
    
    Item(int value, int weight) {
        this.value = value;
        this.weight = weight;
    }
}

public class FractionalKnapsack {

    // Function to get maximum value in the knapsack
    public static double fractionalKnapsack(int W, Item[] items) {
        // Sort items by value/weight ratio in descending order
        Arrays.sort(items, new Comparator<Item>() {
            public int compare(Item a, Item b) {
                double r1 = (double)a.value / a.weight;
                double r2 = (double)b.value / b.weight;
                return Double.compare(r2, r1); // Descending
            }
        });

        double totalValue = 0.0;
        int remainingWeight = W;

        for (Item item : items) {
            if (item.weight <= remainingWeight) {
                // Take whole item
                totalValue += item.value;
                remainingWeight -= item.weight;
            } else {
                // Take fractional part
                totalValue += item.value * ((double)remainingWeight / item.weight);
                break; // Knapsack is full
            }
        }

        return totalValue;
    }

    public static void main(String[] args) {
        Item[] items = {
            new Item(60, 10),
            new Item(100, 20),
            new Item(120, 30)
        };
        int W = 50; // Knapsack capacity

        double maxValue = fractionalKnapsack(W, items);
        System.out.println("Maximum value in knapsack = " + maxValue);
    }
}
