<?php
$headers = getallheaders();
header("Content-Type: application/text");
if(isset($headers["username"]) && isset($headers["password"])){
    $username = strip_tags(filter_input($headers["username"], FILTER_SANITIZE_STRING));
    $password = strip_tags(filter_input($headers["password"], FILTER_SANITIZE_STRING));
}else if(isset($headers["session"])){
    header("session: true");
}