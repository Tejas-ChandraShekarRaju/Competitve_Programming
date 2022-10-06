package corejava.Threads;



public class ThreadExample {

    public static void main(String[] args){
        
        /*
        1st way of  invoking
        */
        Thread th = new Thread(()->System.out.println("testing"));
        th.start();

        /*
        2nd way
        */
        Thread subClass = new Thread(){
            public void run(){
                System.out.println("hey there");
            }
        };

        // 3rd way
        Runnable run = new Runnable(){
            public void run(){
                System.out.println("implemented by passing instance of anonymous class and passing it thread");
            }
        };

        Thread usingRunnable = new Thread(run);
        usingRunnable.start();

        try {
            subClass.wait(1000);
            subClass.start();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
    
    
}
