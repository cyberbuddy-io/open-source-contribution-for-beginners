import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTimeFormattter {
    public static void main(String[] args) {
        LocalDateTime dt=LocalDateTime.now();
        System.out.println(dt);
        // DateTimeFormatter d=DateTimeFormatter.ofPattern("dd-MM-yyyy");
        DateTimeFormatter di=DateTimeFormatter.ISO_LOCAL_DATE_TIME;
        String mydate=dt.format(di);
        System.out.println(mydate);

    }
}
