SW expert Academy / c++
------------------

[8856 북북서](https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW1BsILa2X0DFARC&categoryId=AW1BsILa2X0DFARC&categoryType=CODE&&&)

```
1. 기약분수로 표현하기 위해 분모와 분자를 따로 계산한다.
2. 45로 묶었을 때 분자는 2의 지수승이 순차적으로 더해지고 분모는 2^(n-2)로 고정이다.
3. 가장 마지막에 '서'가 있을 때는 0도 이므로 계산하지 않도록 한다. 
4. '북', '서', '북서', '서북' 을 if문으로 예외처리한다.
```

[1768 숫자야구게임](https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV4su3xKXFUDFAUf)

```
1. from leechanwoo
2. main.cpp가 주어지고 참고되는 doUserImplementation() 함수만 작성하면 된다. 문제 이해 어려움.
3. 미리 작성된 query() API를 사용하고 예상 숫자와 비교하고 결과를 확인할 때마다 query 수가 증가한다. query가 적을수록 유리.
4. 가능한 숫자 조합을 초기 작업으로 구하여 배열에 저장한다.
5. query()로 결과를 받았을 때 정답을 배열에 있다고 가정하고 fake_query로 같은 결과가 나오는 것만 살린다. -> 핵심. 후보를 제거하는 방법.
```