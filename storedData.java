public class storedData {
    public static void main(String[] args) {
        Data data = new Data(5);
        Data more = new Data(6);
        data = more;
        more.value = 7;
        System.out.println(data.value); 
        // always returns 7 - Java uses references, and `data` is now pointing to 7
    }
}