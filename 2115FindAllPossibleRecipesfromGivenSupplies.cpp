class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        std::unordered_set<string> available(supplies.begin(), supplies.end());

        std::queue<int> recipeQ;
        for(int i = 0; i < recipes.size(); i++)
        {
            recipeQ.push(i);
        }

        std::vector<string> createdRecip;
        int lastSize = -1;

        while(available.size() > lastSize)
        {
            lastSize = available.size();
            int qSize = recipeQ.size();
        
            while(qSize > 0)
            {
                int RID = recipeQ.front();
                recipeQ.pop();
                bool canMake = true;

                for(string& ingredient : ingredients[RID])
                {
                    if(!available.count(ingredient))
                    {
                        canMake = false;
                        break;
                    }
                }

                if(!canMake)
                {
                    recipeQ.push(RID);
                }
                else
                {
                    available.insert(recipes[RID]);
                    createdRecip.push_back(recipes[RID]);
                }
                
                qSize--;

            }
        }
        return createdRecip;
    }
};
