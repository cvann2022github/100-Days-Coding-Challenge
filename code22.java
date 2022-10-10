
import java.time.LocalDate;
import java.time.Month;
public class HappyBirthday {
   public static void main(String args[]) {
      int date_of_birth = 10;
      Month month_of_birth = Month.OCTOBER;
      System.out.println("The required packages have been imported");
      LocalDate current_date = LocalDate.now();
      System.out.println("Today's Date is " + current_date);
      System.out.println("The birthday is defined as : " +date_of_birth + " " +month_of_birth);
      int date = current_date.getDayOfMonth();
      Month month = current_date.getMonth();
      if(date == date_of_birth && month == month_of_birth) {
         System.out.println("HAPPY BIRTHDAY TO YOU !!");
      } else {
         System.out.println("Your birthday is not today ");
      }
   }
}
