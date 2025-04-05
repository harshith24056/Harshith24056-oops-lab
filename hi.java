class One { 
  public void printOne () { 
    systemoutprintln("print One() method of One class."); 
  } 
} 
public class Main extends One { 
  public static void main (String args[]) { 
    Main obj = new Main (); 
    obj.printOne(); 
  } 
} 
