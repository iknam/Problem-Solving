#include <iostream>

using namespace std;

int main ()
{
	// 한 문제당 제출 횟수, 경과시간
	struct p
	{
		int nsubmit; 
		int elapse;
	};

	// 한 팀당 정보
	struct t
	{
		char name[20];
		struct p prob[4];
		int solved;
		int penalty;
	};

	int N, i, temp = 0, same_solved[10] = {0, }, N_temp, cnt = 0;
	struct t team[10] = {"", 0, 0};

	cin >> N;

	N_temp = N;

	while(N--) {
		cin >> team[N].name;

		for(i = 0; i < 4; ++i) {
			cin >> team[N].prob[i].nsubmit
				>> team[N].prob[i].elapse;
			if(team[N].prob[i].elapse != 0) {
				team[N].solved++;
				team[N].penalty += (team[N].prob[i].nsubmit - 1) * 20
					+ team[N].prob[i].elapse;
			}// need to edit
		}	
		if(team[N].solved > temp) {
			temp = team[N].solved;
		}
		/*else if(team[N].solved == temp) {
		  same_solved[N] = 1;
		  }  1 2 2 3 incorrect same_solved switch*/
	}

	for(i = 0; i < N_temp; i++) {
		if(team[i].solved == temp) {
			cnt++;
		}
		else {
			team[i].penalty += 1000;
		}
	}
// of course pen win but this is not
	temp = 999;

	if(cnt > 1) {
		for(i = 0; i < N_temp; i++) {
			if(team[i].penalty <= temp) {
				temp = team[i].penalty;
			}
		}
		for(i = 0; i <N_temp; i++) {
			if(team[i].penalty == temp) {
				cout << team[i].name << " " << team[i].solved << " " << team[i].penalty;
			}
		}

	}
// else is problem
/*	else {
		cout << team[i].name << " " << team[i].solved << " " << team[i].penalty;
	}*/

	return 0;
}
