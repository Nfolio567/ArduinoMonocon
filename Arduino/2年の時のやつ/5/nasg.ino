int sesg(int lr,int nm){
  if(lr == 1){
  digitalWrite(nasgvcc[0],LOW);
    if(nm == 0){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//0
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);   
    }
  
    else if(nm == 1){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], LOW);//1
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);  
    }

    else if(nm == 2){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//2
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], LOW);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 3){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//3
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 4){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], LOW);//4
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 5){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//5
      digitalWrite(nasg[1], LOW);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }
    else if(nm == 6){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//6
      digitalWrite(nasg[1], LOW);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 7){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//7
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 8){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 9){
      digitalWrite(nasgvcc[1], HIGH);
      digitalWrite(nasg[0], HIGH);//9
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);

    }
  }else if(lr == 0){
  digitalWrite(nasgvcc[1],LOW);
    if(nm == 0){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//0
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);   
    }
  
    else if(nm == 1){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], LOW);//1
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);  
    }

    else if(nm == 2){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//2
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], LOW);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 3){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//3
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], LOW);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 4){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], LOW);//4
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 5){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//5
      digitalWrite(nasg[1], LOW);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }
    else if(nm == 6){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//6
      digitalWrite(nasg[1], LOW);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 7){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//7
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], LOW);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], LOW);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 8){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], HIGH);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);
    }

    else if(nm == 9){
      digitalWrite(nasgvcc[0], HIGH);
      digitalWrite(nasg[0], HIGH);//9
      digitalWrite(nasg[1], HIGH);
      digitalWrite(nasg[2], HIGH);
      digitalWrite(nasg[3], HIGH);
      digitalWrite(nasg[4], LOW);
      digitalWrite(nasg[5], HIGH);
      digitalWrite(nasg[6], HIGH);
      digitalWrite(nasg[7], LOW);

    }
  }
}
