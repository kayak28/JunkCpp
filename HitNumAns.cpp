#include <cstdlib>
using namespace std;

static int ans = 0;
extern int maxNum;

//generate a num in domain{ans| 0 <= ans <= maxNum }
void start()
{
	ans = rand()%(maxNum + 1); 
}
int judge(int cand)
{
	int diff = cand - ans;
	
	if(diff == 0)
	{
		return 0;
	}
	else if(diff > 0)//bigger
	{
		return 1;
	}
	else//smaller  
	{
		return -1;
	}
}
