## 상속

자바에서 상속(Inheritance)은 객체 지향 프로그래밍의 중요한 개념 중 하나로, 한 클래스가 다른 클래스의 속성과 메서드를 상속받아 사용하는 것을 의미한다. 이를 통해 코드의 재사용성을 높이고, 객체 지향 설계의 계층 구조를 형성할 수 있다.

상속은 기존 클래스의 속성과 메서드를 새로운 클래스에서 물려받아 사용하는 기능이다.

자식 클래스는 부모 클래스의 특성과 동작을 그대로 사용할 수 있으며, 필요에 따라 일부 속성이나 메서드를 재정의(오버라이딩)하거나 새로운 속성과 메서드를 추가할 수 있다.

## 개념

1. 자식이 오버라이드(재정의)한 것은 자식 것으로 쓰인다.

2. 자식이 재정의하지 않은 것은 부모 것으로 쓰인다.

3. 자식 클래스가 태어날 떄는 본인 생성자보다 부모의 생성자를 먼저 호출한다.

## 부모 위에 조부모

생성자는 조부모부터 생성된다.

## 외울 것

1. 자식이 상속받아 재정의한 것은 재정의한 것으로 쓰인다.

2. 자식이 태얼날 때는 상속받은 모든 부모의 생성자를 위에서부터 호출한다.

3. 자식이 부모의 생성자를 명시적으로 호출하는 함수는 super()이다.

4. 만약 부모가 생성자가 여러개(오버로딩)이라면, super()안의 매개변수로 조절한다.
