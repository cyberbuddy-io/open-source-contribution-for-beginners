package com.sayam.news.Model;

public class Articles {
    String title,description,url,urlTOImage,content;

    public Articles(String title, String description, String url, String urlTOImage, String content) {
        this.title = title;
        this.description = description;
        this.url = url;
        this.urlTOImage = urlTOImage;
        this.content = content;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getUrl() {
        return url;
    }

    public void setUrl(String url) {
        this.url = url;
    }

    public String getUrlTOImage() {
        return urlTOImage;
    }

    public void setUrlTOImage(String urlTOImage) {
        this.urlTOImage = urlTOImage;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }
}
