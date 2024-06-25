#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    if (strpos($line, 'abc') !== false) {//文字列にabcが入っているかを確認
      echo "$line";
    }
  } 
?>
