//Question 1 

public class CircleArea {
    public static void main(String[] args) {
        double radius = 27.2; // radius in cm
        double area = Math.PI * radius * radius; // Area = π * r^2

        System.out.println("Radius: " + radius + " cm");
        System.out.println("Area of the circle: " + area + " cm²");
    }
}

// Question 2
public class ConeVolume {
    public static void main(String[] args) {
        double radius = 22.0;       // in cm
        double height = 17.2;       // in cm
        double pi = Math.PI;

        // Volume of cone = (1/3) * π * r^2 * h
        double volume = (1.0 /
