import java.util.ArrayList;
class Main {
    public static void main(String[] args){
        ArrayList<String> animals = new ArrayList<>();
        // Add elements
        animals.add("Dog");
        animals.add("Cat");
        animals.add("Horse");
// add elements to an array list using indexes
	animals.add(0,"Cow");
        animals.add(1,"Rat");
        System.out.println("ArrayList: " + animals);
//add all the elements of an array list to a new array list,use the addAll() method
ArrayList<String> mammals = new ArrayList<>();
        mammals.add("Dog");
        mammals.add("Cat");
        mammals.add("Horse");
        System.out.println("Mammals: " + mammals);
        ArrayList<String> animals = new ArrayList<>();
        animals.add("Crocodile");
        // Add all elements of mammals in animals
        animals.addAll(mammals);
        System.out.println("Animals: " + animals);
//To randomly access elements of an array list,  use the get() method
String str = animals.get(0);
        System.out.print("Element at index 0: " + str);
// Use iterator 
Iterator<String> iterate = animals.iterator();
        System.out.print("ArrayList: ");
        // Use methods of Iterator to access elements
        while(iterate.hasNext()){
            System.out.print(iterate.next());
            System.out.print(", ");
//To change elements of an array list,  use the set() method.
animals.set(2, "Zebra");
To remove an element from an array list, use the remove() method
 String str = animals.remove(2);
        System.out.println("Final ArrayList: " + animals);
// Remove all the elements
        animals.removeAll(animals);
        System.out.println("Final ArrayList: " + animals);

    }
}