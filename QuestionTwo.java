import java.util.*;

public class QuestionTwo {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        int red = 0;
        int blue = 0;
        int yellow = 0;
        int redBlue = 0;
        int redYellow = 0;
        int blueYellow = 0;
        int redBlueYellow = 0;
        int redBlueYellowCount = 0;
        int redBlueCount = 0;
        int redYellowCount = 0;
        int blueYellowCount = 0;
        int redCount = 0;
        int blueCount = 0;
        int yellowCount = 0;

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of pairs of items: ");
        int numberOfPairs = input.nextInt();
        for (int i = 0; i < numberOfPairs; i++) {
            System.out.println("Enter the number of the item: ");
            int number = input.nextInt();
            System.out.println("Enter the colour of the item: ");
            String colour = input.next();
            if (colour.equals("red")) {
                red++;
            } else if (colour.equals("blue")) {
                blue++;
            } else if (colour.equals("yellow")) {
                yellow++;
            }
        }
        redBlue = red * blue;
        redYellow = red * yellow;
        blueYellow = blue * yellow;
        redBlueYellow = red * blue * yellow;
        redBlueCount = redBlue + redYellow;
        redYellowCount = redBlue + blueYellow;
        blueYellowCount = redBlue + redYellow;
        redCount = redBlue + redYellow + blueYellow;
        blueCount = redBlue + redYellow + blueYellow;
        yellowCount = redBlue + redYellow + blueYellow;
        redBlueYellowCount = redBlue + blueYellow;
        System.out.println("The number of pairs of red and blue is: " + redBlueCount);
        System.out.println("The number of pairs of red and yellow is: " + redYellowCount);
        System.out.println("The number of pairs of blue and yellow is: " + blueYellowCount);
        System.out.println("The number of pairs of red, blue and yellow is: " + redBlueYellowCount);
        System.out.println("The number of red is: " + redCount);
        System.out.println("The number of blue is: " + blueCount);
        System.out.println("The number of yellow is: " + yellowCount);
    }

}
