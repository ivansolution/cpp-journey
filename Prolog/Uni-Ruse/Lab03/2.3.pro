/*

3 задача: 

Да се дефинира предикат, който 
- по зададена стойност на X, 
- изчислява стойността на f(X) по функцията:

f(x) = 
{
	-1, 
		x > 20 U x < -20
	x-4, 
		-20 <= x <= 10
	10 / (x^2 + 5),
		10 < x <= 20
}

*/

f(X, Result) :-
	(X > 20;
	X < -20),
	Result is -1.
f(X, Result) :-
	-20 =< X,
	X =< 10,
	Result is (X - 4).
f(X, Result) :-
	10 < X,
	X =< 20,
	Result is (10 / (X*X + 5)).

?-f(11, Result), write(Result), nl, !.
