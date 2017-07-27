#include<iostream>

using namespace std;
//search,insert,delete 모두 최악일때 lgn을 가짐.
//기본 이진트리처럼 되지 않기 위해서, 삽입 삭제 뒤에는 정렬을 하낟.
//노드는 하나의 키 left,right,p를 저장한다. 여기서 parent는 무조건 저장 안해도 된다.
//자식이 없다면, 리프노드라면 NIL노드라는 특수 노드가 존재하낟.
//루트의 부모도 NIL라고한다. 노드는 내부, 줄기와 리프 NIL 노드로 나눈다.
//
//1.각 노드는 red 혹은 black
//2.루트는 black이다.
//3.모든 리피,NIL노드는 BLACK이다.->NIL은 BLACK
//4.red의 자식은 모드 BLACK. red는 연속되면 안된다.
//5.** 모든 노드에 대하여 그 노드로부터 자손인 리프까지 이르는 모든 경로에는  동일한 black 갯수가
// 존재해야한다.
//
//노드 x의 높이 h는리프노드까지 가장 긴 경로에 포함된 예지 개수
//노드 x의 블랙 높이 bh는 x로부터 리프까지 경로상의 블랙노드의 갯수 자신은 미포함
//높이 h인 노드에서는 bh>=h/2 레드는 연속 불가능이므로 당연.
//내부노드는 최소 2^bh -1개.
//n노드 갯수를 가질 대 높이는 2lg(n+1) 당연한 것이 내부 노드를 2^bh-1이라고 하였을 때
//2*lg(2^bh)이며 이것은 2*bh가량 된다는 것이다. 이러한 것은 2bh>=h이므로 거의 동일하다 볼 수 있다.
//이 한쪽으로 기우는 것을 막기 위해서 left rotate와 right rotate가 존재한다.
//left roatate는 내 오른 자식이 내 부모로, 내가 왼쪽 자식으로 가는것.
//x의 자식은 a,y .y의 자식은 b,c -> 변화후 x의 자식은 a,b y의 자식은 x,c
//
//
//right rotate는 내 왼쪽 자식이 내 부모로 내가 오른쪽 자식으로 움직이낟.
//
//
//
void right_rotate(){
y = x[right];
x[left]//그대로.
x[right] = y[left];
y[left] = x;
y[부모] = x[부모];
x[부모] = y;'




}







int main(void){

return 0;
}
