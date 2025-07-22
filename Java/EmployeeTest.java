import java.io.*;

public class EmployeeTest {
    public static void main(String[] args) {
        // 使用构造器创建两个对象
        Employee empOne = new Employee("Hailin Zheng");
        Employee empTwo = new Employee("Hailin Zheng");

        // 调用这两个对象的成员方法
        empOne.setAge(21);
        empOne.setDesignation("菜鸟程序员");
        empOne.setSalary(10000);
        empOne.printEmployee();

        empTwo.setAge(31);
        empTwo.setDesignation("高级安全研究员");
        empTwo.setSalary(50000000);
        empTwo.printEmployee();
    }
}