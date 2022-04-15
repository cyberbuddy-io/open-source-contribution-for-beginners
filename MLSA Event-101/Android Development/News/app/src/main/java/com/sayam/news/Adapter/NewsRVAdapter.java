package com.sayam.news.Adapter;

import android.content.Context;
import android.content.Intent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.sayam.news.Model.Articles;
import com.sayam.news.R;
import com.sayam.news.Screens.NewsDetailActivity;
import com.squareup.picasso.Picasso;

import java.util.ArrayList;

public class NewsRVAdapter extends RecyclerView.Adapter<NewsRVAdapter.Viewholder> {
    ArrayList<Articles> articlesArrayList;
    Context context;

    public NewsRVAdapter(ArrayList<Articles> articlesArrayList, Context context) {
        this.articlesArrayList = articlesArrayList;
        this.context = context;
    }

    @NonNull
    @Override
    public NewsRVAdapter.Viewholder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.news,parent,false);
        return new NewsRVAdapter.Viewholder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull NewsRVAdapter.Viewholder holder, int position) {
        Articles articles = articlesArrayList.get(position);
        holder.subtitle.setText(articles.getDescription());
        holder.text.setText(articles.getTitle());
        Picasso.get().load(articles.getUrlTOImage()).into(holder.imageView);
        holder.itemView.setOnClickListener(v -> {
            Intent intent = new Intent(context, NewsDetailActivity.class);
            intent.putExtra("title",articles.getTitle());
            intent.putExtra("description",articles.getDescription());
            intent.putExtra("content",articles.getContent());
            intent.putExtra("image",articles.getUrlTOImage());
            intent.putExtra("url",articles.getUrl());
            context.startActivity(intent);
        });

    }

    @Override
    public int getItemCount() {
        return articlesArrayList.size();
    }

    public class Viewholder extends RecyclerView.ViewHolder {
        ImageView imageView;
        TextView text,subtitle;
        public Viewholder(@NonNull View itemView) {
            super(itemView);
            imageView = itemView.findViewById(R.id.headlineImg);
             text = itemView.findViewById(R.id.Headline);
             subtitle = itemView.findViewById(R.id.subtitle);
        }
    }
}
