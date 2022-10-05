package advancedjava.collections;

import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;
import java.util.stream.Collectors;


/*

https://www.hackerrank.com/challenges/java-priority-queue/problem
*/
class Student implements Comparable<Student>{
     
    private int id;
    private String name;
    private double cgpa;
    
    Student(int id, String name, double cgpa){
        
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
    }
    
    public int getId(){
        return this.id;
    }
    
    public String getName(){
        return this.name;
    }
    
    public double getCGPA(){
        return this.cgpa;
    }

    @Override
    public int compareTo(Student o) {
        if(this.cgpa == o.cgpa) {
            if(this.name.equals(o.name)) {
                return this.id - o.id;
            }else {
                return this.name.compareTo(o.name);
            }
        }else {
            return this.cgpa < o.cgpa ? 1 : -1;
        }
    }
    // This compareTo is the one i wrote and it doesnt work. Understand why.
    // @Override
    // public int compareTo(Student s) {
       
    //     if(this.cgpa!=s.getCGPA()){

    //         return this.cgpa < s.getCGPA() ? 1 : -1;
    //     }
        
    //     if(this.cgpa == s.getCGPA() && !this.name.equalsIgnoreCase(s.getName())){
    //         return this.name.compareToIgnoreCase(s.getName()) > 1 ? 1 : -1;
    //     }

    //     if(this.cgpa == s.getCGPA() && this.name.equalsIgnoreCase(s.getName())){
    //         return this.id > s.getId() ? 1 : -1;
    //     }

    //     else return -1;


    // }
}

class Priorities{
    private PriorityQueue<Student> students = new PriorityQueue<>();

    List<Student> getStudents(List<String> events){

        for(String event:events){
            String[] temp = event.split(" ");
                if(temp[0].equals("ENTER")){
                    Student student = new Student(Integer.parseInt(temp[3]),temp[1], Double.parseDouble(temp[2]));
                    students.add(student);
                }
                else{
                    students.poll();
                }
        }
     
        return students.stream().sorted().collect(Collectors.toList());
    }

} 

public class PriorityQueueEx {
    private final static Scanner scan = new Scanner(System.in);
    private final static Priorities priorities = new Priorities();
    
    public static void main(String[] args) {
        int totalEvents = Integer.parseInt(scan.nextLine());    
        List<String> events = new ArrayList<>();
        
        while (totalEvents-- != 0) {
            String event = scan.nextLine();
            events.add(event);
        }
        
        List<Student> students = priorities.getStudents(events);
        
        if (students.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            for (Student st: students) {
                System.out.println(st.getName());
            }
        }
    }
}
