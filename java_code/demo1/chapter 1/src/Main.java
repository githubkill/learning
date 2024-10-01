import java.util.Calendar;

public class Main {
    public static void main(String[] args) {
        Calendar cl = Calendar.getInstance(); // 获取当前日期和时间的 Calendar 对象

       cl.set(2018,8,8,8,8,8);
       System.out.println(cl.getTime()); // 2018年8月8日8时8分8秒

    }

}
