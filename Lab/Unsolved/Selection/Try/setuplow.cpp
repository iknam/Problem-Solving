#include <iostream>
#include <set>



using namespace std;

// lower upper 

int main()
{
	// 셋(set) 컨테이너 생성
	set<int> setOne;



	// 데이터 삽입
	setOne.insert(200);
	setOne.insert(50);
	setOne.insert(100);
	setOne.insert(300);



	// 컨테이너에 저장된 모든 데이터 출력
	set<int>::iterator iter;
	for(iter = setOne.begin(); iter != setOne.end(); iter++)
	{
		cout << *iter << endl;
	}



	// lower_bound 함수와 upper_bound 함수의 반환 결과 출력
	iter = setOne.lower_bound(100);
	cout << "lower_bound의 결과 : " << *iter  << endl;
	iter = setOne.upper_bound(100);
	cout << "upper_bound의 결과 : " << *iter << endl;



	// lower_bound 함수와 upper_bound 함수의 반환 결과가 같으면 찾기 실패
	// i think same value is no fail
	if(setOne.lower_bound(1000) != setOne.upper_bound(1000))
	{
		cout << "1000 찾기 성공" << endl;
	}
	else
	{
		cout << "1000 찾기 실패" << endl;
	}
}

