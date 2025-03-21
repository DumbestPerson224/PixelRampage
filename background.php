<?php
header("Content-Type: application/text");
header("X-Response: NULL");
$request = file_get_contents("php://input");
if(isset($request['background'])){
}