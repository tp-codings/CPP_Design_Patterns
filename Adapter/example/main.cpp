#include "Score.h"
#include "Settings.h"
#include "StorageManagement.h"
#include "StorageAdapter.h"

int main()
{
    Settings* settings = Settings::getInstance();
    Score* score = Score::getInstance();
    StorageManagement* storageAdapter = new StorageAdapter();

    score->setScore(
    "============== S C O R E ==============\n\
    COORDINATES: (54.23, 2322.55, 21.98)\n\
    PLAYER HEALTH: 78\n\
    STATISTICS: {...}\n\
    ...");
    
    // manually save the score
    storageAdapter->save(score->getScore());

    settings->setSaveToCloud(true);

    // some other process might save the score elsewhere in the code
    storageAdapter->save(score->getScore());
}