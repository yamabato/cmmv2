func(n,t){
  if n<1 then return t;
  else return func(n-1,t*n);
  endif;
}

main{
  var n;

  read n;
  write func(n,1);
  writeln;
}
