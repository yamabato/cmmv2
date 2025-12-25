fact(n){
  if n<1 then return 1;
  else return n * fact(fact(n-1));
  endif;
}

main{
  var n,x;

  
  x := 2 - 5;
  write x++;
  writeln;
  write x;
  
  read n;
  write fact(n);
  writeln;
}
