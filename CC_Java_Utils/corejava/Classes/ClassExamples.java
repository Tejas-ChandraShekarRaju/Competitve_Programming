package corejava.Classes;

interface TestInterface{
    public void testMethod();
}




public class ClassExamples {

    public static void main(String[] args){

        TestInterface ti = new TestInterface() {
            public void testMethod(){
                System.out.println("test");
            };
        };

        ti.testMethod();


    }
    
}
