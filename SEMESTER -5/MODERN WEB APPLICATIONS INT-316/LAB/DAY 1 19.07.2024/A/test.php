<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
        $time_arr =["08:45-09:45","09:45-10:45","10:45-11:00","11:00-12:00","12:00-01:00","01:00-02:00","02:00-03:00","03:00:03:15","03:15-04:15","04:15-05:15"];
        $n = sizeof($time_arr);

        $mon_arr=["MON","INT316-N","MGT132-N","BREAK","CSE317-N,CSE321-N","LUNCH","MGT133-N","BREAK","MINOR","MINOR"];
        $tue_arr=["TUE","ENG315-N","CSE316-N","BREAK","MGT132-N","LUNCH","CSE320-N","MGT133-N","","",""];
        $wed_arr=["WED","ENG315-N","INT316-N","BREAK","CSE317-N,CSE321-N","LUNCH","CSE316-N","BREAK","CSE320-N",""];
        $thu_arr=["THU","MGT133-N","CSE316-N","BREAK","MINOR","LUNCH","ENG315-N","MGT132-N","BREAK","INT136-N",""];
        $fri_arr=["FRI","CSE316-N","MGT132-N","BREAK","INT316-N","LUNCH","","","",""];
        $sat_arr=["SAT"];

        $DATA= [$mon_arr,$tue_arr,$wed_arr,$thu_arr,$fri_arr,$sat_arr];

       

        
        foreach($DATA as $day){
            foreach($day as $item){
                echo $item . " "; 
            }
            echo "\n";
        }
       
 ?>
</body>
</html>