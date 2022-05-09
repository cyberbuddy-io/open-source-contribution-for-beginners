package com.example.weather_app_ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.List;

public class WeekAdapter extends RecyclerView.Adapter<WeekAdapter.ViewHolder> {

    private List<WeekModel> mlist;
    private Context context;
    private LayoutInflater inflater;

    public WeekAdapter(Context context, List<WeekModel> data){
        this.mlist = data;
        this.context = context;
        this.inflater = LayoutInflater.from(context);
    }

    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = inflater.inflate(R.layout.week,parent,false);
        return new WeekAdapter.ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        WeekModel wm = mlist.get(position);

        holder.name.setText(wm.getName());
        holder.day.setText(wm.getDayTemp());
        holder.night.setText(wm.getNightTemp());
        holder.icon.setImageResource(wm.getImg());
    }

    @Override
    public int getItemCount() {
        return mlist.size();
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {

        TextView name,day,night;
        ImageView icon;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);

            name = itemView.findViewById(R.id.week_name);
            day = itemView.findViewById(R.id.week_day_temp);
            night = itemView.findViewById(R.id.week_night_temp);
            icon = itemView.findViewById(R.id.icon);
        }
    }
}
