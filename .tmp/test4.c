fact1(n){
  if n<1 then return 1;
  else return n * fact1(n-1);
  endif;
}

fact2(n){
  if n<1 then return 0;
  else return n + fact2(n-1);
  endif;
}

main{
  var n,x;

  
  read n;
  read x;
  while  x > 0 do {
	x := x - 1;
        write fact1(n);
        write fact2(n);
        write fact1(n)+fact2(n);
	writeln;
        n := n - 1;
  }
  writeln;
}
