package com.sayam.recyclerviewbairminimumapp.Model;

public class DataModel {

    public String courseName;
    public int courseImage;

    public DataModel(String courseName, int courseImage) {
        this.courseName = courseName;
        this.courseImage = courseImage;
    }

    public String getCourseName() {
        return courseName;
    }

    public void setCourseName(String courseName) {
        this.courseName = courseName;
    }

    public int getCourseImage() {
        return courseImage;
    }

    public void setCourseImage(int courseImage) {
        this.courseImage = courseImage;
    }
}
