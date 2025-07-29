package com.example.trivia2rock

import android.media.Image
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Button
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.trivia2rock.ui.theme.Trivia2rockTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            Trivia2rockTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colors.background
                ) {
                    Greeting()
                }
            }
        }
    }
}

@Composable
fun Greeting() {

        Column(verticalArrangement = Arrangement.Top,
            horizontalAlignment = Alignment.CenterHorizontally) {
            Image(
                painter = painterResource(id = R.drawable._109_w023_n001_998b_p1_998),
                contentDescription = "Banner"
            )
            Text("Score",
                fontSize = 30.sp,
                modifier = Modifier.padding(top = 20.dp)
            )
            Text("0 / 4",
                fontSize = 50.sp,
                modifier = Modifier.padding(top = 20.dp),
                fontWeight = FontWeight.Bold
            )
            Row(horizontalArrangement = Arrangement.Center,
                modifier = Modifier.padding(top = 50.dp)) {
                Column(modifier = Modifier.padding(all = 45.dp)) {
                    Text(text = "You Chose",
                        fontSize = 16.sp
                    )
                    Text(text = "Rock",
                        fontWeight = FontWeight.Bold,
                        fontSize = 32.sp,
                        modifier = Modifier.padding(top = 5.dp))
                }
                Column(modifier = Modifier.padding(all = 45.dp)) {
                    Text(text = "Android Chose",
                        fontSize = 16.sp
                    )
                    Text(text = "Paper",
                        fontWeight = FontWeight.Bold,
                        fontSize = 32.sp,
                        modifier = Modifier.padding(top = 5.dp))
                }

            }
            Row(horizontalArrangement = Arrangement.Center,
                //verticalAlignment = Alignment.CenterVertically,
                modifier = Modifier.padding(top = 80.dp)) {
                Column(modifier = Modifier.padding(15.dp)) {
                    Button(onClick = {},
                        modifier = Modifier
                            .height(90.dp)
                            .width(90.dp),
                        shape = RoundedCornerShape(15)
                    ) {
                        Text("Rock")
                    }
                }
                Column(modifier = Modifier.padding(15.dp)){
                    Button(onClick = {},
                        modifier = Modifier
                            .height(90.dp)
                            .width(90.dp),
                        shape = RoundedCornerShape(15)
                    ) {
                        Text("Paper")
                    }
                }
                Column(modifier = Modifier.padding(15.dp)) {
                    Button(onClick = {},
                        modifier = Modifier
                            .height(90.dp)
                            .width(96.dp),
                        shape = RoundedCornerShape(15)
                    ) {
                        Text("Scissors")
                    }
                }

            }
            Column(verticalArrangement = Arrangement.Bottom,
                horizontalAlignment = Alignment.CenterHorizontally) {
                Text("#JetpackCompose", modifier = Modifier.padding(all = 15.dp),
                    fontSize = 20.sp)
            }
        }



}

@Preview(showBackground = true)
@Composable
fun DefaultPreview() {
    Trivia2rockTheme {
        Greeting()
    }
}