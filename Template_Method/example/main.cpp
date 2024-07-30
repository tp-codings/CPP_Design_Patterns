#include "FetchQuest.h"
#include "DefeatBossQuest.h"

int main()
{
    Quest* fetchQuest = new FetchQuest();
    Quest* defeatBossQuest = new DefeatBossQuest();

    fetchQuest->performQuest();
    defeatBossQuest->performQuest();

    return 0;
}