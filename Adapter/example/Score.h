#ifndef SCORE_H
#define SCORE_H

#include <string>

class Score
{
    public:
        ~Score(){}

        static Score* getInstance()
        {
            if(!scoreInstance)
            {
                scoreInstance = new Score();
            }
            return scoreInstance;
        }

        void setScore(std::string score)
        {
            this->score = score;
        }
        std::string getScore()
        {
            return this->score;
        }

    private:
        std::string score;

        static Score* scoreInstance;

        Score()
        {
            this->score = "";
        }
};

Score* Score::scoreInstance = nullptr;

#endif