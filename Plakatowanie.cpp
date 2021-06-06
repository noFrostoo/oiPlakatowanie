//Daniel Lipniacki daniel.lipniacki@protonmail.com
#include <iostream>
#include <vector>


int main()
{
    std::ios_base::sync_with_stdio(0);
    
    uint32_t amountOfBuildings(false);
    std::cin >> amountOfBuildings;
    // we dont procces when there is no buildings
    if (amountOfBuildings == 0)
        return 0;

    std::vector<uint32_t> hights;
    uint32_t hight(0); 
    uint32_t width(0); //only used for cin operations 
    uint32_t minAmountOfPoster(0);
    
    for (size_t i = 0; i < amountOfBuildings; ++i)
    {
        //capture width and hight from cin
        std::cin >> width;
        std::cin >> hight;
        while (!hights.empty() && hights.back() > hight)
        {
            hights.pop_back();
        }
        if (hights.empty() || hights.back() < hight)
        {
            // the building in not redundant
            hights.push_back(hight);
            ++minAmountOfPoster;
        }
    }

    std::cout << minAmountOfPoster << std::endl;
}
