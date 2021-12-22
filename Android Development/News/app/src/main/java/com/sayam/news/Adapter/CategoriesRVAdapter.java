package com.sayam.news.Adapter;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.sayam.news.Model.CategoryRVModel;
import com.sayam.news.R;
import com.squareup.picasso.Picasso;

import java.util.ArrayList;

public class CategoriesRVAdapter extends RecyclerView.Adapter<CategoriesRVAdapter.Viewholder> {
    ArrayList<CategoryRVModel> categoryRVModels;
    Context context;
    CategoryClicked categoryClicked;

    public CategoriesRVAdapter(ArrayList<CategoryRVModel> category, Context context,CategoryClicked categoryClicked) {
        this.categoryRVModels = category;
        this.context = context;
        this.categoryClicked = categoryClicked;
    }

    @NonNull
    @Override
    public Viewholder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(parent.getContext()).inflate(R.layout.categories,parent,false);
        return new Viewholder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull Viewholder holder, int position) {
        CategoryRVModel categoryRVModel = categoryRVModels.get(position);
        holder.categories.setText(categoryRVModel.getCategories());
        Picasso.get().load(categoryRVModel.getCategoriesImageUrl()).into(holder.categoryImage);
        holder.itemView.setOnClickListener(v -> {
            categoryClicked.onCategoryClicked(position);
        });
    }

    public interface CategoryClicked{
        void onCategoryClicked(int position);
    }

    @Override
    public int getItemCount() {
        return categoryRVModels.size();
    }

    public class Viewholder extends RecyclerView.ViewHolder {
        ImageView categoryImage;
        TextView categories;
        public Viewholder(@NonNull View itemView) {
            super(itemView);
            categoryImage = itemView.findViewById(R.id.rvImage);
            categories = itemView.findViewById(R.id.categories);
        }
    }
}
