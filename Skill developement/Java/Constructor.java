public class Constructor {
    String name;
    int age;
    String schoolname;
    public Constructor(String n, int a, String schl){
        name = n;
        age = a;
        schoolname = schl;
    }

    public String toString(){
        return "Name: " + name + "Age: " + age + "Schoolname: " + schoolname;
    }
    public static void main(String[] args) {
        System.out.println("hELLO wORLD!");
    }
}
