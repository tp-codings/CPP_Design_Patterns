#ifndef BOX_H
#define BOX_H

#include "Component.h"
#include <vector>

class Box : public Component{
    private:
        std::vector<Component*> _children;
        std::string _packageInfo;

    public:
        Box() = default;
        Box(std::string packageInfo) : _packageInfo(packageInfo){

        }

        void add(Component* component){
            this->_children.push_back(component);
        }

        // void remove(Component* component){
        //     if(this->_children.size()>0){
        //         component = this->_children.pop_back();
        //     }
        // }

        std::vector<Component*> getChildren(){
            return this->_children;
        }

        float calculatePrize(){
            float prize = 0.0f;
            for(auto i : this->_children){
                prize += i->calculatePrize();
            }
            return prize;
        }

        std::vector<std::string> getPackageInfo(){
            std::vector<std::string> packageInfo;
            packageInfo.push_back("---------------------\n" + this->_packageInfo + " contains:");
            for(auto i : this->_children){
                for(auto j : i->getPackageInfo()){
                    packageInfo.push_back(j);
                }
            }
            packageInfo.push_back("---------------------");
            return packageInfo;
        }
};

#endif