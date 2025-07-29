
import java.util.*;
public class GregorianCalendarClass {
    public static void main(String[] args) {
        Calendar c=Calendar.getInstance();
        System.out.println(c.getTime());
        System.out.println(c.get(Calendar.SECOND));
        System.out.println(c.get(Calendar.HOUR));
        System.out.println(c.get(Calendar.HOUR_OF_DAY)+":"+c.get(Calendar.MINUTE)+":"+c.get(Calendar.SECOND));
        GregorianCalendar g=new GregorianCalendar();
        System.out.println(g.isLeapYear(2022));
        System.out.println(TimeZone.getAvailableIDs()[0]);
        System.out.println(TimeZone.getAvailableIDs()[1]);
        System.out.println(TimeZone.getAvailableIDs()[2]);
    }
}
