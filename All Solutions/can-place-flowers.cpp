class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(flowerbed.size()>1)
        {
            for(int i=0;i<flowerbed.size();i++)
            {
                if(i==0)
                {
                    if(flowerbed[i]==0&&flowerbed[i+1]==0)
                        flowerbed[i]=1,n--;
                }
                else if(i==flowerbed.size()-1)
                {
                    if(flowerbed[i]==0&&flowerbed[i-1]==0)
                        flowerbed[i]=1,n--;
                }
                else
                {
                    if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0)
                        flowerbed[i]=1,n--;
                }
            }
        }
        else
        {
            if(flowerbed.size()==1&&flowerbed[0]==0)
                flowerbed[0]=1,n--;
                
        }
        if(n>0)
            return false;
        return true;
    }
};
