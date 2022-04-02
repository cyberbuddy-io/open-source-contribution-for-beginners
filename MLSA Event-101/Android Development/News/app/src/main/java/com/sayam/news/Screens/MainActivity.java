package com.sayam.news.Screens;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ProgressBar;
import android.widget.Toast;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.sayam.news.Adapter.CategoriesRVAdapter;
import com.sayam.news.Adapter.NewsRVAdapter;
import com.sayam.news.Interface.RetrofitApi;
import com.sayam.news.Model.Articles;
import com.sayam.news.Model.CategoryRVModel;
import com.sayam.news.Model.NewsModel;
import com.sayam.news.R;

import java.util.ArrayList;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;

public class MainActivity extends AppCompatActivity implements CategoriesRVAdapter.CategoryClicked{

    RecyclerView newsRv,categoryRv;
    ProgressBar bar;
    ArrayList<Articles> articlesArrayList;
    ArrayList<CategoryRVModel> categoryRVModelArrayList;
    CategoriesRVAdapter categoriesRVAdapter;
    NewsRVAdapter newsRVAdapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        newsRv = findViewById(R.id.rvNews);
        categoryRv = findViewById(R.id.rvCategory);
        bar = findViewById(R.id.progressBar);
        articlesArrayList = new ArrayList<>();
        categoryRVModelArrayList = new ArrayList<>();
        newsRVAdapter = new NewsRVAdapter(articlesArrayList,this);
        categoriesRVAdapter = new CategoriesRVAdapter(categoryRVModelArrayList,this,this::onCategoryClicked);
        newsRv.setAdapter(newsRVAdapter);
        categoryRv.setAdapter(categoriesRVAdapter);
        getCategories();
        getNews("All");
        newsRVAdapter.notifyDataSetChanged();
    }

    public void getCategories(){
        categoryRVModelArrayList.add(new CategoryRVModel("","https://play-lh.googleusercontent.com/bH09QfgOWx2qX6N-APmOXbOsiFgVbWpc0jaKww8e_i1NsuIbBhqNXMeZ1C5jGFstsVg=s180-rw"));
        categoryRVModelArrayList.add(new CategoryRVModel("Technology","https://images.unsplash.com/photo-1488590528505-98d2b5aba04b?ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=2070&q=80"));
        categoryRVModelArrayList.add(new CategoryRVModel("Science","https://images.unsplash.com/photo-1518364538800-6bae3c2ea0f2?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=871&q=80"));
        categoryRVModelArrayList.add(new CategoryRVModel("Sports","https://crosspointacademy.org/wp-content/uploads/2017/05/sports-news.jpg"));
        categoryRVModelArrayList.add(new CategoryRVModel("General","https://finauxalpha6.in/wp-content/uploads/Indian-News-Papers.jpeg"));
        categoryRVModelArrayList.add(new CategoryRVModel("Business","https://images.unsplash.com/photo-1526304640581-d334cdbbf45e?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80"));
        categoryRVModelArrayList.add(new CategoryRVModel("Entertainment","https://media.istockphoto.com/photos/cheering-crowd-at-a-concert-picture-id1049022558?b=1&k=20&m=1049022558&s=170667a&w=0&h=3RejXtNiutsfWJs7sBSESAJGwyfcNq6b1aA2Ya6d9OA="));
        categoriesRVAdapter.notifyDataSetChanged();
    }

    public void getNews(String category){
        bar.setVisibility(View.VISIBLE);
        articlesArrayList.clear();
        String categoryUrl = "https://newsapi.org/v2/top-headlines?country=in&category"+ category + "&apiKey=5b7d2aceeb2f4d718092f88e1e89d70e";
        String Url = "http://newsapi.org/v2/top-headlines?country=in&excludeDomains=stackoverflow.com&sortBy=publishedAt&language=en&apiKey=5b7d2aceeb2f4d718092f88e1e89d70e";
        String BASEURL = "http://newsapi.org/";
        Gson gson = new GsonBuilder()
                .setLenient()
                .create();
        Retrofit retrofit = new Retrofit.Builder()
                .baseUrl(BASEURL)
                .addConverterFactory(GsonConverterFactory.create(gson))
                .build();
        RetrofitApi api = retrofit.create(RetrofitApi.class);
        Call<NewsModel> call;
        if (category.equals("All")){
            call = api.getAllNews(BASEURL);
        }else{
            call = api.getAllNewByCategories(categoryUrl);
        }
        call.enqueue(new Callback<NewsModel>() {
            @Override
            public void onResponse(Call<NewsModel> call, Response<NewsModel> response) {
                NewsModel newsModel = response.body();
                bar.setVisibility(View.GONE);
                ArrayList<Articles> articlesArrayList = newsModel.getArticles();
                for (int i = 0; i<articlesArrayList.size();i++){
                    articlesArrayList.add(new Articles(articlesArrayList.get(i).getTitle()
                            ,articlesArrayList.get(i).getDescription()
                            ,articlesArrayList.get(i).getUrl()
                            ,articlesArrayList.get(i).getUrlTOImage(),articlesArrayList.get(i).getContent()));
                }
                newsRVAdapter.notifyDataSetChanged();


            }

            @Override
            public void onFailure(Call<NewsModel> call, Throwable t) {
                Toast.makeText(getApplicationContext(), "error is"+t.getMessage(), Toast.LENGTH_LONG).show();
                Log.d("TAG", "onFailure: Error is "+t.getMessage());
            }
        });
    }

    @Override
    public void onCategoryClicked(int position) {
        String category = categoryRVModelArrayList.get(position).getCategories();
        getNews(category);

    }
}