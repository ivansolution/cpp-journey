/* 

3 задача: Да се напише предикат, който при зададени дължини на катетите на правоъгълен триъгълник a и b, намира неговото лице.

*/

area(A, B, Area) :-
  Area is (A + B) / 2.

?-area(3, 3, Area), write(Area), nl.
