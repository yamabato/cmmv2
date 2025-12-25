fucn1(n){
  if n<1 then return 0;
  else return n + func2(n-1);
  endif;
}

func2(n){
  if n<1 then return 1;
  else return n * func1(n-1);
  endif;
}

main{
  var n;

  read n;
  write func1(n);
  writeln;
}
