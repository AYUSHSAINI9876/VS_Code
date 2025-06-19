import java.util.*;

class Array_List{

public static void main(String[] args) {
    ArrayList<Integer> list1=new ArrayList<>();
    ArrayList<String> list2=new ArrayList<>();
    ArrayList<Boolean> list3=new ArrayList<>();
     
    list1.add(0);
    list1.add(2);
    list1.add(5);
    System.out.println(list1);

    list2.add("ayush");
    list2.add("shalu");
    System.out.println(list2);

    // int element1=list1.get(1);
    // System.out.println(element1);

    list1.add(1,1);
    System.out.println(list1);

    list1.set(0,5);
    System.out.println(list1);

    list1.remove(2);
    System.out.println(list1);

    for(int i=0;i<list1.size();i++){
        System.out.println(list1.get(i));
    }
    System.out.println();

    list2.add(2,"avi");
    System.out.println(list2);

    list2.remove(2);
    System.out.println(list2);
}
}
